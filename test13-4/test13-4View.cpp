
// test13-4View.cpp : Ctest134View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test13-4.h"
#endif

#include "test13-4Doc.h"
#include "test13-4View.h"
#include "Count.h"
#include "MainFrm.h"
#include "AColor.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest134View

IMPLEMENT_DYNCREATE(Ctest134View, CView)

BEGIN_MESSAGE_MAP(Ctest134View, CView)
	ON_COMMAND(ID_POPOUT, &Ctest134View::OnPopout)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_AddColor, &Ctest134View::OnAddcolor)
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Ctest134View ����/����

Ctest134View::Ctest134View()
{
	// TODO: �ڴ˴���ӹ������
	set = false;
	flag = false;
}

Ctest134View::~Ctest134View()
{
}

BOOL Ctest134View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest134View ����

void Ctest134View::OnDraw(CDC* pDC)
{
	Ctest134Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(rc);
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	if (set) {
		CPen pen;
		pen.CreatePen(PS_DOT, 1, RGB(0, 250, 0));
		
		//������ѡ���豸������pDC
		CPen*   pOldPen = (CPen*)pDC->SelectObject(&pen);
		// ������
		pDC->Rectangle(pMain->cx - pMain->ca, pMain->cy - pMain->cb, pMain->cx + pMain->ca, pMain->cy + pMain->cb);
		set=false;
	}
	if (flag) {
		CBrush brush;
		//����ˢ����ɫ��Ϊ��ɫ
		brush.CreateSolidBrush(RGB(pMain->red, pMain->green, pMain->blue1));
		//����ˢѡ���豸������pDC
		CBrush* pOldBrush = (CBrush*)pDC->SelectObject(&brush);
		pDC->Ellipse(pMain->cx - pMain->ca, pMain->cy - pMain->cb, pMain->cx + pMain->ca, pMain->cy + pMain->cb);
		flag = false;
	}
}


// Ctest134View ���

#ifdef _DEBUG
void Ctest134View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest134View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest134Doc* Ctest134View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest134Doc)));
	return (Ctest134Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest134View ��Ϣ�������


void Ctest134View::OnPopout()
{
	// TODO: �ڴ���������������
	Count *pD = new Count;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

}


void Ctest134View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	if (point.x <= pMain->cx && point.y <= pMain->cy) {
		if (pMain->cx - point.x <= pMain->ca && pMain->cy - point.y <= pMain->cb) {
			set = true;
		}
	}
	if (point.x > pMain->cx && point.y <= pMain->cy) {
		if (point.x - pMain->cx  <= pMain->ca && pMain->cy - point.y <= pMain->cb) {
			set = true;
		}
	}
	if (point.x <= pMain->cx && point.y >= pMain->cy) {
		if (pMain->cx - point.x < pMain->ca && point.y - pMain->cy <= pMain->cb) {
			set = true;
		}
	}
	if (point.x >= pMain->cx && point.y >= pMain->cy) {
		if (point.x - pMain->cx < pMain->ca && point.y - pMain->cy <= pMain->cb) {
			set = true;
		}
	}
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void Ctest134View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	rc.left = pMain->cx - pMain->ca;
	rc.right = pMain->cx + pMain->ca;
	rc.top = pMain->cy - pMain->cb;
	rc.bottom = pMain->cy + pMain->cb;
	Invalidate();
	CView::OnLButtonDblClk(nFlags, point);
}


void Ctest134View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	set = false;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void Ctest134View::OnAddcolor()
{
	// TODO: �ڴ���������������
	AColor *pD1 = new AColor;
	pD1->Create(IDD_DIALOG2);
	pD1->ShowWindow(1);
}


void Ctest134View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = true;
	Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
