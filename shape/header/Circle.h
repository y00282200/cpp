#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Ellipse.h"
class CCircle : public CEllipse
{
public:
	CCircle();
	~CCircle();

	virtual void display();
};

#endif