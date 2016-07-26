
// MainDialog.h : header file
//

#pragma once
#include "afxwin.h"


// MainDialog dialog
class MainDialog : public CDialogEx
{
// Construction
public:
	MainDialog(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	enum CalculatorOperation { Add, Sub, Mul, Div };
	double FirstOperand;
	double SecondOperand;
	afx_msg void OnAddButton();
	afx_msg void OnEqButton();
	CString MainTextbox;
	CalculatorOperation PreviousOperation;
};