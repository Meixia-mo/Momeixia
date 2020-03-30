
// test9-2View.cpp : Ctest92View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test9-2.h"
#endif

#include "test9-2Doc.h"
#include "test9-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest92View

IMPLEMENT_DYNCREATE(Ctest92View, CView)

BEGIN_MESSAGE_MAP(Ctest92View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Ctest92View::OnFileOpen)
END_MESSAGE_MAP()

// Ctest92View ����/����

Ctest92View::Ctest92View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctest92View::~Ctest92View()
{
}

BOOL Ctest92View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest92View ����

void Ctest92View::OnDraw(CDC* /*pDC*/)
{
	Ctest92Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctest92View ���

#ifdef _DEBUG
void Ctest92View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest92View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest92Doc* Ctest92View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest92Doc)));
	return (Ctest92Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest92View ��Ϣ�������


void Ctest92View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CImage img;
	CRect rc;
	GetClientRect(&rc);
	int h, w, sx, sy;
	if (r == IDOK) {
		CString filename = cfd.GetPathName();//ȡ���ļ�·��
		img.Load(filename);//����ͼƬ
		float rc_ratio = 1.0*rc.right / rc.bottom;
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		//img.Draw(dc.m_hDC, (rc.right - img.GetWidth()) / 2, (rc.bottom - img.GetHeight()) / 2, img.GetWidth(), img.GetHeight());//������ʾͼƬ
		//dc.TextOutW((rc.right - img.GetWidth()) / 2, (rc.bottom - img.GetHeight()) / 2 + img.GetHeight(), filename);//��ʾͼƬ·��
		if (rc_ratio > img_ratio) {
			h = rc.Height();
			w = img_ratio*h;
			sx = (rc.right- w) / 2;
			sy = 0;
		}
		else {
			w = rc.Width();
			h = w / img_ratio;
			sx = 0;
			sy = (rc.bottom - h) / 2;
		}
		img.Draw(dc.m_hDC,sx,sy, w, h);//���������ž�����ʾͼƬ
	}
}
