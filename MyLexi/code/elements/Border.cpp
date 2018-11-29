
#include "Border.h"


void Border::Draw(Window* w) {
    /*
      invokes the parent class operation MonoGlyph::Draw on the
      component to let the component do its part -- that is, draw
      everything bu the border.
    */
    MonoGlyph::Draw(w);
    /*
      draws the border by calling a private operatoin
    */
    DrawBorder(w);
}
