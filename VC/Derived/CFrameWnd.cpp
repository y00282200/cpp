#include "CFrameWnd.h"

int CFrameWnd::RegisterWindow(HINSTANCE hInstance, WNDPROC WndProc, LPCTSTR lpszClassName)
{
	WNDCLASS wc;
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = lpszClassName;

	return RegisterClass(&wc);		//×¢²á´°¿ÚÀà
}

void CFrameWnd::Create(HINSTANCE hInstance, WNDPROC WndProc, LPCTSTR lpClassName, LPCTSTR lpWindowName)
{

	RegisterWindow(hInstance, WndProc, lpClassName);

	hWnd = CreateWindow(lpClassName,
		lpWindowName,
		WS_OVERLAPPEDWINDOW,
		120, 50, 800, 600,
		NULL, NULL,
		hInstance,
		NULL);
}

void CFrameWnd::ShowWindow(int nCmdShow)
{
	::ShowWindow(hWnd, nCmdShow);
}

void CFrameWnd::UpdateWindow()
{
	::UpdateWindow(hWnd);
}