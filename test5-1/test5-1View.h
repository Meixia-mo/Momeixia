
// test5-1View.h : Ctest51View ��Ľӿ�
//

#pragma once


class Ctest51View : public CView
{
protected: // �������л�����
	Ctest51View();
	DECLARE_DYNCREATE(Ctest51View)

// ����
public:
	Ctest51Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest51View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test5-1View.cpp �еĵ��԰汾
inline Ctest51Doc* Ctest51View::GetDocument() const
   { return reinterpret_cast<Ctest51Doc*>(m_pDocument); }
#endif

