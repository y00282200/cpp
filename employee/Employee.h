#ifndef __EMPLOYEE_h__
#define __EMPLOYEE_h__

#include <string.h>

// ְԱ
class CEmployee
{
private:
	char m_name[30];

public:
	CEmployee();
	~CEmployee(); 

	CEmployee(const char* nm) { strcpy_s(m_name, nm); }
	
	char* getName() {return m_name; }

	virtual float computePay();
};

#endif
