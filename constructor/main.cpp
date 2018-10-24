//
//  main.cpp
//  constructor
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#include "Demo.hpp"
#include <iostream>
using namespace std;

void func()
{
    /* 局对象，退出域时被销毁 */
    CDemo LocalObjectInFunc("LocalObject__InFunc"); // in stack     (4) (7)
    /* 静态对象，程序结束时，在全局对象之前被销毁 */
    static CDemo staticObj("staticObj");    // local stack  (5) (8)
    /* new 产生的对象，需要使用 delete 销毁 */
    CDemo* pHeadObjInFunc = new CDemo("HeapObj__InFunc"); // in heap    (6)     --内存泄漏
    
    cout << "\t------Inside func" << endl << "\t";
    
    /* 销毁 pHeadObjInFunc 对象
    delete pHeadObjInFunc;
     */
}

/* 全局对象，最早创建，最后被销毁 */
CDemo GlobalObject("Global Obj");   // 全局 stack     (1) (9)
//CDemo* pGloablObject = new CDemo("Gobal Heap");

int main(int argc, const char * argv[]) {
    CDemo LocalObjInMain("LocalObj__InMain");   // in stack (2) (8)
    CDemo* pHeapObjInMain = new CDemo("HeapObj__InMain");   // in heap  (3) --内存泄漏
    
    cout << endl << "------In main, before calling func" << endl;
    func();
    cout << "------Inmain, after calling func" << endl << endl;
    
    /* 销毁 pHeapObjInMain 对象
    delete pHeapObjInMain;
     */
    return 0;
}

/* C++中 创建对象的方式
 1. 在区域中，使用类定义对象（产生一个 stack 中的对象)
 {
    CFoo foo;   // 由 main 调用构造函数
 }
 
 2. 在区域中，使用 static 类定义对象（产生一个 local static 中的 区域静态对象)
 {
    static CFoo foo;
 }
 3. 在区域中，使用new定义 (产生一个 heap 中的对象)
 {
    CFoo* pfoo = new CFoo();    // 由 new 触发 调用构造函数
 }
 4. 在任何函数之外，使用类定义（产生一个 global static 全局静态对象）
    CFoo foo;   // 由 C++ 编译器提供的 start up码，调用 构造函数
 */
 
 
