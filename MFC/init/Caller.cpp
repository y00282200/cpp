#include "MFC.h"
#include "MY.h"
#include <conio.h>

/*
 * CObject > CCmdTarget > CWinThread > CWinApp > CMyWinApp
 */
// ȫ�ֶ���
CMyWinApp theApp;

int main()
{
	/*
	 * pAppָ�� theApp ȫ�ֶ���
	 */
	CWinApp* pApp = AfxGetApp();

	/* CWinApp::InitApplication */
	pApp->InitApplication();	// ÿ������ֻ��һ��

	/* CMyWinApp::InitInstance
     	  * CObject > CCmdTarget > CWnd > CFrameWnd > CMyFrameWnd
                  * CFrameWnd::Create > CWnd::CreateEx > 
 	  * CFrameWnd::PreCreateWindow 
	  */
	pApp->InitInstance();		// ÿ��ִ���嶼����һ��
	
	/*
	  * CWinApp::Run
  	  * CWinThread::Run
	  */
	pApp->Run();

	_getch();
	return 0;
}