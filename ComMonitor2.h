// ComMonitor2.h : main header file for the COMMONITOR2 application
//

#if !defined(AFX_COMMONITOR2_H__01BAAB20_B534_4BA5_90CA_D01C24C072D1__INCLUDED_)
#define AFX_COMMONITOR2_H__01BAAB20_B534_4BA5_90CA_D01C24C072D1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CComMonitor2App:
// See ComMonitor2.cpp for the implementation of this class
//

class CComMonitor2App : public CWinApp
{
public:
	CComMonitor2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComMonitor2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CComMonitor2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMMONITOR2_H__01BAAB20_B534_4BA5_90CA_D01C24C072D1__INCLUDED_)
