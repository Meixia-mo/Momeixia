
// test11-3View.h : Ctest113View ��Ľӿ�
//

#pragma once


class Ctest113View : public CView
{
protected: // �������л�����
	Ctest113View();
	DECLARE_DYNCREATE(Ctest113View)

// ����
public:
	Ctest113Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest113View();
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

#ifndef _DEBUG  // test11-3View.cpp �еĵ��԰汾
inline Ctest113Doc* Ctest113View::GetDocument() const
   { return reinterpret_cast<Ctest113Doc*>(m_pDocument); }
#endif

