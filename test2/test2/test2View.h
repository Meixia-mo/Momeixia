
// test2View.h : Ctest2View ��Ľӿ�
//

#pragma once


class Ctest2View : public CView
{
protected: // �������л�����
	Ctest2View();
	DECLARE_DYNCREATE(Ctest2View)

// ����
public:
	Ctest2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest2View();
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

#ifndef _DEBUG  // test2View.cpp �еĵ��԰汾
inline Ctest2Doc* Ctest2View::GetDocument() const
   { return reinterpret_cast<Ctest2Doc*>(m_pDocument); }
#endif

