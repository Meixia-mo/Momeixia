
// test4-1View.h : Ctest41View ��Ľӿ�
//

#pragma once


class Ctest41View : public CView
{
protected: // �������л�����
	Ctest41View();
	DECLARE_DYNCREATE(Ctest41View)

// ����
public:
	Ctest41Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest41View();
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
};

#ifndef _DEBUG  // test4-1View.cpp �еĵ��԰汾
inline Ctest41Doc* Ctest41View::GetDocument() const
   { return reinterpret_cast<Ctest41Doc*>(m_pDocument); }
#endif

