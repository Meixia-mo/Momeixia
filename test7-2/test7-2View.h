
// test7-2View.h : Ctest72View ��Ľӿ�
//

#pragma once


class Ctest72View : public CView
{
protected: // �������л�����
	Ctest72View();
	DECLARE_DYNCREATE(Ctest72View)

// ����
public:
	Ctest72Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest72View();
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

#ifndef _DEBUG  // test7-2View.cpp �еĵ��԰汾
inline Ctest72Doc* Ctest72View::GetDocument() const
   { return reinterpret_cast<Ctest72Doc*>(m_pDocument); }
#endif

