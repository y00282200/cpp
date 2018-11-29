

#ifndef _BORDER_H_
#define _BORDER_H_

#include "Window.h"
#include "MonoGlyph.h"

/* 
   Border around the text editing area to demarcate the page of text.

   We have the border contain the glyph, because if we put the border
   into the glyph then we must make modifications to the corresponding
   Glyph subclass to make it aware of the border.

   Borders have an appearance suggests they should actually be glyphs;
   that is, Border should be a subclass of Glyph.

为什么 Border 是一个 Glyph 的子类？

   But there's a more compelling reason for doing this: Clients
   shouldn't care whether glyphs have borders or not. They should
   treat glyphs uniformly. When clients tell a plain, unbordered glyph
   to draw itself, it should do so without embellishiment. If that
   glyph is composed in a border, clients shouldn't have to treat the
   border containing the glyph any differently; they just tell it to
   draw itself as they told the plain glyph before. This implies that
   the Border interface matches the Glyph interface. We subclass
   Border from Glyph to guarantee this relationship.

   2018年11月29日 星期四 17时27分08秒 CST
   Jz Wang
 */
class Border : public MonoGlyph {
public:
    void Draw(Window w);
    
private:
    /* keeps the border-drawing code entirely in the Border class */
    void DrawBorder(Window w);
};

#endif /* _BORDER_H_ */
