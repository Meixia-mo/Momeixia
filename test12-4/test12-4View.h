
// test12-4View.h : Ctest124View ��Ľӿ�
//

#pragma once


class Ctest124View : public CView
{
protected: // �������л�����
	Ctest124View();
	DECLARE_DYNCREATE(Ctest124View)

// ����
public:
	Ctest124Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest124View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // test12-4View.cpp �еĵ��԰汾
inline Ctest124Doc* Ctest124View::GetDocument() const
   { return reinterpret_cast<Ctest124Doc*>(m_pDocument); }
#endif

