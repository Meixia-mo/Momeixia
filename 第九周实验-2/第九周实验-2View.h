
// �ھ���ʵ��-2View.h : C�ھ���ʵ��2View ��Ľӿ�
//

#pragma once


class C�ھ���ʵ��2View : public CView
{
protected: // �������л�����
	C�ھ���ʵ��2View();
	DECLARE_DYNCREATE(C�ھ���ʵ��2View)

// ����
public:
	C�ھ���ʵ��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ھ���ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // �ھ���ʵ��-2View.cpp �еĵ��԰汾
inline C�ھ���ʵ��2Doc* C�ھ���ʵ��2View::GetDocument() const
   { return reinterpret_cast<C�ھ���ʵ��2Doc*>(m_pDocument); }
#endif

