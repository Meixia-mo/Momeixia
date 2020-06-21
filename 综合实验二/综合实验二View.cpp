
// 综合实验二View.cpp : C综合实验二View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "综合实验二.h"
#endif

#include "综合实验二Set.h"
#include "综合实验二Doc.h"
#include "综合实验二View.h"
#include "ShowPicture.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验二View

IMPLEMENT_DYNCREATE(C综合实验二View, CRecordView)

BEGIN_MESSAGE_MAP(C综合实验二View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &C综合实验二View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &C综合实验二View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C综合实验二View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C综合实验二View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C综合实验二View::OnRecordLast)
END_MESSAGE_MAP()

// C综合实验二View 构造/析构

C综合实验二View::C综合实验二View()
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
	// TODO: 在此处添加构造代码
	path = _T("D:\\桌面文件夹\\王一博\\");

}

C综合实验二View::~C综合实验二View()
{
}

void C综合实验二View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
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

BOOL C综合实验二View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C综合实验二View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_综合实验二Set;
	CRecordView::OnInitialUpdate();

}


// C综合实验二View 打印

BOOL C综合实验二View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C综合实验二View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C综合实验二View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C综合实验二View 诊断

#ifdef _DEBUG
void C综合实验二View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C综合实验二View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C综合实验二Doc* C综合实验二View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C综合实验二Doc)));
	return (C综合实验二Doc*)m_pDocument;
}
#endif //_DEBUG


// C综合实验二View 数据库支持
CRecordset* C综合实验二View::OnGetRecordset()
{
	return m_pSet;
}

void C综合实验二View::draw(CString file) {
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

// C综合实验二View 消息处理程序


void C综合实验二View::OnBnClickedButton1()
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


void C综合实验二View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT9, s);
	filename = path + s;
	//filename = s;
	draw(filename);
}


void C综合实验二View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
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


void C综合实验二View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
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


void C综合实验二View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename, s;
	GetDlgItemText(IDC_EDIT9, s);
	filename = path + s;
	//filename = s;
	draw(filename);
}
