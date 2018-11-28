
#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Glyph.h"

class Rectangle : public Glyph {
public:

    Rectangle(int x0, int y0, int x1, int y1) :
        _x0 = x0, _y0 = y0, _x1 = x1, _y1 = y1) {};

    void Draw(Window);

private:
    /* define two opposing corners of the rectangle */
    int _x0, _y0, _x1, _y1;
};

#endif /* _RECTANGLE_H_ */

