
// ������ʵ��-1View.h : C������ʵ��1View ��Ľӿ�
//

#pragma once


class C������ʵ��1View : public CView
{
protected: // �������л�����
	C������ʵ��1View();
	DECLARE_DYNCREATE(C������ʵ��1View)

// ����
public:
	C������ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ʵ��1View();
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

#ifndef _DEBUG  // ������ʵ��-1View.cpp �еĵ��԰汾
inline C������ʵ��1Doc* C������ʵ��1View::GetDocument() const
   { return reinterpret_cast<C������ʵ��1Doc*>(m_pDocument); }
#endif

