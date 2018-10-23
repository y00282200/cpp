#pragma once
#include "Employee.h"

// ������һ��ְԱ
class CManager :public CEmployee
{
private:
	float m_salary;

public:
	CManager(const char* nm) : CEmployee(nm)
	{
		m_salary = 15000.0;
	}

	void setSalary(float salary)
	{
		m_salary = salary;
	}

	virtual float computePay();
};

