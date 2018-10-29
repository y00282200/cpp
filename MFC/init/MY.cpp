#include "MY.h"
#include "MFC.h"

BOOL CMyWinApp::InitInstance()
{
	cout << "CMyWinApp::InitInstance" << endl;
	m_pMainWnd = new CMyFrameWnd;
	return TRUE;
}

CMyFrameWnd::CMyFrameWnd() 
{
	cout << "CMyFrameWnd Ctor" << endl;
	Create();	// Create是个虚函数，但 CMyFrameWnd 未改写它，
				// 所以调用父类的 CFrameWnd::Create()
}
