
// test8-2View.h : Ctest82View ��Ľӿ�
//

#pragma once


class Ctest82View : public CView
{
protected: // �������л�����
	Ctest82View();
	DECLARE_DYNCREATE(Ctest82View)

// ����
public:
	Ctest82Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest82View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test8-2View.cpp �еĵ��԰汾
inline Ctest82Doc* Ctest82View::GetDocument() const
   { return reinterpret_cast<Ctest82Doc*>(m_pDocument); }
#endif

