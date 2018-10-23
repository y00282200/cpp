#include "Wage.h"
#include <iostream>
using namespace std;

CWage::CWage()
{
}

CWage::~CWage()
{
}

float CWage::computePay()
{
	cout << "CWage" << endl;
	return (m_wage * m_hours);	// 小时薪 * 周总工作时间
}
