
// MFCAtest1-3View.h : CMFCAtest13View ��Ľӿ�
//

#pragma once


class CMFCAtest13View : public CView
{
protected: // �������л�����
	CMFCAtest13View();
	DECLARE_DYNCREATE(CMFCAtest13View)

// ����
public:
	CMFCAtest13Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCAtest13View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCAtest1-3View.cpp �еĵ��԰汾
inline CMFCAtest13Doc* CMFCAtest13View::GetDocument() const
   { return reinterpret_cast<CMFCAtest13Doc*>(m_pDocument); }
#endif

