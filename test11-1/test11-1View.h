
// test11-1View.h : Ctest111View ��Ľӿ�
//

#pragma once


class Ctest111View : public CView
{
protected: // �������л�����
	Ctest111View();
	DECLARE_DYNCREATE(Ctest111View)

// ����
public:
	Ctest111Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest111View();
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

#ifndef _DEBUG  // test11-1View.cpp �еĵ��԰汾
inline Ctest111Doc* Ctest111View::GetDocument() const
   { return reinterpret_cast<Ctest111Doc*>(m_pDocument); }
#endif

