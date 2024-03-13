Void main() {
  int gd = DETECT, gm, left = 100, top = 100, right = 200, bottom = 200;
  initgraph(&gd, &gm, "C:\\TC\\BGI");
  setfillstyle(SOLID_FILL, RED);
  rectangle(left, top, right, bottom);
}
