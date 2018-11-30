
#ifndef _SCROLL_BAR_H_
#define _SCROLL_BAR_H_

/*
  2018年11月30日 星期五 12时13分31秒 CST
*/
#include "Glyph.h"

class ScrollBar : public Glyph {
public:
    void ScrollTo(int);
};
        
#endif /* _SCROLL_BAR_H_ */
