#ifndef __MY_H__
#define __MY_H__

#include "MFC.h"

class CMyWinApp : public CWinApp
{
public:
	CMyWinApp() { cout << "CMyWinApp Ctor" << endl; }
	~CMyWinApp() { cout << "CMyWinApp Destor" << endl; }
	virtual BOOL InitInstance();
};

class CMyFrameWnd : public CFrameWnd
{
public:
	CMyFrameWnd(); 
	~CMyFrameWnd() { cout << "CMyFrameWnd Destor" << endl; }
};

#endif
