
// test3-1View.h : Ctest31View ��Ľӿ�
//

#pragma once


class Ctest31View : public CView
{
protected: // �������л�����
	Ctest31View();
	DECLARE_DYNCREATE(Ctest31View)

// ����
public:
	Ctest31Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest31View();
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
};

#ifndef _DEBUG  // test3-1View.cpp �еĵ��԰汾
inline Ctest31Doc* Ctest31View::GetDocument() const
   { return reinterpret_cast<Ctest31Doc*>(m_pDocument); }
#endif

