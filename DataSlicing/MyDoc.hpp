//
//  MyDoc.hpp
//  DataSlicing
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#ifndef MyDoc_hpp
#define MyDoc_hpp

#include "Document.hpp"
class CMyDoc : public CDocument
{
private:
    virtual void Serialize();
    
public:
    CMyDoc(int num) : CDocument(num)
    {
        *pNumber = 3;
        m_data2 = 3002;
    }
    
    int m_data2;

};

#endif /* MyDoc_hpp */
