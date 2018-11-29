
#ifndef _SIMPLE_COMPOSITOR_H_
#define _SIMPLE_COMPOSITOR_H_

#include "Compositor.h"

/* 
   do a quick pass without regard for such esoterica as the document's
   "color". 

   2018年11月29日 星期四 14时12分47秒 CST
   Jz Wang
*/
   
class SimpleCompositor : public Compositor {
    void Compose();
};

#endif /* _SIMPLE_COMPOSITOR_H_ */
