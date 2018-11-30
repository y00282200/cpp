
#ifndef _GUI_FACTORY_H_
#define _GUI_FACTORY_H_

/*
  2018年11月30日 星期五 11时32分07秒 CST
*/
class GUIFactory {
public:
    virtual void CreateScrollBar();
    virtual void CreateButton();
    virtual void CreateMenu();
};

#endif /* _GUI_FACTORY_H_ */
