// BmpToJpgDlg.h : header file
//

#if !defined(AFX_BMPTOJPGDLG_H__B4783D11_FCD2_4F0D_8988_AEB3F635DF97__INCLUDED_)
#define AFX_BMPTOJPGDLG_H__B4783D11_FCD2_4F0D_8988_AEB3F635DF97__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CBmpToJpgDlg dialog

class CBmpToJpgDlg : public CDialog
{
// Construction
public:
	CBmpToJpgDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CBmpToJpgDlg)
	enum { IDD = IDD_BMPTOJPG_DIALOG };
	CString	m_strBmp;
	CString	m_strJpg;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBmpToJpgDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CBmpToJpgDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BMPTOJPGDLG_H__B4783D11_FCD2_4F0D_8988_AEB3F635DF97__INCLUDED_)
