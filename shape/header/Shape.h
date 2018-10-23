#ifndef __SHAPE_H__
#define __SHAPE_H__

#include "display.h"
class CShape
{
private:
	int m_color;	// 成员变量名 通常以 m_ 开头
public:
	CShape();
	~CShape();
	void setcolor(int color) 
	{
		m_color = color; 

		std::cout << std::endl 
				  << "CShape::m_color: " << m_color << std::endl;
	}

	virtual void display();

};

#endif
