
// TestProject.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTestProjectApp:
// �� Ŭ������ ������ ���ؼ��� TestProject.cpp�� �����Ͻʽÿ�.
//

class CTestProjectApp : public CWinApp
{
public:
	CTestProjectApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTestProjectApp theApp;