//
//  Document.hpp
//  DataSlicing
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#ifndef Document_hpp
#define Document_hpp

#include "Object.hpp"

class CDocument : public CObject
{
private:
    virtual void Serialize();
public:
    int *pNumber;
    
    CDocument(int num) : m_data1(num) {
        pNumber = new int;
        *pNumber = 2;
    }
    int m_data1;
    void func();
};


#endif /* Document_hpp */
