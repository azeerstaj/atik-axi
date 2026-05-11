import pya

in_gds = globals().get("in_gds", "")
out_png = globals().get("out_png", "")
if not in_gds or not out_png:
    raise RuntimeError("Pass -rd in_gds=/path/input.gds and -rd out_png=/path/output.png")

view = pya.LayoutView()
view.load_layout(in_gds, 0)
view.add_missing_layers()
view.max_hier()
view.zoom_fit()
view.save_image(out_png, 2400, 2400)
