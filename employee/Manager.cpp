#include "Manager.h"
#include <iostream>
using namespace std;

float CManager::computePay()
{
	cout << "CManager" << endl;
	return m_salary;	// 经理以 固定周薪 计薪
}
