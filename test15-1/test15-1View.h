
// test15-1View.h : Ctest151View ��Ľӿ�
//

#pragma once


class Ctest151View : public CView
{
protected: // �������л�����
	Ctest151View();
	DECLARE_DYNCREATE(Ctest151View)

// ����
public:
	Ctest151Doc* GetDocument() const;

// ����
public:
	CString path;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest151View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileSaveAs();
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // test15-1View.cpp �еĵ��԰汾
inline Ctest151Doc* Ctest151View::GetDocument() const
   { return reinterpret_cast<Ctest151Doc*>(m_pDocument); }
#endif

