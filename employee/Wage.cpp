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
	return (m_wage * m_hours);	// Сʱн * ���ܹ���ʱ��
}
