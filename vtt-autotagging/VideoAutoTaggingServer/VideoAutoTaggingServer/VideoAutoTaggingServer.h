
// VideoAutoTaggingServer.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CVideoAutoTaggingServerApp:
// �� Ŭ������ ������ ���ؼ��� VideoAutoTaggingServer.cpp�� �����Ͻʽÿ�.
//

class CVideoAutoTaggingServerApp : public CWinApp
{
public:
	CVideoAutoTaggingServerApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CVideoAutoTaggingServerApp theApp;