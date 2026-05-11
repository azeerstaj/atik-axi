#!/usr/bin/env python3
import argparse
import re

from render_def_png import parse_def, parse_lef_sizes, color_for_master, draw_rect, write_png


FONT = {
    "A": ["01110", "10001", "10001", "11111", "10001", "10001", "10001"],
    "B": ["11110", "10001", "10001", "11110", "10001", "10001", "11110"],
    "C": ["01111", "10000", "10000", "10000", "10000", "10000", "01111"],
    "D": ["11110", "10001", "10001", "10001", "10001", "10001", "11110"],
    "E": ["11111", "10000", "10000", "11110", "10000", "10000", "11111"],
    "F": ["11111", "10000", "10000", "11110", "10000", "10000", "10000"],
    "G": ["01111", "10000", "10000", "10111", "10001", "10001", "01111"],
    "H": ["10001", "10001", "10001", "11111", "10001", "10001", "10001"],
    "I": ["11111", "00100", "00100", "00100", "00100", "00100", "11111"],
    "J": ["00111", "00010", "00010", "00010", "10010", "10010", "01100"],
    "K": ["10001", "10010", "10100", "11000", "10100", "10010", "10001"],
    "L": ["10000", "10000", "10000", "10000", "10000", "10000", "11111"],
    "M": ["10001", "11011", "10101", "10101", "10001", "10001", "10001"],
    "N": ["10001", "11001", "10101", "10011", "10001", "10001", "10001"],
    "O": ["01110", "10001", "10001", "10001", "10001", "10001", "01110"],
    "P": ["11110", "10001", "10001", "11110", "10000", "10000", "10000"],
    "Q": ["01110", "10001", "10001", "10001", "10101", "10010", "01101"],
    "R": ["11110", "10001", "10001", "11110", "10100", "10010", "10001"],
    "S": ["01111", "10000", "10000", "01110", "00001", "00001", "11110"],
    "T": ["11111", "00100", "00100", "00100", "00100", "00100", "00100"],
    "U": ["10001", "10001", "10001", "10001", "10001", "10001", "01110"],
    "V": ["10001", "10001", "10001", "10001", "10001", "01010", "00100"],
    "W": ["10001", "10001", "10001", "10101", "10101", "10101", "01010"],
    "X": ["10001", "10001", "01010", "00100", "01010", "10001", "10001"],
    "Y": ["10001", "10001", "01010", "00100", "00100", "00100", "00100"],
    "Z": ["11111", "00001", "00010", "00100", "01000", "10000", "11111"],
    "0": ["01110", "10001", "10011", "10101", "11001", "10001", "01110"],
    "1": ["00100", "01100", "00100", "00100", "00100", "00100", "01110"],
    "2": ["01110", "10001", "00001", "00010", "00100", "01000", "11111"],
    "3": ["11110", "00001", "00001", "01110", "00001", "00001", "11110"],
    "4": ["00010", "00110", "01010", "10010", "11111", "00010", "00010"],
    "5": ["11111", "10000", "10000", "11110", "00001", "00001", "11110"],
    "6": ["01110", "10000", "10000", "11110", "10001", "10001", "01110"],
    "7": ["11111", "00001", "00010", "00100", "01000", "01000", "01000"],
    "8": ["01110", "10001", "10001", "01110", "10001", "10001", "01110"],
    "9": ["01110", "10001", "10001", "01111", "00001", "00001", "01110"],
    " ": ["0", "0", "0", "0", "0", "0", "0"],
    "-": ["00000", "00000", "00000", "11111", "00000", "00000", "00000"],
    "/": ["00001", "00001", "00010", "00100", "01000", "10000", "10000"],
    ".": ["0", "0", "0", "0", "0", "011", "011"],
    ":": ["0", "011", "011", "0", "011", "011", "0"],
}


LAYER_COLORS = {
    "li1": (150, 90, 255),
    "met1": (80, 180, 255),
    "met2": (90, 255, 170),
    "met3": (255, 210, 70),
    "met4": (255, 120, 90),
    "met5": (255, 80, 210),
}


