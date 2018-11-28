
#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include "Glyph.h"
#include "Window.h"
#include "Point.h"

class Character : public Glyph {
 public:
    void Draw(Window* w);
    bool Intersects(Point p);

 private:
    char c;
};

#endif /* _CHARACTER_H_ */
