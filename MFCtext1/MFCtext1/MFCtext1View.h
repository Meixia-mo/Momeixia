
// MFCtext1View.h : CMFCtext1View ��Ľӿ�
//

#pragma once


class CMFCtext1View : public CView
{
protected: // �������л�����
	CMFCtext1View();
	DECLARE_DYNCREATE(CMFCtext1View)

// ����
public:
	CMFCtext1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMFCtext1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCtext1View.cpp �еĵ��԰汾
inline CMFCtext1Doc* CMFCtext1View::GetDocument() const
   { return reinterpret_cast<CMFCtext1Doc*>(m_pDocument); }
#endif

