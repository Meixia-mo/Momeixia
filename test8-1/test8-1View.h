
// test8-1View.h : Ctest81View ��Ľӿ�
//

#pragma once


class Ctest81View : public CView
{
protected: // �������л�����
	Ctest81View();
	DECLARE_DYNCREATE(Ctest81View)

// ����
public:
	Ctest81Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest81View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowName();
};

#ifndef _DEBUG  // test8-1View.cpp �еĵ��԰汾
inline Ctest81Doc* Ctest81View::GetDocument() const
   { return reinterpret_cast<Ctest81Doc*>(m_pDocument); }
#endif

