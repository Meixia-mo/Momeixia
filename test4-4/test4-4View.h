
// test4-4View.h : Ctest44View ��Ľӿ�
//

#pragma once


class Ctest44View : public CView
{
protected: // �������л�����
	Ctest44View();
	DECLARE_DYNCREATE(Ctest44View)

// ����
public:
	Ctest44Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest44View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test4-4View.cpp �еĵ��԰汾
inline Ctest44Doc* Ctest44View::GetDocument() const
   { return reinterpret_cast<Ctest44Doc*>(m_pDocument); }
#endif

