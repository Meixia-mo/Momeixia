
// test15-2View.h : Ctest152View ��Ľӿ�
//

#pragma once


class Ctest152View : public CView
{
protected: // �������л�����
	Ctest152View();
	DECLARE_DYNCREATE(Ctest152View)

// ����
public:
	Ctest152Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest152View();
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
};

#ifndef _DEBUG  // test15-2View.cpp �еĵ��԰汾
inline Ctest152Doc* Ctest152View::GetDocument() const
   { return reinterpret_cast<Ctest152Doc*>(m_pDocument); }
#endif

