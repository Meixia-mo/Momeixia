
// MFCtest1-1View.h : CMFCtest11View ��Ľӿ�
//

#pragma once


class CMFCtest11View : public CView
{
protected: // �������л�����
	CMFCtest11View();
	DECLARE_DYNCREATE(CMFCtest11View)

// ����
public:
	CMFCtest11Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCtest11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCtest1-1View.cpp �еĵ��԰汾
inline CMFCtest11Doc* CMFCtest11View::GetDocument() const
   { return reinterpret_cast<CMFCtest11Doc*>(m_pDocument); }
#endif

