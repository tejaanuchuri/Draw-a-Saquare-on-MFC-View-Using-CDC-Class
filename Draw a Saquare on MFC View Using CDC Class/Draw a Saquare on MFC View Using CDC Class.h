
// Draw a Saquare on MFC View Using CDC Class.h : main header file for the Draw a Saquare on MFC View Using CDC Class application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDrawaSaquareonMFCViewUsingCDCClassApp:
// See Draw a Saquare on MFC View Using CDC Class.cpp for the implementation of this class
//

class CDrawaSaquareonMFCViewUsingCDCClassApp : public CWinAppEx
{
public:
	CDrawaSaquareonMFCViewUsingCDCClassApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDrawaSaquareonMFCViewUsingCDCClassApp theApp;
