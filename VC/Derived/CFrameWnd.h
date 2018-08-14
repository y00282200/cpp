#pragma once

#include <Windows.h>

class CFrameWnd
{
public:
	HWND hWnd;
public:
	int RegisterWindow(HINSTANCE, WNDPROC, LPCTSTR);
	void Create(HINSTANCE hInstance, WNDPROC WndProc, LPCTSTR lpClassName, LPCTSTR lpWindowName);
	void ShowWindow(int nCmdShow);
	void UpdateWindow();
};