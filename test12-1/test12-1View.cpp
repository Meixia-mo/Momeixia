
// test12-1View.cpp : Ctest121View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test12-1.h"
#endif

#include "test12-1Doc.h"
#include "test12-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest121View

IMPLEMENT_DYNCREATE(Ctest121View, CView)

BEGIN_MESSAGE_MAP(Ctest121View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctest121View ����/����

Ctest121View::Ctest121View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest121View::~Ctest121View()
{
}

BOOL Ctest121View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest121View ����

void Ctest121View::OnDraw(CDC* /*pDC*/)
{
	Ctest121Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest121View ���

#ifdef _DEBUG
void Ctest121View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest121View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest121Doc* Ctest121View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest121Doc)));
	return (Ctest121Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest121View ��Ϣ�������


void Ctest121View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CString filename;
	if (r == IDOK) {
		 filename = cfd.GetPathName();//ȡ���ļ�·��
	}
	dc.TextOutW(100, 100, filename);
    CView::OnLButtonDblClk(nFlags, point);
}
