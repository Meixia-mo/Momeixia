
// test10-3View.h : Ctest103View ��Ľӿ�
//

#pragma once


class Ctest103View : public CView
{
protected: // �������л�����
	Ctest103View();
	DECLARE_DYNCREATE(Ctest103View)

// ����
public:
	Ctest103Doc* GetDocument() const;

// ����
public:
	CString s;


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest103View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // test10-3View.cpp �еĵ��԰汾
inline Ctest103Doc* Ctest103View::GetDocument() const
   { return reinterpret_cast<Ctest103Doc*>(m_pDocument); }
#endif

