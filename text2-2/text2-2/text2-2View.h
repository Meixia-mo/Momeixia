
// text2-2View.h : Ctext22View ��Ľӿ�
//

#pragma once


class Ctext22View : public CView
{
protected: // �������л�����
	Ctext22View();
	DECLARE_DYNCREATE(Ctext22View)

// ����
public:
	Ctext22Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext22View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // text2-2View.cpp �еĵ��԰汾
inline Ctext22Doc* Ctext22View::GetDocument() const
   { return reinterpret_cast<Ctext22Doc*>(m_pDocument); }
#endif

