
// test16-1View.h : Ctest161View ��Ľӿ�
//

#pragma once


class Ctest161View : public CView
{
protected: // �������л�����
	Ctest161View();
	DECLARE_DYNCREATE(Ctest161View)

// ����
public:
	Ctest161Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest161View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test16-1View.cpp �еĵ��԰汾
inline Ctest161Doc* Ctest161View::GetDocument() const
   { return reinterpret_cast<Ctest161Doc*>(m_pDocument); }
#endif

