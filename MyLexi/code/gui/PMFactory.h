
#ifndef _MOTIF_FACTORY_H_
#define _MOTIF_FACTORY_H_

/*
  2018年11月30日 星期五 11时37分50秒 CST
*/
#include "GUIFactory.h"

class PMFactory : public GUIFactory {
public:
    /* return new PM ScrollBar */
    void CreateScrollBar();
    /* return new PM Button */
    void CreateButton();
    /* return new PM Menu */
    void CreateMenu();
};

#endif /* _MOTIF_FACTORY_H_ */
