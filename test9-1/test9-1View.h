
// test9-1View.h : Ctest91View ��Ľӿ�
//

#pragma once


class Ctest91View : public CView
{
protected: // �������л�����
	Ctest91View();
	DECLARE_DYNCREATE(Ctest91View)

// ����
public:
	Ctest91Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest91View();
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

#ifndef _DEBUG  // test9-1View.cpp �еĵ��԰汾
inline Ctest91Doc* Ctest91View::GetDocument() const
   { return reinterpret_cast<Ctest91Doc*>(m_pDocument); }
#endif

