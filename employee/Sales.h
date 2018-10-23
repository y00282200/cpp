#pragma once
#include "Wage.h"

// 这里把销售定义为时薪职员
class CSales :public CWage
{
private:
	float m_comm;	//佣金，应该是一个 比例值 
	float m_sale;	//销售额

public:
	CSales(const char* nm) : CWage(nm) { m_comm = m_sale = 0.0; }
	void setCommission(float comm) { m_comm = comm; }
	void setSales(float sale) {	m_sale = sale; }

	//virtual float computePay();
};

