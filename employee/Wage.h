#ifndef __WAGE_H__
#define __WAGE_H__

#include "Employee.h"

// 时薪职员
class CWage : public CEmployee
{
private:
	float m_wage;
	float m_hours;

public:
	CWage();
	~CWage();

	CWage(const char* nm) : CEmployee(nm) 
	{ 
		m_wage = 250.0;
		m_hours = 40.0;
	}

	void setWage(float wg) { m_wage = wg; }
	void setHours(float hrs) { m_hours = hrs; }

	// 没有实现，不调用的话没问题
	virtual float computePay();
};

#endif
