
// test11-3View.cpp : Ctest113View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test11-3.h"
#endif

#include "test11-3Doc.h"
#include "test11-3View.h"
#include "AddDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest113View

IMPLEMENT_DYNCREATE(Ctest113View, CView)

BEGIN_MESSAGE_MAP(Ctest113View, CView)
	ON_COMMAND(ID_POPOUT, &Ctest113View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Ctest113View ����/����

Ctest113View::Ctest113View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest113View::~Ctest113View()
{
}

BOOL Ctest113View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest113View ����

void Ctest113View::OnDraw(CDC* /*pDC*/)
{
	Ctest113Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest113View ���

#ifdef _DEBUG
void Ctest113View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest113View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest113Doc* Ctest113View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest113Doc)));
	return (Ctest113Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest113View ��Ϣ�������


void Ctest113View::OnPopout()
{
	// TODO: �ڴ���������������
	AddDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		float aa, bb, cc;
		aa = dlg.a;
		bb = dlg.b;
		dlg.c = aa + bb;
	}
}


void Ctest113View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	AddDlg *pD = new AddDlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}
