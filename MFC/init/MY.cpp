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
	Create();	// Create�Ǹ��麯������ CMyFrameWnd δ��д����
				// ���Ե��ø���� CFrameWnd::Create()
}
