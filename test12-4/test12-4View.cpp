
// test12-4View.cpp : Ctest124View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test12-4.h"
#endif

#include "test12-4Doc.h"
#include "test12-4View.h"
#include "MainFrm.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest124View

IMPLEMENT_DYNCREATE(Ctest124View, CView)

BEGIN_MESSAGE_MAP(Ctest124View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &Ctest124View::OnPopout)
END_MESSAGE_MAP()

// Ctest124View ����/����

Ctest124View::Ctest124View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest124View::~Ctest124View()
{
}

BOOL Ctest124View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest124View ����

void Ctest124View::OnDraw(CDC* /*pDC*/)
{
	Ctest124Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest124View ���

#ifdef _DEBUG
void Ctest124View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest124View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest124Doc* Ctest124View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest124Doc)));
	return (Ctest124Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest124View ��Ϣ�������


void Ctest124View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CString filename;
	if (r == IDOK) {
		filename = cfd.GetPathName();//ȡ���ļ�·��
	}
	dc.TextOutW(400, 400, filename);
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	pMain->ss = filename;

	MyDlg *pD = new MyDlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}


void Ctest124View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
}
