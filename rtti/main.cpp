//
//  main.cpp
//  rtti
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#include <iostream>
#include "Image.hpp"

/* typeid 运算子，返回 type_info&
 * MFC 有自己的一套方法来支持 RTTI
 * MFC的 RTTI能力，牵扯到一组非常神秘的巨集
 * DECLARE_DYNAMIC, IMPLEMENT_DYNAMIC 和
 * 一个非常神秘的类别 CRuntimeClass
 */
void processFile(GraphicImage* type)
{
    if (typeid(GifImage) == typeid(*type))
    {
        ((GifImage*)type)->display();
    }
    else if (typeid(PicImage) == typeid(*type))
    {
         ((PicImage*)type)->display();
    }
    else
    {
        cout << "Unknown type!" << (typeid(*type)).name() << endl;
    }
}

int main(int argc, const char * argv[]) {
    GraphicImage* pGifImage = new GifImage();
    GraphicImage* pPicImage = new PicImage();
    
    processFile(pGifImage);
    processFile(pPicImage);
    
    
    return 0;
}
