
// test7-1View.h : Ctest71View ��Ľӿ�
//

#pragma once


class Ctest71View : public CView
{
protected: // �������л�����
	Ctest71View();
	DECLARE_DYNCREATE(Ctest71View)

// ����
public:
	Ctest71Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test7-1View.cpp �еĵ��԰汾
inline Ctest71Doc* Ctest71View::GetDocument() const
   { return reinterpret_cast<Ctest71Doc*>(m_pDocument); }
#endif

