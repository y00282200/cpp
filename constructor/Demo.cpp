//
//  Demo.cpp
//  constructor
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#include "Demo.hpp"
#include <string.h>
#include <iostream>
using namespace std;

CDemo::CDemo(const char* str)
{
    strncpy(name, str, 20);
    cout << "Constructor called for " << name << endl;
}

CDemo::~CDemo()
{
    cout << "Destructor called for " << name << endl;
}


