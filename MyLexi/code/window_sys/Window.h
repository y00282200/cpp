
#ifndef _WINDOW_H_
#define _WINDOW_H_

/*
   Window class defines graphics operations for rendering text and
       basic shapes in window on a screen.

   2018-11-28 20:43
   Jz Wang
*/
class Window {
    /* makes the rectangle appear on the screen */
    virtual void DrawRect(int x0, int y0, int x1, int y1);
    virtual void DrawCharacter(char c);
};

#endif /* _WINDOW_H */
