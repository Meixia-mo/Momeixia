
// test13-3View.h : Ctest133View ��Ľӿ�
//

#pragma once


class Ctest133View : public CView
{
protected: // �������л�����
	Ctest133View();
	DECLARE_DYNCREATE(Ctest133View)

// ����
public:
	Ctest133Doc* GetDocument() const;
// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest133View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
	afx_msg void OnBnClickedOk();
};

#ifndef _DEBUG  // test13-3View.cpp �еĵ��԰汾
inline Ctest133Doc* Ctest133View::GetDocument() const
   { return reinterpret_cast<Ctest133Doc*>(m_pDocument); }
#endif

