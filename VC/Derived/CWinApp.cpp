#include "CWinApp.h"

BOOL CWinApp::InitInstance(HINSTANCE hInstance, HINSTANCE hPrecInstance, WNDPROC WndProc, int nCmdShow)
{

	m_pMainWnd = new CFrameWnd;
	m_pMainWnd->Create(hInstance, WndProc, L"������_��", L"����_��");
	m_pMainWnd->ShowWindow(nCmdShow);
	m_pMainWnd->UpdateWindow();

	return TRUE;
}

int CWinApp::Run()
{
	//��Ϣѭ��
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