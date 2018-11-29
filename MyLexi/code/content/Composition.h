
#ifndef _COMPOSITION_H_
#define _COMPOSITION_H_

/*
    A composition gets an instance of a Compositor subclass when it is
    created, and it tells the compositor to format its Glyphs when
    necessary.

    2018-11-29 14:04 
    Jz Wang
*/

/* 这个类和 Compositor类 互相依赖？？？ */
 class Composition : public Glyph {

 public:
    void Insert(Glyph g, int i);

 private:
     /* list of Glyph children */
     /* list of Glyph children after formatting */

     Compositor* _compositor;
};

#endif /* _COMPOSITION_H_ */
