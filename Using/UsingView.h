
// UsingView.h : CUsingView ��Ľӿ�
//

#pragma once


class CUsingView : public CView
{
protected: // �������л�����
	CUsingView();
	DECLARE_DYNCREATE(CUsingView)

// ����
public:
	CUsingDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsingView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingView.cpp �еĵ��԰汾
inline CUsingDoc* CUsingView::GetDocument() const
   { return reinterpret_cast<CUsingDoc*>(m_pDocument); }
#endif

