//
//  GraphicImage.hpp
//  rtti
//
//  Created by 王jz on 2018/10/24.
//  Copyright © 2018年 王jz. All rights reserved.
//

#ifndef GraphicImage_hpp
#define GraphicImage_hpp

#include <typeinfo>
#include <iostream>
#include <string.h>
using namespace std;

class GraphicImage
{
protected:
    char name[80];
public:
    GraphicImage()
    {
        strcpy(name, "GraphicImage");
    }
    
    virtual void display()
    {
        cout << "Display a generic image." << endl;
    }
    
    char* getName()
    {
        return name;
    }
};

class GifImage : public GraphicImage
{
public:
    GifImage()
    {
        strcpy(name, "GifImage");
    }
    
    void display()
    {
        cout << "Display a Gif image." << endl;
    }
};

class PicImage : public GraphicImage
{
public:
    PicImage()
    {
        strcpy(name, "PicImage");
    }
    
    void display()
    {
        cout << "Display a Pic image." << endl;
    }
};



#endif /* GraphicImage_hpp */
