
#ifndef _SCROLLER_H_
#define _SCROLLER_H_

#inlcude "Window.h"
#include "MonoGlyph.h"

/* 
   Scroll bars let the user view different parts of the page

   2018年11月29日 星期四 17时31分47秒 CST
   Jz Wang
*/
class Scroller : public MonoGlyph {
public:
    void Draw(Window* w);
};

#endif /* _SCROLLER_H_ */
