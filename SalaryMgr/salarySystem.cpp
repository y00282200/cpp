//
//  salarySystem.cpp
//  SalaryMgr
//
//  Created by 王jz on 2018/8/2.
//  Copyright © 2018年 王jz. All rights reserved.
//

#include <iostream>
#include "salarySystem.hpp"
using namespace std;

int Employee::GetSalary() const
{
    return m_salary;
}

void Manager::CalSalary(int year)
{
    m_salary = 10000 + 5000 * year;
}

void Worker::CalSalary(int year)
{
    m_salary = 2000 + 200 * year;
}

SalaryMgr::SalaryMgr(void)
{
    m_count = 0;
}

SalaryMgr::~SalaryMgr(void)
{
    for (int i = 0; i < m_count; i++)
    {
        Employee* p = m_employee[i];
        delete p;
        m_employee[i] = nullptr;
    }
}


void SalaryMgr::InputEmployee(void)
{
    cout << "请输入员工信息: \n" <<
        "格式：员式名  入职时间 是否经理级别\n" <<
        "输入形式如下:\n" <<
        "小明 2 0\n" <<
        "laoma 5 1\n" <<
        "end" << endl;
    
    int i = 0;
    string inputName;
    int intputYear;
    bool inputManager;
    
    Employee* p = nullptr;
    
    while (i < MAX_COUNT)
    {
        cin.clear();
        cin >> inputName;
        if ("end" == inputName) break;
        
        cin>> intputYear >> inputManager;
        
        if (inputManager)
        {
            p = new Manager(inputName, intputYear);
        }
        else
        {
            p = new Worker(inputName, intputYear);
        }
        m_employee[i] = p;
        ++i;
    }
    m_count = i;
    cout << "m_count :" << m_count << endl;
}

void SalaryMgr::DisplaySalary(void)
{
    for (int i = 0; i < m_count; i++)
    {
        cout << "display: start" << endl;
        Employee* p = m_employee[i];
        cout << "pointer: ok" << endl;
        cout << p->GetName() << "\t" <<
        p->GetSalary() << endl;
    }
}

double SalaryMgr::GetAveSalary(void)
{
    int total = 0;
    
    for (int i = 0; i < m_count; i++)
    {
        Employee* p = m_employee[i];
        
        total += p->GetSalary();
    }
    
    if (0 != m_count)
    {
        cout << ((double)total) /m_count << endl;
        return ((double)total) /m_count;
    }
    
    cout << "0" << endl;
    return 0;
}
