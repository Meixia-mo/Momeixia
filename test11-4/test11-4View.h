
// test11-4View.h : Ctest114View ��Ľӿ�
//

#pragma once


class Ctest114View : public CView
{
protected: // �������л�����
	Ctest114View();
	DECLARE_DYNCREATE(Ctest114View)

// ����
public:
	Ctest114Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest114View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test11-4View.cpp �еĵ��԰汾
inline Ctest114Doc* Ctest114View::GetDocument() const
   { return reinterpret_cast<Ctest114Doc*>(m_pDocument); }
#endif

