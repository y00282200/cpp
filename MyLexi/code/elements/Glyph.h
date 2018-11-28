
#ifndef _GLYPH_H
#define _GLYPH_H

#include "Point.h"
#include "Window.h"

/*
  Glyph is a small graphic symbol, represents all the elements in doc
  2018-11-28 20:11
  Jz Wang
*/
class Glyph {
public:
    /* draw itself */
    virtual void Draw(Window);
    /* returns the rectangular area that the glyph occupies */
    virtual void Bounds(Rect&);

    /* hit detection
       returns whether a specified point intersects the glyph
       
       Whenever the user clicks somewhere in the document, Lexi calls
       this operation to determine which glyph or glyph structure is
       under the mouse.
     */
    virtual bool Intersects(Point);

    /* structure */
    /* inserts a glyph at a position specified by an integer index */
    virtual void Insert(Glyph*, int);
    /* removes a specified gpyph is it is indeed a child */
    virtual void Remove(Glyph*);
    /* returns the child (if any) at the given index */
    virtual Glyph* Parent();
private:
    virtual Glyph* Child(int);

    /* stores its children in a linked list */
    Glyph* _parent;
};

#endif /* _GLYPH_H */
