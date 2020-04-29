
// test13-3View.cpp : Ctest133View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test13-3.h"
#endif

#include "test13-3Doc.h"
#include "test13-3View.h"
#include "Circle.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest133View

IMPLEMENT_DYNCREATE(Ctest133View, CView)

BEGIN_MESSAGE_MAP(Ctest133View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_POPOUT, &Ctest133View::OnPopout)
END_MESSAGE_MAP()

// Ctest133View ����/����

Ctest133View::Ctest133View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest133View::~Ctest133View()
{
}

BOOL Ctest133View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest133View ����

void Ctest133View::OnDraw(CDC* pDC)
{
	Ctest133Doc* pDoc = GetDocument();
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->rc);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest133View ���

#ifdef _DEBUG
void Ctest133View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest133View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest133Doc* Ctest133View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest133Doc)));
	return (Ctest133Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest133View ��Ϣ�������


void Ctest133View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	Ctest133Doc* pDoc = GetDocument();
	pDoc->rc.left = pMain->cx - pMain->ca;
	pDoc->rc.right = pMain->cx + pMain->ca;
	pDoc->rc.top = pMain->cy - pMain->cb;
	pDoc->rc.bottom = pMain->cy + pMain->cb;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void Ctest133View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnLButtonUp(nFlags, point);
}


void Ctest133View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnMouseMove(nFlags, point);
}


void Ctest133View::OnPopout()
{
	// TODO: �ڴ���������������
	Circle *pD = new Circle;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

}
