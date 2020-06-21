
// �ۺ�ʵ���View.cpp : C�ۺ�ʵ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ۺ�ʵ���.h"
#endif

#include "�ۺ�ʵ���Set.h"
#include "�ۺ�ʵ���Doc.h"
#include "�ۺ�ʵ���View.h"
#include "ShowPicture.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ���View

IMPLEMENT_DYNCREATE(C�ۺ�ʵ���View, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ���View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &C�ۺ�ʵ���View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &C�ۺ�ʵ���View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C�ۺ�ʵ���View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C�ۺ�ʵ���View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C�ۺ�ʵ���View::OnRecordLast)
END_MESSAGE_MAP()

// C�ۺ�ʵ���View ����/����

C�ۺ�ʵ���View::C�ۺ�ʵ���View()
	: CRecordView(IDD_MY_FORM)
	, ID(0)
	, name1(_T(""))
	, sno(_T(""))
	, dept(_T(""))
	, sex(_T(""))
	, birthday(_T(""))
	, phone(_T(""))
	, add(_T(""))
	, path1(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("D:\\�����ļ���\\��һ��\\");

}

C�ۺ�ʵ���View::~C�ۺ�ʵ���View()
{
}

void C�ۺ�ʵ���View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_5);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->m_6);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->m_7);
	DDX_Text(pDX, IDC_EDIT9, m_pSet->m_8);
}

BOOL C�ۺ�ʵ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C�ۺ�ʵ���View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_�ۺ�ʵ���Set;
	CRecordView::OnInitialUpdate();

}


// C�ۺ�ʵ���View ��ӡ

BOOL C�ۺ�ʵ���View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C�ۺ�ʵ���View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C�ۺ�ʵ���View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C�ۺ�ʵ���View ���

#ifdef _DEBUG
void C�ۺ�ʵ���View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C�ۺ�ʵ���View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C�ۺ�ʵ���Doc* C�ۺ�ʵ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ۺ�ʵ���Doc)));
	return (C�ۺ�ʵ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ۺ�ʵ���View ���ݿ�֧��
CRecordset* C�ۺ�ʵ���View::OnGetRecordset()
{
	return m_pSet;
}

void C�ۺ�ʵ���View::draw(CString file) {
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	img.Draw(pDC->m_hDC, sx, sy, w, h);
}

// C�ۺ�ʵ���View ��Ϣ�������


void C�ۺ�ʵ���View::OnBnClickedButton1()
{
	ShowPicture *pD = new ShowPicture;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);
	CString filename, s;
	GetDlgItemText(IDC_EDIT9, s);
	filename = path + s;
	CImage img;
	img.Load(filename);
	CDC* pDC = pD->GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	pD->GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	//draw(filename);
}


void C�ۺ�ʵ���View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT9, s);
	filename = path + s;
	//filename = s;
	draw(filename);
}


void C�ۺ�ʵ���View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT9, s);
	filename = path + s;
	//filename = s;
	draw(filename);
}


void C�ۺ�ʵ���View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT9, s);
	filename = path + s;
	//filename = s;
	draw(filename);
}


void C�ۺ�ʵ���View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT9, s);
	filename = path + s;
	//filename = s;
	draw(filename);
}
