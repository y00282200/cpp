//
//  main.cpp
//  DataSlicing
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#include <iostream>
#include "MyDoc.hpp"
#include "Document.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    CMyDoc mydoc(3001);
    
    cout << "----------" << endl;
    mydoc.func();                   //CMyDoc::Serialize();
    cout << mydoc.pNumber << endl;
    cout << * mydoc.pNumber << endl;
    cout << mydoc.m_data1 << endl;
    cout << mydoc.m_data2 << endl;
    cout  << endl;
    
    cout << "----------" << endl;
    ((CDocument*)&mydoc)->func();   //CMyDoc::Serialize();
    cout << ((CDocument*)&mydoc)->m_data1 << endl;
    cout << endl;
    
    /*
     向上强制转换 upcasting，
     将造成多余的数据被切割 object slicing,
     */
    cout << "----------" << endl;
    ((CDocument)mydoc).func();
    
    
    cout << "----------" << endl;
    CDocument cdoc(1001);
    cout << cdoc.pNumber << endl;
    cout << * cdoc.pNumber << endl;
    cout << cdoc.m_data1 << endl;
    
    /*
     传值拷贝，创建了一个CDocument类型的临时对象，
     vptr是指向 CDocument的虚函数，
     pNumber 被赋予了 mydoc.pNumber
     m_data1 被赋予了 mydoc.m_data1 。
     疑问题：这里似乎没有涉及 vptr的复制？ 所以虚函数表也变不了！
     */
    cdoc = mydoc;
    cdoc.func();    //CDocument::Serialize();
    cout << cdoc.pNumber << endl;
    cout << * cdoc.pNumber << endl;
    cout << cdoc.m_data1 << endl;
    cout << mydoc.pNumber << endl;
    cout << * mydoc.pNumber << endl;
    cout << endl;
    
    return 0;
}
