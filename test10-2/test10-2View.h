
// test10-2View.h : Ctest102View ��Ľӿ�
//

#pragma once


class Ctest102View : public CView
{
protected: // �������л�����
	Ctest102View();
	DECLARE_DYNCREATE(Ctest102View)

// ����
public:
	Ctest102Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest102View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test10-2View.cpp �еĵ��԰汾
inline Ctest102Doc* Ctest102View::GetDocument() const
   { return reinterpret_cast<Ctest102Doc*>(m_pDocument); }
#endif

