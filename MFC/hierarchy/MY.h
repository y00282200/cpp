#ifndef __MY_H__
#define __MY_H__

#include "MFC.h"

class CMyWinApp : public CWinApp
{
public:
	CMyWinApp() { cout << "CMyWinApp Ctor" << endl; }
	~CMyWinApp() { cout << "CMyWinApp Destor" << endl; }
};

class CMyFrameWnd : public CFrameWnd
{
	CMyFrameWnd() { cout << "CMyFrameWnd Ctor" << endl; }
	~CMyFrameWnd() { cout << "CMyFrameWnd Destor" << endl; }
};

#endif
