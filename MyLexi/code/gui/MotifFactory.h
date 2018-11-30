
#ifndef _MOTIF_FACTORY_H_
#define _MOTIF_FACTORY_H_

/*
  2018年11月30日 星期五 11时35分21秒 CST
*/

#include "GUIFactory.h"
class MotifFactory : public GUIFactory {
public:
    /* return new MotifScrollBar */
    void CreateScrollBar();
    /* return new MotifButton */
    void CreateButton();
    /* return new MotifMenu */
    void CreateMenu();
};

#endif /* _MOTIF_FACTORY_H_ */
