#pragma once

#include <Windows.h>
#include "CFrameWnd.h"

class CWinApp
{
public:
	CFrameWnd* m_pMainWnd;
	MSG msg;
public:
	BOOL InitInstance(HINSTANCE, HINSTANCE, WNDPROC, int);
	int Run();
	~CWinApp();
};