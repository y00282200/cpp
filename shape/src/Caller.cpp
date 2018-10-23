
#include "Square.h"
#include "Rect.h"
#include "Circle.h"
#include "Triangle.h"
#include "Ellipse.h"
#include <conio.h>

int main()
{	
	
	CShape shape;
	CSquare square;
	CRect rect;
	CCircle circle;
	CTriangle tri;
	CEllipse ellip;

	CShape *shapes[6]{
		&shape,
		&square,
		&rect,
		&circle,
		&tri,
		&ellip
	};

	for (int i = 0; i < 6; i++)
	{
		shapes[i]->display();
	}

	_getch();

	return 0;
}