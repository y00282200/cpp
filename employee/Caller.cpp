
#include "Manager.h"
#include "Sales.h"
#include <conio.h>
#include <iostream>

int main()
{
	CManager manamger("������");
	CSales sales("���");
	CWage wage("����Դ");

	std::cout << sales.getName() << std::endl;
	// ��ܵĵ�н
	std::cout << "������Ա��ܵĵ�н: " << sales.CWage::computePay() << std::endl;

	sales.setCommission(0.2);
	sales.setSales(50000);
	// ��ܵ�ȫн
	std::cout << "������Ա��ܵ�ȫн: " << sales.computePay() << std::endl;

	CEmployee* emp;

	emp = &manamger;
	emp->computePay();
	emp = &sales;
	emp->computePay();
	emp = &wage;
	emp->computePay();

	//sales = aWage;

	//CWage* pWage;
	//CSales* pSales;
	//pWage = &sales;
	//pWage = pSales;

	/* ���� 
	pSales = &aWage;
	pSales = pWage;
	*/

	/* �﷨��ȷ����˼���� 
	pSales = (CSales*) &aWage;
	pSales = (CSales*) pWage;
	*/

	_getch();
	return 0;
}