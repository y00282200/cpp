//
//  Document.cpp
//  DataSlicing
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#include "Document.hpp"
#include <iostream>
using namespace std;

void CDocument::func()
{
    cout << "CDocument::func()" << endl;
    Serialize();
}

void CDocument::Serialize()
{
    cout << "CDocument::Serialize()" << endl;
}
