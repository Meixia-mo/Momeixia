
// MFCtext1View.cpp : CMFCtext1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCtext1.h"
#endif

#include "MFCtext1Doc.h"
#include "MFCtext1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCtext1View

IMPLEMENT_DYNCREATE(CMFCtext1View, CView)

BEGIN_MESSAGE_MAP(CMFCtext1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_LBUTTONDOWN()
ON_WM_MBUTTONDBLCLK()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCtext1View ����/����

CMFCtext1View::CMFCtext1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCtext1View::~CMFCtext1View()
{
}

BOOL CMFCtext1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCtext1View ����

void CMFCtext1View::OnDraw(CDC* pDC)
{
	CMFCtext1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	CClientDC dc(this);
	
	int red = 20;
	int green = 30, blue = 40;
	int width = 2, row = 20;
	int color = RGB(red, green, blue);
	
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

}


// CMFCtext1View ��ӡ

BOOL CMFCtext1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCtext1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCtext1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCtext1View ���

#ifdef _DEBUG
void CMFCtext1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCtext1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCtext1Doc* CMFCtext1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCtext1Doc)));
	return (CMFCtext1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCtext1View ��Ϣ�������


//void CMFCtext1View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//
//
//	CView::OnLButtonDown(nFlags, point);
//}


void CMFCtext1View::OnMButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMButtonDblClk(nFlags, point);
}


void CMFCtext1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	//s.Format(_T("%d,%d"), point.x, point.y);
	CClientDC dc(this);
	CMFCtext1Doc* pDoc = GetDocument();
	int red = 20;
	int green = 30, blue = 40;
	int width = 2, row = 20;
	int color = RGB(red, green, blue);
	CPen newPen(PS_SOLID, width, color);
	int b = 200, a = 100;
	int r = rand() % (b - a) + a;
	dc.Ellipse(point.x-r, point.y-r, point.x+r, point.y+ rand() % (b - a) + a);
	dc.SelectObject(newPen);


	CView::OnLButtonDown(nFlags, point);
}
