
// test12-2View.h : Ctest122View ��Ľӿ�
//

#pragma once


class Ctest122View : public CView
{
protected: // �������л�����
	Ctest122View();
	DECLARE_DYNCREATE(Ctest122View)

// ����
public:
	Ctest122Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest122View();
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

#ifndef _DEBUG  // test12-2View.cpp �еĵ��԰汾
inline Ctest122Doc* Ctest122View::GetDocument() const
   { return reinterpret_cast<Ctest122Doc*>(m_pDocument); }
#endif

