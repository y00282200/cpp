#ifndef __RECT_H__
#define __RECT_H__

#include "Shape.h"
#include "display.h"
class CRect : public CShape
{
public:
	CRect();
	~CRect();

	virtual void display();
};

#endif