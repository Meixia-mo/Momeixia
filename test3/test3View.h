
// test3View.h : Ctest3View ��Ľӿ�
//

#pragma once


class Ctest3View : public CView
{
protected: // �������л�����
	Ctest3View();
	DECLARE_DYNCREATE(Ctest3View)

// ����
public:
	Ctest3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test3View.cpp �еĵ��԰汾
inline Ctest3Doc* Ctest3View::GetDocument() const
   { return reinterpret_cast<Ctest3Doc*>(m_pDocument); }
#endif

