
// test13-1View.h : Ctest131View ��Ľӿ�
//

#pragma once


class Ctest131View : public CView
{
protected: // �������л�����
	Ctest131View();
	DECLARE_DYNCREATE(Ctest131View)

// ����
public:
	Ctest131Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest131View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCountnumber();
};

#ifndef _DEBUG  // test13-1View.cpp �еĵ��԰汾
inline Ctest131Doc* Ctest131View::GetDocument() const
   { return reinterpret_cast<Ctest131Doc*>(m_pDocument); }
#endif

