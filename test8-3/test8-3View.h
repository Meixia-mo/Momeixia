
// test8-3View.h : Ctest83View ��Ľӿ�
//

#pragma once


class Ctest83View : public CView
{
protected: // �������л�����
	Ctest83View();
	DECLARE_DYNCREATE(Ctest83View)

// ����
public:
	Ctest83Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest83View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSolid();
	afx_msg void OnRectangle();
	afx_msg void OnCircle();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test8-3View.cpp �еĵ��԰汾
inline Ctest83Doc* Ctest83View::GetDocument() const
   { return reinterpret_cast<Ctest83Doc*>(m_pDocument); }
#endif