def draw_text(img, x, y, text, color=(245, 245, 245), scale=2):
    cx = int(x)
    for ch in text.upper():
        pat = FONT.get(ch, FONT[" "])
        w = max(len(row) for row in pat)
        for yy, row in enumerate(pat):
            for xx, bit in enumerate(row):
                if bit == "1":
                    draw_rect(img, len(img[0]), len(img), cx + xx * scale, y + yy * scale,
                              cx + (xx + 1) * scale, y + (yy + 1) * scale, color, 255)
        cx += (w + 1) * scale


def parse_routes(def_path, limit_regular=1200000):
    segment_re = re.compile(
        r"(?:\+\s+)?(?:ROUTED|NEW)\s+(\S+)(?:\s+\d+)?"
        r".*?\(\s*(-?\d+|\*)\s+(-?\d+|\*)\s*\)\s+\(\s*(-?\d+|\*)\s+(-?\d+|\*)\s*\)"
    )
    sections = []
    current = None
    regular_count = 0
    with open(def_path, "r", errors="ignore") as f:
        for line in f:
            if line.startswith("SPECIALNETS"):
                current = "special"
                continue
            if line.startswith("NETS"):
                current = "regular"
                continue
            if line.startswith("END SPECIALNETS") or line.startswith("END NETS"):
                current = None
                continue
            if current is None:
                continue
            m = segment_re.search(line)
            if not m:
                continue
            layer, x0, y0, x1, y1 = m.groups()
            if x0 == "*" or y0 == "*":
                continue
            x1 = x0 if x1 == "*" else x1
            y1 = y0 if y1 == "*" else y1
            if current == "regular":
                if regular_count >= limit_regular:
                    continue
                regular_count += 1
            sections.append((current, layer, int(x0), int(y0), int(x1), int(y1)))
    return sections


def draw_line_rect(img, width, height, x0, y0, x1, y1, color, thickness=1, alpha=180):
    if abs(x1 - x0) >= abs(y1 - y0):
        draw_rect(img, width, height, min(x0, x1), y0 - thickness, max(x0, x1) + 1, y0 + thickness + 1, color, alpha)
    else:
        draw_rect(img, width, height, x0 - thickness, min(y0, y1), x0 + thickness + 1, max(y0, y1) + 1, color, alpha)


def draw_legend(img, entries, title):
    width = len(img[0])
    x0 = width - 390
    y0 = 24
    row_h = 26
    box_w = 360
    box_h = 54 + row_h * len(entries)
    draw_rect(img, width, len(img), x0 - 12, y0 - 12, x0 + box_w, y0 + box_h, (0, 0, 0), 185)
    draw_rect(img, width, len(img), x0 - 12, y0 - 12, x0 + box_w, y0 - 9, (235, 235, 235), 255)
    draw_text(img, x0, y0, title[:28], (255, 255, 255), 2)
    y = y0 + 34
    for label, color in entries:
        draw_rect(img, width, len(img), x0, y + 2, x0 + 22, y + 18, color, 255)
        draw_text(img, x0 + 32, y + 1, label[:28], (235, 235, 235), 2)
        y += row_h


