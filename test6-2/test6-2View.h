
// test6-2View.h : Ctest62View ��Ľӿ�
//

#pragma once


class Ctest62View : public CView
{
protected: // �������л�����
	Ctest62View();
	DECLARE_DYNCREATE(Ctest62View)

// ����
public:
	Ctest62Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest62View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test6-2View.cpp �еĵ��԰汾
inline Ctest62Doc* Ctest62View::GetDocument() const
   { return reinterpret_cast<Ctest62Doc*>(m_pDocument); }
#endif

