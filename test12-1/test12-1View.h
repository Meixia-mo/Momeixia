
// test12-1View.h : Ctest121View ��Ľӿ�
//

#pragma once


class Ctest121View : public CView
{
protected: // �������л�����
	Ctest121View();
	DECLARE_DYNCREATE(Ctest121View)

// ����
public:
	Ctest121Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest121View();
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
};

#ifndef _DEBUG  // test12-1View.cpp �еĵ��԰汾
inline Ctest121Doc* Ctest121View::GetDocument() const
   { return reinterpret_cast<Ctest121Doc*>(m_pDocument); }
#endif

