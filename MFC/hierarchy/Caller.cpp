#include "MFC.h"
#include "MY.h"
#include <conio.h>

// 全局对象
CMyWinApp theApp;


int main()
{
	CWinApp* pApp = AfxGetApp();

	_getch();
	return 0;
}