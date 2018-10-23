
#include "Square.h"
#include "Rect.h"
#include "Circle.h"
#include <conio.h>

int main()
{	
	CShape *shapes[4];
	CSquare square;
	CRect r1, r2;
	CCircle circle;

	shapes[0] = &square;
	shapes[1] = &r1;
	shapes[2] = &r2;
	shapes[3] = &circle;

	for (int i = 0; i < 4; i++)
	{
		shapes[i]->display();
	}

	_getch();

	return 0;
}