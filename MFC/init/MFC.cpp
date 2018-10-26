#include "MY.h"
#include "MFC.h"

extern CMyWinApp theApp; //�ⲿ��ȫ�ֶ���

BOOL CFrameWnd::Create()
{
	cout << "CFrameWnd::Create" << endl;
	CreateEx(); //CreateEX���麯������ CFrameWnd δ��д
				// ���Ե��õ��� CWnd::CreateEx();
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
	PreCreateWindow();	// ����һ���麯����CFrameWnd �и�д��
						// ��Ϊ new ���� CFrameWnd, ��vtab�У���
						// �� CFrameWnd::PreCreateWindow ȡ�������
						// �ú��������Ե��õ��� CFrameWnd::PreCreateWindow

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
