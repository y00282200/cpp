#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "Shape.h"
class CTriangle : public CShape
{
public:
	CTriangle();
	~CTriangle();
	virtual void display();
};

#endif