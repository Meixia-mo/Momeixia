
// test7-1-1View.h : Ctest711View ��Ľӿ�
//

#pragma once


class Ctest711View : public CView
{
protected: // �������л�����
	Ctest711View();
	DECLARE_DYNCREATE(Ctest711View)

// ����
public:
	Ctest711Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest711View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewCircle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // test7-1-1View.cpp �еĵ��԰汾
inline Ctest711Doc* Ctest711View::GetDocument() const
   { return reinterpret_cast<Ctest711Doc*>(m_pDocument); }
#endif

