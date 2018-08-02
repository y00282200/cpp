//
//  main.cpp
//  SalaryMgr
//
//  Created by 王jz on 2018/8/1.
//  Copyright © 2018年 王jz. All rights reserved.
//

#include <iostream>
using namespace std;

#include "salarySystem.hpp"

int main(int argc, const char * argv[]) {
    
    SalaryMgr mgr;
    mgr.InputEmployee();
    mgr.DisplaySalary();
    mgr.GetAveSalary();
    
//    Employee *e = new Worker("小明同学", 2);
//    cout << e->GetName() << endl;
//    cout << e->GetSalary() << endl;
//
//    Employee *e2 = new Manager("老马", 5);
//    cout << e2->GetName() << endl;
//    cout << e2->GetSalary() << endl;
    
    return 0;
}
