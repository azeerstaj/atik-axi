#!/usr/bin/env python3
import argparse
import re
import struct
import zlib


def parse_lef_sizes(path):
    sizes = {}
    current = None
    macro_re = re.compile(r"^\s*MACRO\s+(\S+)")
    size_re = re.compile(r"^\s*SIZE\s+([0-9.]+)\s+BY\s+([0-9.]+)\s*;")
    end_re = re.compile(r"^\s*END\s+(\S+)")
    with open(path, "r", errors="ignore") as f:
        for line in f:
            m = macro_re.match(line)
            if m:
                current = m.group(1)
                continue
            if current:
                m = size_re.match(line)
                if m:
                    sizes[current] = (float(m.group(1)), float(m.group(2)))
                    continue
                m = end_re.match(line)
                if m and m.group(1) == current:
                    current = None
    return sizes


def parse_def(path):
    die = None
    rows = []
    comps = []
    pins = []
    units = 1000
    section = None
    units_re = re.compile(r"UNITS\s+DISTANCE\s+MICRONS\s+(\d+)")
    die_re = re.compile(r"DIEAREA\s+\(\s*(-?\d+)\s+(-?\d+)\s*\)\s+\(\s*(-?\d+)\s+(-?\d+)\s*\)")
    row_re = re.compile(r"ROW\s+\S+\s+\S+\s+(-?\d+)\s+(-?\d+)\s+\S+\s+DO\s+(\d+)\s+BY\s+(\d+)\s+STEP\s+(-?\d+)\s+(-?\d+)")
    comp_re = re.compile(r"^\s*-\s+(\S+)\s+(\S+).*?\+\s+(?:PLACED|FIXED)\s+\(\s*(-?\d+)\s+(-?\d+)\s*\)\s+(\S+)")
    pin_start_re = re.compile(r"^\s*-\s+(\S+)")
    place_re = re.compile(r"\+\s+(?:PLACED|FIXED)\s+\(\s*(-?\d+)\s+(-?\d+)\s*\)\s+(\S+)")
    cur_pin = None

    with open(path, "r", errors="ignore") as f:
        for line in f:
            m = units_re.search(line)
            if m:
                units = int(m.group(1))
            m = die_re.search(line)
            if m:
                die = tuple(int(x) for x in m.groups())
            m = row_re.search(line)
            if m:
                rows.append(tuple(int(x) for x in m.groups()))

            if line.startswith("COMPONENTS"):
                section = "components"
                continue
            if line.startswith("PINS"):
                section = "pins"
                continue
            if line.startswith("END COMPONENTS") or line.startswith("END PINS"):
                section = None
                cur_pin = None
                continue

            if section == "components":
                m = comp_re.match(line)
                if m:
                    name, master, x, y, orient = m.groups()
                    comps.append((name, master, int(x), int(y), orient))
            elif section == "pins":
                m = pin_start_re.match(line)
                if m:
                    cur_pin = m.group(1)
                if cur_pin:
                    m = place_re.search(line)
                    if m:
                        x, y, orient = m.groups()
                        pins.append((cur_pin, int(x), int(y), orient))

    if die is None:
        raise RuntimeError("No DIEAREA found in DEF")
    return units, die, rows, comps, pins


def color_for_master(master):
    m = master.lower()
    if "diode" in m:
        return (255, 80, 80)
    if "decap" in m or "fill" in m or "tap" in m:
        return (62, 66, 76)
    if "clk" in m:
        return (255, 210, 70)
    if "buf" in m or "inv" in m:
        return (255, 150, 60)
    if "mux" in m:
        return (185, 110, 255)
    if "df" in m or "dfr" in m or "dl" in m:
        return (55, 190, 255)
    if "a21" in m or "a22" in m or "o21" in m or "o22" in m:
        return (80, 220, 150)
    if "nand" in m or "nor" in m:
        return (100, 170, 255)
    if "xor" in m or "xnor" in m:
        return (255, 110, 180)
    return (135, 190, 255)


