
// test9-2View.h : Ctest92View ��Ľӿ�
//

#pragma once


class Ctest92View : public CView
{
protected: // �������л�����
	Ctest92View();
	DECLARE_DYNCREATE(Ctest92View)

// ����
public:
	Ctest92Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest92View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // test9-2View.cpp �еĵ��԰汾
inline Ctest92Doc* Ctest92View::GetDocument() const
   { return reinterpret_cast<Ctest92Doc*>(m_pDocument); }
#endif

