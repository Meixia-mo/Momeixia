
// test 6-3-1View.h : Ctest631View ��Ľӿ�
//

#pragma once


class Ctest631View : public CView
{
protected: // �������л�����
	Ctest631View();
	DECLARE_DYNCREATE(Ctest631View)

// ����
public:
	Ctest631Doc* GetDocument() const;

// ����
public:
	int N;
	CArray<CRect, CRect> cr;
	CArray<boolean, boolean> flag;
	bool set;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest631View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // test 6-3-1View.cpp �еĵ��԰汾
inline Ctest631Doc* Ctest631View::GetDocument() const
   { return reinterpret_cast<Ctest631Doc*>(m_pDocument); }
#endif