def blend(dst, src, alpha=255):
    if alpha >= 255:
        return src
    ia = 255 - alpha
    return tuple((src[i] * alpha + dst[i] * ia) // 255 for i in range(3))


def draw_rect(img, width, height, x0, y0, x1, y1, color, alpha=255):
    x0 = max(0, min(width, int(x0)))
    x1 = max(0, min(width, int(x1)))
    y0 = max(0, min(height, int(y0)))
    y1 = max(0, min(height, int(y1)))
    if x1 <= x0 or y1 <= y0:
        return
    for y in range(y0, y1):
        row = img[y]
        for x in range(x0, x1):
            row[x] = blend(row[x], color, alpha)


def write_png(path, pixels):
    height = len(pixels)
    width = len(pixels[0])
    raw = bytearray()
    for row in pixels:
        raw.append(0)
        for r, g, b in row:
            raw.extend((r, g, b))

    def chunk(tag, data):
        return (
            struct.pack(">I", len(data))
            + tag
            + data
            + struct.pack(">I", zlib.crc32(tag + data) & 0xFFFFFFFF)
        )

    png = bytearray(b"\x89PNG\r\n\x1a\n")
    png.extend(chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 2, 0, 0, 0)))
    png.extend(chunk(b"IDAT", zlib.compress(bytes(raw), 6)))
    png.extend(chunk(b"IEND", b""))
    with open(path, "wb") as f:
        f.write(png)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--def", dest="def_path", required=True)
    ap.add_argument("--lef", dest="lef_path", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--size", type=int, default=2600)
    ap.add_argument("--crop", default=None, help="micron crop: x0,y0,x1,y1")
    args = ap.parse_args()

    sizes = parse_lef_sizes(args.lef_path)
    units, die, rows, comps, pins = parse_def(args.def_path)
    dx0, dy0, dx1, dy1 = [v / units for v in die]
    if args.crop:
        dx0, dy0, dx1, dy1 = [float(v) for v in args.crop.split(",")]

    margin = 35
    span_x = dx1 - dx0
    span_y = dy1 - dy0
    scale = (args.size - 2 * margin) / max(span_x, span_y)
    width = max(1, int(span_x * scale + 2 * margin))
    height = max(1, int(span_y * scale + 2 * margin))
    bg = (10, 12, 18)
    img = [[bg for _ in range(width)] for _ in range(height)]

    def tx(x):
        return margin + (x - dx0) * scale

    def ty(y):
        return height - margin - (y - dy0) * scale

    # Die and rows.
    draw_rect(img, width, height, tx(dx0), ty(dy1), tx(dx1), ty(dy0), (18, 22, 32), 255)
    for x, y, nx, ny, sx, sy in rows:
        rx0 = x / units
        ry0 = y / units
        rh = 2.72
        rw = (nx * sx) / units if sx else span_x
        if rx0 > dx1 or rx0 + rw < dx0 or ry0 > dy1 or ry0 + rh < dy0:
            continue
        draw_rect(img, width, height, tx(rx0), ty(ry0 + rh), tx(rx0 + rw), ty(ry0), (28, 34, 48), 90)

    # Cells.
    default_h = 2.72
    for _name, master, x, y, _orient in comps:
        cx = x / units
        cy = y / units
        mw, mh = sizes.get(master, (0.46, default_h))
        if cx > dx1 or cx + mw < dx0 or cy > dy1 or cy + mh < dy0:
            continue
        px0, px1 = tx(cx), tx(cx + mw)
        py0, py1 = ty(cy + mh), ty(cy)
        if px1 - px0 < 1.0:
            px1 = px0 + 1.0
        if py1 - py0 < 1.0:
            py1 = py0 + 1.0
        draw_rect(img, width, height, px0, py0, px1, py1, color_for_master(master), 210)

    # IO pins, larger dots.
    for name, x, y, _orient in pins:
        px = tx(x / units)
        py = ty(y / units)
        color = (255, 245, 120) if name in ("VPWR", "VGND") else (245, 245, 245)
        draw_rect(img, width, height, px - 4, py - 4, px + 5, py + 5, color, 255)

    # Border.
    draw_rect(img, width, height, tx(dx0), ty(dy1), tx(dx1), ty(dy1) + 2, (240, 240, 240), 255)
    draw_rect(img, width, height, tx(dx0), ty(dy0) - 2, tx(dx1), ty(dy0), (240, 240, 240), 255)
    draw_rect(img, width, height, tx(dx0), ty(dy1), tx(dx0) + 2, ty(dy0), (240, 240, 240), 255)
    draw_rect(img, width, height, tx(dx1) - 2, ty(dy1), tx(dx1), ty(dy0), (240, 240, 240), 255)

    write_png(args.out, img)
    print(f"wrote {args.out}: {width}x{height}, components={len(comps)}, pins={len(pins)}")


if __name__ == "__main__":
    main()
