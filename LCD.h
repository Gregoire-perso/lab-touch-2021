#ifndef LCD_H
#define LCD_H

#include "LCD_Driver.h"

namespace LCD {
    void Init_Screen();
    void Set_BL(int Lev);
    void Clear(UWORD Color);
    void Display();
    void Display_Window(UWORD Xstart, UWORD Ystart, UWORD Xend, UWORD Yend);
    void Draw_Point(int x, int y, UWORD Color, int Dot);
}

#endif