#include "MY.h"
#include "MFC.h"

extern CMyWinApp theApp; //外部的全局对象

BOOL CFrameWnd::Create()
{
	cout << "CFrameWnd::Create" << endl;
	CreateEx(); //CreateEX是虚函数，但 CFrameWnd 未改写
				// 所以调用的是 CWnd::CreateEx();
	return TRUE;
}

BOOL CFrameWnd::PreCreateWindow()
{
	cout << "CFrameWnd::PreCreateWindow" << endl;
	return TRUE;
}

BOOL CWinApp::InitApplication()
{
	cout << "CWinApp::InitApplication" << endl;
	return TRUE;
}

BOOL CWinApp::InitInstance()
{
	cout << "CWinApp::InitInstance" << endl;
	return TRUE;
}

int CWinApp::Run()
{
	cout << "CWinApp::Run" << endl;

	return CWinThread::Run();
}

BOOL CWnd::Create()
{
	cout << "CWnd::Create" << endl;
	return TRUE;
}

BOOL CWnd::CreateEx()
{
	cout << "CWnd::CreateEx" << endl;
	PreCreateWindow();	// 这是一个虚函数，CFrameWnd 中改写，
						// 因为 new 的是 CFrameWnd, 在vtab中，会
						// 用 CFrameWnd::PreCreateWindow 取代基类的
						// 该函数，所以调用的是 CFrameWnd::PreCreateWindow

	return TRUE;
}

BOOL CWnd::PreCreateWindow()
{
	cout << "CWnd::PreCreateWindow" << endl;
	return TRUE;
}

CWinApp* AfxGetApp()
{
	return theApp.m_pCurrentWinApp;
}
