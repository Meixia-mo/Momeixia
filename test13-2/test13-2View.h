
// test13-2View.h : Ctest132View ��Ľӿ�
//

#pragma once


class Ctest132View : public CView
{
protected: // �������л�����
	Ctest132View();
	DECLARE_DYNCREATE(Ctest132View)

// ����
public:
	Ctest132Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest132View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMove(int x, int y);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test13-2View.cpp �еĵ��԰汾
inline Ctest132Doc* Ctest132View::GetDocument() const
   { return reinterpret_cast<Ctest132Doc*>(m_pDocument); }
#endif

