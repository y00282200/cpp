#include "MFC.h"
#include "MY.h"
#include <conio.h>

/*
 * CObject > CCmdTarget > CWinThread > CWinApp > CMyWinApp
 */
// 全局对象
CMyWinApp theApp;

int main()
{
	/*
	 * pApp指向 theApp 全局对象
	 */
	CWinApp* pApp = AfxGetApp();

	/* CWinApp::InitApplication */
	pApp->InitApplication();	// 每个程序只做一次

	/* CMyWinApp::InitInstance
     	  * CObject > CCmdTarget > CWnd > CFrameWnd > CMyFrameWnd
                  * CFrameWnd::Create > CWnd::CreateEx > 
 	  * CFrameWnd::PreCreateWindow 
	  */
	pApp->InitInstance();		// 每个执行体都得做一次
	
	/*
	  * CWinApp::Run
  	  * CWinThread::Run
	  */
	pApp->Run();

	_getch();
	return 0;
}