
// test11-2View.h : Ctest112View ��Ľӿ�
//

#pragma once


class Ctest112View : public CView
{
protected: // �������л�����
	Ctest112View();
	DECLARE_DYNCREATE(Ctest112View)

// ����
public:
	Ctest112Doc* GetDocument() const;

// ����
public:
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest112View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test11-2View.cpp �еĵ��԰汾
inline Ctest112Doc* Ctest112View::GetDocument() const
   { return reinterpret_cast<Ctest112Doc*>(m_pDocument); }
#endif

