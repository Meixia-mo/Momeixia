
// test6-3View.h : Ctest63View ��Ľӿ�
//

#pragma once


class Ctest63View : public CView
{
protected: // �������л�����
	Ctest63View();
	DECLARE_DYNCREATE(Ctest63View)

// ����
public:
	Ctest63Doc* GetDocument() const;

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
	virtual ~Ctest63View();
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

#ifndef _DEBUG  // test6-3View.cpp �еĵ��԰汾
inline Ctest63Doc* Ctest63View::GetDocument() const
   { return reinterpret_cast<Ctest63Doc*>(m_pDocument); }
#endif

