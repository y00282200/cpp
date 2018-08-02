//
//  salarySystem.hpp
//  SalaryMgr
//
//  Created by 王jz on 2018/8/2.
//  Copyright © 2018年 王jz. All rights reserved.
//

#ifndef salarySystem_hpp
#define salarySystem_hpp

#include <string>
using namespace std;

const int MAX_COUNT = 1000;

// 员工类
class Employee
{
protected:
    string m_name;
    int m_year;
    int m_salary;
    
    virtual void CalSalary(int year) = 0;
    
public:
    
    Employee(string name, int year) : m_name(name), m_year(year),
        m_salary(0)
    {}
    
    virtual ~Employee()
    {}
    
    inline string GetName() const
    {
        return m_name;
    }
    
    virtual int GetSalary() const;
};

// 经理类
class Manager : public Employee
{
public:
    // 使用 基类的构造函数，完成初始化。
    Manager(string name, int year) : Employee(name, year)
    {
        CalSalary(m_year);
    }
    
    void CalSalary(int year);
};

// 普通员工类
class Worker : public Employee
{
public:
    Worker(string name, int year) : Employee(name, year)
    {
        CalSalary(year);
    }
    
private:
    void CalSalary(int year);
};

// 工资管理系统
class SalaryMgr
{
private:
    int m_count;
    Employee* m_employee[MAX_COUNT];
public:
    SalaryMgr(void);
    ~SalaryMgr(void);
public:
    void InputEmployee(void);
    void DisplaySalary(void);
    double GetAveSalary(void);
};

#endif /* salarySystem_hpp */
