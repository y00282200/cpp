//
//  main.cpp
//  ObjectMemModel
//
//  Created by 王jz on 2018/8/2.
//  Copyright © 2018年 王jz. All rights reserved.
//

#include <iostream>
#include "base.hpp"

using namespace std;

typedef void (Base::*CLASS_FUNC) (void);

void ShowAddress(Base& b);

int main(int argc, const char * argv[]) {
   
    Base base;
     cout << "----base1的地址: " << &base << endl;
    ShowAddress(base);
    
    Base base2;
     cout << "----base2的地址: " << &base2 << endl;
    ShowAddress(base2);
    
    return 0;
}

void ShowAddress(Base& base)
{
    cout << "m_mem1: " << &(base.m_mem1) << "字节: " << sizeof(double) << endl;
    
    cout << "m_mem2: " << &(base.m_mem2) << "字节: " << sizeof(int) << endl;
    
    CLASS_FUNC pFunc1 = &Base::foo1;
    
    cout << "foo1: " << &pFunc1 << endl;
    unsigned* tmp = (unsigned*) &pFunc1;
    cout << "foo1: " << hex << *tmp << endl;
    
    CLASS_FUNC pFunc2 = &Base::foo2;
    
    cout << "foo2: " << &pFunc2 << endl;
    tmp = (unsigned*) &pFunc2;
    cout << "foo2: " << hex << *tmp << endl;
}

