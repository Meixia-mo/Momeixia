
// test6-1View.h : Ctest61View ��Ľӿ�
//

#pragma once


class Ctest61View : public CView
{
protected: // �������л�����
	Ctest61View();
	DECLARE_DYNCREATE(Ctest61View)

// ����
public:
	Ctest61Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest61View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test6-1View.cpp �еĵ��԰汾
inline Ctest61Doc* Ctest61View::GetDocument() const
   { return reinterpret_cast<Ctest61Doc*>(m_pDocument); }
#endif