def render(args):
    sizes = parse_lef_sizes(args.lef_path)
    units, die, rows, comps, pins = parse_def(args.def_path)
    routes = parse_routes(args.def_path, args.max_regular_routes) if args.routes else []

    dx0, dy0, dx1, dy1 = [v / units for v in die]
    if args.crop:
        dx0, dy0, dx1, dy1 = [float(v) for v in args.crop.split(",")]

    margin = 50
    legend_extra = 430 if args.legend else 0
    span_x = dx1 - dx0
    span_y = dy1 - dy0
    scale = (args.size - 2 * margin) / max(span_x + legend_extra / 8, span_y)
    width = max(1, int(span_x * scale + 2 * margin + legend_extra))
    height = max(1, int(span_y * scale + 2 * margin))
    img = [[(8, 10, 16) for _ in range(width)] for _ in range(height)]

    def tx(x):
        return margin + (x - dx0) * scale

    def ty(y):
        return height - margin - (y - dy0) * scale

    draw_rect(img, width, height, tx(dx0), ty(dy1), tx(dx1), ty(dy0), (16, 20, 30), 255)

    for x, y, nx, ny, sx, sy in rows:
        rx0 = x / units
        ry0 = y / units
        rh = 2.72
        rw = (nx * sx) / units if sx else span_x
        if rx0 > dx1 or rx0 + rw < dx0 or ry0 > dy1 or ry0 + rh < dy0:
            continue
        draw_rect(img, width, height, tx(rx0), ty(ry0 + rh), tx(rx0 + rw), ty(ry0), (28, 35, 50), 100)

    if args.routes:
        for kind, layer, x0, y0, x1, y1 in routes:
            ux0, uy0, ux1, uy1 = x0 / units, y0 / units, x1 / units, y1 / units
            if max(ux0, ux1) < dx0 or min(ux0, ux1) > dx1 or max(uy0, uy1) < dy0 or min(uy0, uy1) > dy1:
                continue
            base = LAYER_COLORS.get(layer, (210, 210, 210))
            alpha = 210 if kind == "special" else args.route_alpha
            thick = 2 if kind == "special" else 1
            draw_line_rect(img, width, height, tx(ux0), ty(uy0), tx(ux1), ty(uy1), base, thick, alpha)

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
        draw_rect(img, width, height, px0, py0, px1, py1, color_for_master(master), args.cell_alpha)

    for name, x, y, _orient in pins:
        px = tx(x / units)
        py = ty(y / units)
        color = (255, 245, 120) if name in ("VPWR", "VGND") else (245, 245, 245)
        draw_rect(img, width, height, px - 5, py - 5, px + 6, py + 6, color, 255)

    draw_rect(img, width, height, tx(dx0), ty(dy1), tx(dx1), ty(dy1) + 2, (245, 245, 245), 255)
    draw_rect(img, width, height, tx(dx0), ty(dy0) - 2, tx(dx1), ty(dy0), (245, 245, 245), 255)
    draw_rect(img, width, height, tx(dx0), ty(dy1), tx(dx0) + 2, ty(dy0), (245, 245, 245), 255)
    draw_rect(img, width, height, tx(dx1) - 2, ty(dy1), tx(dx1), ty(dy0), (245, 245, 245), 255)

    if args.legend:
        entries = [
            ("ROWS", (28, 35, 50)),
            ("FLOPS/LATCHES", (55, 190, 255)),
            ("BUFS/INVS", (255, 150, 60)),
            ("CLOCK CELLS", (255, 210, 70)),
            ("DIODE CELLS", (255, 80, 80)),
            ("NAND/NOR", (100, 170, 255)),
            ("MUX", (185, 110, 255)),
            ("FILL/DECAP/TAP", (62, 66, 76)),
            ("PINS", (245, 245, 245)),
            ("LI1", LAYER_COLORS["li1"]),
            ("MET1", LAYER_COLORS["met1"]),
            ("MET2", LAYER_COLORS["met2"]),
            ("MET3", LAYER_COLORS["met3"]),
            ("MET4", LAYER_COLORS["met4"]),
            ("MET5", LAYER_COLORS["met5"]),
        ]
        draw_legend(img, entries, args.title)

    write_png(args.out, img)
    print(f"wrote {args.out}: {width}x{height}, components={len(comps)}, pins={len(pins)}, route_segments={len(routes)}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--def", dest="def_path", required=True)
    ap.add_argument("--lef", dest="lef_path", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--title", default="DETAILED DEF VIEW")
    ap.add_argument("--size", type=int, default=3200)
    ap.add_argument("--crop", default=None, help="micron crop: x0,y0,x1,y1")
    ap.add_argument("--routes", action="store_true")
    ap.add_argument("--legend", action="store_true")
    ap.add_argument("--cell-alpha", type=int, default=185)
    ap.add_argument("--route-alpha", type=int, default=135)
    ap.add_argument("--max-regular-routes", type=int, default=1200000)
    render(ap.parse_args())


if __name__ == "__main__":
    main()
