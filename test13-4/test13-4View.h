
// test13-4View.h : Ctest134View ��Ľӿ�
//

#pragma once


class Ctest134View : public CView
{
protected: // �������л�����
	Ctest134View();
	DECLARE_DYNCREATE(Ctest134View)

// ����
public:
	Ctest134Doc* GetDocument() const;

// ����
public:
	CRect rc;
	bool set;
	bool flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest134View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnAddcolor();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test13-4View.cpp �еĵ��԰汾
inline Ctest134Doc* Ctest134View::GetDocument() const
   { return reinterpret_cast<Ctest134Doc*>(m_pDocument); }
#endif

