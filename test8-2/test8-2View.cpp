
// test8-2View.cpp : Ctest82View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "test8-2.h"
#endif

#include "test8-2Doc.h"
#include "test8-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest82View

IMPLEMENT_DYNCREATE(Ctest82View, CView)

BEGIN_MESSAGE_MAP(Ctest82View, CView)
END_MESSAGE_MAP()

// Ctest82View ����/����

Ctest82View::Ctest82View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

Ctest82View::~Ctest82View()
{
}

BOOL Ctest82View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctest82View ����

void Ctest82View::OnDraw(CDC* pDC)
{
	Ctest82Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// Ctest82View ���

#ifdef _DEBUG
void Ctest82View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest82View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest82Doc* Ctest82View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest82Doc)));
	return (Ctest82Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest82View ��Ϣ�������
