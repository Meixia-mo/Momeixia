
// MFCAtest1-2View.h : CMFCAtest12View ��Ľӿ�
//

#pragma once


class CMFCAtest12View : public CView
{
protected: // �������л�����
	CMFCAtest12View();
	DECLARE_DYNCREATE(CMFCAtest12View)

// ����
public:
	CMFCAtest12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCAtest12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCAtest1-2View.cpp �еĵ��԰汾
inline CMFCAtest12Doc* CMFCAtest12View::GetDocument() const
   { return reinterpret_cast<CMFCAtest12Doc*>(m_pDocument); }
#endif

