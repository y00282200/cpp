//
//  main.cpp
//  rate
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#include <iostream>
#include "SavingAccount.hpp"

using namespace std;

/* static成员变量的初始化
 * 在实例中，类以外的地方初始化
 * 设定 static成员变量初值时，不受任何存取权限的束缚。
 */
double SavingAccount::m_rate = 0.0075;

int main(int argc, const char * argv[]) {
    
//    doubleSavingAccount::m_rate = 0.0075;
    
    cout << SavingAccount::getRate() << endl;
    
    SavingAccount::setRate(0.088);
    SavingAccount account;
    cout << account.getRate() << endl;
    
    return 0;
}
