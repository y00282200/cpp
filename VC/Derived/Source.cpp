#include <Windows.h>
#include "CWinApp.h"

CWinApp theApp;

LPCWSTR showText;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void OnLButtonDown(HWND, UINT, WPARAM, LPARAM);
void OnPaint(HWND, UINT, WPARAM, LPARAM);
void OnDestory(HWND, UINT, WPARAM, LPARAM);

int APIENTRY WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	int ResultCode = -1;

	theApp.InitInstance(hInstance, hPrevInstance, WndProc, nCmdShow);

	return theApp.Run();
}

LRESULT CALLBACK WndProc(HWND hWnd,
	UINT message,
	WPARAM wParam,
	LPARAM lParam)
{
	switch (message)
	{
	case WM_LBUTTONDOWN:
		OnLButtonDown(hWnd, message, wParam, lParam);
		break;
	case WM_DESTROY:
		OnDestory(hWnd, message, wParam, lParam);
		break;
	case WM_PAINT:
		OnPaint(hWnd, message, wParam, lParam);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

void OnLButtonDown(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	showText = L"Hello!";
	InvalidateRect(hWnd, NULL, 1);
	//MessageBeep(0);
}

void OnPaint(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	hdc = BeginPaint(hWnd, &ps);
	TextOut(hdc, 50, 50, showText, 6);
	EndPaint(hWnd, &ps);
}

void OnDestory(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PostQuitMessage(0);
}