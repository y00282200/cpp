
#include "Manager.h"
#include "Sales.h"
#include <conio.h>
#include <iostream>

int main()
{
	CManager manamger("陈美静");
	CSales sales("侯俊杰");
	CWage wage("曾铭源");

	std::cout << sales.getName() << std::endl;
	// 侯俊杰的底薪
	std::cout << "销售人员侯俊杰的底薪: " << sales.CWage::computePay() << std::endl;

	sales.setCommission(0.2);
	sales.setSales(50000);
	// 侯俊杰的全薪
	std::cout << "销售人员侯俊杰的全薪: " << sales.computePay() << std::endl;

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

	/* 错误 
	pSales = &aWage;
	pSales = pWage;
	*/

	/* 语法正确，意思不对 
	pSales = (CSales*) &aWage;
	pSales = (CSales*) pWage;
	*/

	_getch();
	return 0;
}