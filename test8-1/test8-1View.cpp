
// test8-1View.cpp : Ctest81View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test8-1.h"
#endif

#include "test8-1Doc.h"
#include "test8-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest81View

IMPLEMENT_DYNCREATE(Ctest81View, CView)

BEGIN_MESSAGE_MAP(Ctest81View, CView)
	ON_COMMAND(ID_SHOW_NAME, &Ctest81View::OnShowName)
END_MESSAGE_MAP()

// Ctest81View ����/����

Ctest81View::Ctest81View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest81View::~Ctest81View()
{
}

BOOL Ctest81View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest81View ����

void Ctest81View::OnDraw(CDC* /*pDC*/)
{
	Ctest81Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest81View ���

#ifdef _DEBUG
void Ctest81View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest81View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest81Doc* Ctest81View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest81Doc)));
	return (Ctest81Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest81View ��Ϣ�������


void Ctest81View::OnShowName()
{
	// TODO: �ڴ���������������
	CString s;
	CClientDC dc(this);
	s.Format(_T("����Ī��ϼ��"));
	dc.TextOutW(200, 100, s);
}
