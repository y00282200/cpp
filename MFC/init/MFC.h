#ifndef __MFC_H__
#define __MFC_H__

#define BOOL int
#define TRUE 1
#define FALSE 0

#include <iostream>
using namespace std;

class CObject
{
public:
	CObject() { cout << "CObject:: Ctor" << endl; }
	~CObject() { cout << "CObject:: Destor" << endl; }
};


class CCmdTarget : public CObject
{
public:
	CCmdTarget() { cout << "CCmdTarget:: Ctor" << endl; }
	~CCmdTarget() { cout << "CCmdTarget:: Destor" << endl; }
};

class CWinThread : public CCmdTarget
{
public:
	CWinThread() { cout << "CWinThread:: Ctor" << endl; }
	~CWinThread() { cout << "CWinThread:: Destor" << endl; }

	virtual BOOL InitInstance() 
	{
		cout << "CWinThread::InitInstance" << endl;
		return TRUE;
	}

	virtual int Run()
	{
		cout << "CWinThread::Run" << endl;
		return 1;
	}
};

/* ------------------------------------------------------ */
class CWnd;
/* ------------------------------------------------------ */

class CWinApp : public CWinThread
{
public:
	CWinApp* m_pCurrentWinApp;
	CWinApp() 
	{
		m_pCurrentWinApp = this;
		cout << "CWinApp:: Ctor" << endl;
	}

	~CWinApp() { cout << "CWinApp:: Destor" << endl; }

	virtual BOOL InitApplication();
	virtual BOOL InitInstance();
	virtual int Run();
public:
	CWnd* m_pMainWnd;
};

/* ------------------------------------------------------ */
class CDocument : public CCmdTarget
{
public:
	CDocument() { cout << "CDocument:: Ctor" << endl; }
	~CDocument() { cout << "CDocument:: Destor" << endl; }
};

class CWnd : public CCmdTarget
{
public:
	CWnd() { cout << "CWnd:: Ctor" << endl; }
	~CWnd() { cout << "CWnd:: Destor" << endl; }
	virtual BOOL Create();
	BOOL CreateEx();
	virtual BOOL PreCreateWindow();
};

/* ------------------------------------------------------ */
class CFrameWnd : public CWnd
{
public:
	CFrameWnd() { cout << "CFrameWnd:: Ctor" << endl; }
	~CFrameWnd() { cout << "CFrameWnd:: Destor" << endl; }
	BOOL Create();
	virtual BOOL PreCreateWindow();
};

class CView : public CWnd
{
public:
	CView() { cout << "CView:: Ctor" << endl; }
	~CView() { cout << "CView:: Destor" << endl; }
};

// global function
CWinApp* AfxGetApp();

#endif
