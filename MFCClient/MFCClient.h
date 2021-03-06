// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include "WindowsStore.h"


// CMFCClientApp:
// See MFCClient.cpp for the implementation of this class
//

class CMFCClientApp : public CWinApp
{
public:
	CMFCClientApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCClientApp theApp;
