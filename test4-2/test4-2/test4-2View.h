
// test4-2View.h : Ctest42View ��Ľӿ�
//

#pragma once


class Ctest42View : public CView
{
protected: // �������л�����
	Ctest42View();
	DECLARE_DYNCREATE(Ctest42View)

// ����
public:
	Ctest42Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest42View();
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

#ifndef _DEBUG  // test4-2View.cpp �еĵ��԰汾
inline Ctest42Doc* Ctest42View::GetDocument() const
   { return reinterpret_cast<Ctest42Doc*>(m_pDocument); }
#endif

