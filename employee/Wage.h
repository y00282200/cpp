#ifndef __WAGE_H__
#define __WAGE_H__

#include "Employee.h"

// ʱнְԱ
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

	// û��ʵ�֣������õĻ�û����
	virtual float computePay();
};

#endif
