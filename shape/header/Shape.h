#ifndef __SHAPE_H__
#define __SHAPE_H__

#include "display.h"
class CShape
{
private:
	int m_color;	// ��Ա������ ͨ���� m_ ��ͷ
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
