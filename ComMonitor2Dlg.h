// ComMonitor2Dlg.h : header file
//
//{{AFX_INCLUDES()
#include "mscomm.h"
//}}AFX_INCLUDES

#if !defined(AFX_COMMONITOR2DLG_H__AFD30E42_D03F_406B_A0BF_E0E8A17848CC__INCLUDED_)
#define AFX_COMMONITOR2DLG_H__AFD30E42_D03F_406B_A0BF_E0E8A17848CC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CComMonitor2Dlg dialog

class CComMonitor2Dlg : public CDialog
{
// Construction
public:
	CComMonitor2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CComMonitor2Dlg)
	enum { IDD = IDD_COMMONITOR2_DIALOG };
	CButton	m_BtnOpen;
	CMSComm	m_Comm1;
	CString	m_BaudRate;
	CString	m_ByteSize;
	CString	m_Parity;
	CString	m_Port;
	CString	m_Stopbits;
	CString	m_RxString;
	CString	m_TxString;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComMonitor2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CComMonitor2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBtnOpen();
	afx_msg void OnOnCommMscomm();
	afx_msg void OnBtnSend();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMMONITOR2DLG_H__AFD30E42_D03F_406B_A0BF_E0E8A17848CC__INCLUDED_)
