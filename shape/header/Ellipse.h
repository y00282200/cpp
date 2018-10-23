#ifndef __ELLIPSE_H__
#define __ELLIPSE_H__

#include "Shape.h"
#include "display.h"

class CEllipse : public CShape
{
public:
	CEllipse();
	~CEllipse();

	virtual void display();
};

#endif