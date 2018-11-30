
#ifndef _GUI_FACTORY_H_
#define _GUI_FACTORY_H_

/*
  2018年11月30日 星期五 11时32分07秒 CST
*/

/*
  An application that runs on more than one platform must conform to
  the user interface style guide on each platform.

  This class is an abstract class that defines interface for creating
  widget glyphs.

  The guiFactory object

      abstracts the process of creating scroll bars for any
      look-and-feel standard.  It can manufacture a full range of
      widget glyphs, including scrollbars, buttons, entry fields,
      menus, and so forth.
*/
class GUIFactory {
public:
    virtual void CreateScrollBar();
    virtual void CreateButton();
    virtual void CreateMenu();
};

#endif /* _GUI_FACTORY_H_ */
