
// PlayOmokDlg.h: 헤더 파일
//

#pragma once

#define X_COUNT			19
#define Y_COUNT			19
#define G_LEN			30	// GRID LENGTH
#define G_LEN_H			15	// GRID LENGTH HALF

// CPlayOmokDlg 대화 상자
class CPlayOmokDlg : public CDialogEx
{
private:
	CPen m_grid_pen;

// 생성입니다.
public:
	CPlayOmokDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PLAYOMOK_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
