
// test2-1View.h : Ctest21View ��Ľӿ�
//

#pragma once


class Ctest21View : public CView
{
protected: // �������л�����
	Ctest21View();
	DECLARE_DYNCREATE(Ctest21View)

// ����
public:
	Ctest21Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctest21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test2-1View.cpp �еĵ��԰汾
inline Ctest21Doc* Ctest21View::GetDocument() const
   { return reinterpret_cast<Ctest21Doc*>(m_pDocument); }
#endif

