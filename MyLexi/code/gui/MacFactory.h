
#ifndef _MAC_FACTORY_H_
#define _MAC_FACTORY_H_

/*
  2018年11月30日 星期五 11时41分54秒 CST
*/
#include "GUIFactory.h"

class MacFactory : public GUIFactory {
public:
    void CreateScrollBar();
    void CreateButton();
    void CreateMenu();
};

#endif /* _MAC_FACTORY_H_ */
