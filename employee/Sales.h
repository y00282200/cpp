#pragma once
#include "Wage.h"

// ��������۶���ΪʱнְԱ
class CSales :public CWage
{
private:
	float m_comm;	//Ӷ��Ӧ����һ�� ����ֵ 
	float m_sale;	//���۶�

public:
	CSales(const char* nm) : CWage(nm) { m_comm = m_sale = 0.0; }
	void setCommission(float comm) { m_comm = comm; }
	void setSales(float sale) {	m_sale = sale; }

	//virtual float computePay();
};

