
// MFCAtest1-3View.cpp : CMFCAtest13View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCAtest1-3.h"
#endif

#include "MFCAtest1-3Doc.h"
#include "MFCAtest1-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCAtest13View

IMPLEMENT_DYNCREATE(CMFCAtest13View, CView)

BEGIN_MESSAGE_MAP(CMFCAtest13View, CView)
END_MESSAGE_MAP()

// CMFCAtest13View ����/����

CMFCAtest13View::CMFCAtest13View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCAtest13View::~CMFCAtest13View()
{
}

BOOL CMFCAtest13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCAtest13View ����

void CMFCAtest13View::OnDraw(CDC* pDC)
{
	CMFCAtest13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect rc;
	GetClientRect(&rc);
	int red = 100;
	int blue = 100;
	int green = 120;
	int color=RGB(red,blue,green);
	CBrush newBrush(color);
	CBrush*oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(rc);
	pDC->SelectObject(oldBrush);
}


// CMFCAtest13View ���

#ifdef _DEBUG
void CMFCAtest13View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCAtest13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCAtest13Doc* CMFCAtest13View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCAtest13Doc)));
	return (CMFCAtest13Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCAtest13View ��Ϣ�������
