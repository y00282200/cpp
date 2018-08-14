#include "CWinApp.h"

BOOL CWinApp::InitInstance(HINSTANCE hInstance, HINSTANCE hPrecInstance, WNDPROC WndProc, int nCmdShow)
{

	m_pMainWnd = new CFrameWnd;
	m_pMainWnd->Create(hInstance, WndProc, L"窗口类_名", L"窗口_名");
	m_pMainWnd->ShowWindow(nCmdShow);
	m_pMainWnd->UpdateWindow();

	return TRUE;
}

int CWinApp::Run()
{
	//消息循环
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

CWinApp::~CWinApp()
{
	delete m_pMainWnd;
	m_pMainWnd = NULL;
}