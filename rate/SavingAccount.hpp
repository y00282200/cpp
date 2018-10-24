//
//  SavingAccount.hpp
//  rate
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#ifndef SavingAccount_hpp
#define SavingAccount_hpp


class SavingAccount
{
private:
    char m_name[40];    // 储户姓名
    char m_addr[60];    // 储户地址
    double m_total;     // 存款额
    
    static double m_rate;   //利率
    /* 后注释：
     * 任何函数都可以存取 static 成员变量，
     * 但如果你希望在产生任何对象前，就存取
     * 类的 private static 变量，则
     * 必须设计一个 static 成员函数
     */
    
public:
//    static double m_rate;   //利率
    
    // 在产生对象之前，就可以调用
    static double getRate() { return m_rate; }
    static void setRate(double newRate) { m_rate = newRate; }
    /* 后注释：
     * static 成员孙函数不需要借助任何对象，就可以被调用，
     * 所以编译器没有 隐式地为它加 this 指针。因此，static成员函数
     * 无法处理类中的 non-static 成员变量。
     */
    
};

#endif /* SavingAccount_hpp */
