
// test10-1View.h : Ctest101View ��Ľӿ�
//

#pragma once


class Ctest101View : public CView
{
protected: // �������л�����
	Ctest101View();
	DECLARE_DYNCREATE(Ctest101View)

// ����
public:
	Ctest101Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest101View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // test10-1View.cpp �еĵ��԰汾
inline Ctest101Doc* Ctest101View::GetDocument() const
   { return reinterpret_cast<Ctest101Doc*>(m_pDocument); }
#endif

