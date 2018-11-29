
#ifndef _MONO_GLYPH_H_
#define _MONO_GLYPH_H_

#include "Glyph.h"

/* 
   透明围栏
   Transparent Enclosure, 

   我们可以将透明围栏的概念用于 所有修饰其他图元的图元
   
   We can apply the concept of transparent enclosure to
   all glyphs that embellish other glyphs.    
/*
  embellishment glyphs
  起修饰作用的图元

  2018年11月29日 星期四 17时21分45秒 CST
  Jz Wang
*/
class MonoGlyph : public Glyph {
public:
    virtual void Draw(Window* w);

private:
    /* MonoGlyph stores a reference to a component and forwards all
       requests to it. That makes MonoGlyph totally transparent to
       clients by default.
    */
    /* _component */
};

#endif /* _MONO_GLYPH_H_ */
