
// test12-2View.cpp : Ctest122View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test12-2.h"
#endif

#include "test12-2Doc.h"
#include "test12-2View.h"
#include "MyDlg.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest122View

IMPLEMENT_DYNCREATE(Ctest122View, CView)

BEGIN_MESSAGE_MAP(Ctest122View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &Ctest122View::OnPopout)
END_MESSAGE_MAP()

// Ctest122View ����/����

Ctest122View::Ctest122View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest122View::~Ctest122View()
{
}

BOOL Ctest122View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest122View ����

void Ctest122View::OnDraw(CDC* /*pDC*/)
{
	Ctest122Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest122View ���

#ifdef _DEBUG
void Ctest122View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest122View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest122Doc* Ctest122View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest122Doc)));
	return (Ctest122Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest122View ��Ϣ�������


void Ctest122View::OnLButtonDblClk(UINT nFlags, CPoint point)
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
	//Ctest122Doc* pDoc = GetDocument();
	//pDoc->s = filename;
	CMainFrame* pMain = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	pMain->ss = filename;

	MyDlg *pD = new MyDlg;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CView::OnLButtonDblClk(nFlags, point);
}


void Ctest122View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	/*int r = dlg.DoModal();
	if (r == IDOK) {}*/
}
