
// �ھ���ʵ��-1View.h : C�ھ���ʵ��1View ��Ľӿ�
//

#pragma once


class C�ھ���ʵ��1View : public CView
{
protected: // �������л�����
	C�ھ���ʵ��1View();
	DECLARE_DYNCREATE(C�ھ���ʵ��1View)

// ����
public:
	C�ھ���ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ھ���ʵ��1View();
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
	afx_msg void OnClose();
};

#ifndef _DEBUG  // �ھ���ʵ��-1View.cpp �еĵ��԰汾
inline C�ھ���ʵ��1Doc* C�ھ���ʵ��1View::GetDocument() const
   { return reinterpret_cast<C�ھ���ʵ��1Doc*>(m_pDocument); }
#endif

