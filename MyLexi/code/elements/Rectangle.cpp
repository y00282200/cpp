
#inlcude "Rectangle.h"

/* render itself onto a window */
void Rectangle::Draw(Window* w) {
    w->DrawRect(_x0, _y0, _x1, _y1);
}
