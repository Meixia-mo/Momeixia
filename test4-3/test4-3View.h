
// test4-3View.h : Ctest43View ��Ľӿ�
//

#pragma once


class Ctest43View : public CView
{
protected: // �������л�����
	Ctest43View();
	DECLARE_DYNCREATE(Ctest43View)

// ����
public:
	Ctest43Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest43View();
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

#ifndef _DEBUG  // test4-3View.cpp �еĵ��԰汾
inline Ctest43Doc* Ctest43View::GetDocument() const
   { return reinterpret_cast<Ctest43Doc*>(m_pDocument); }
#endif

