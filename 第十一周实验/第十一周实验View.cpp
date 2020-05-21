
// 第十一周实验View.cpp : C第十一周实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第十一周实验.h"
#endif

#include "第十一周实验Set.h"
#include "第十一周实验Doc.h"
#include "第十一周实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第十一周实验View

IMPLEMENT_DYNCREATE(C第十一周实验View, CRecordView)

BEGIN_MESSAGE_MAP(C第十一周实验View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// C第十一周实验View 构造/析构

C第十一周实验View::C第十一周实验View()
	: CRecordView(IDD_MY_FORM)
	, ID(0)
	, name(_T(""))
	, stdno(_T(""))
	, sex(_T(""))
	, stdno1(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C第十一周实验View::~C第十一周实验View()
{
}

void C第十一周实验View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例

	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	//DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_2);
}

BOOL C第十一周实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C第十一周实验View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_第十一周实验Set;
	CRecordView::OnInitialUpdate();

}


// C第十一周实验View 打印

BOOL C第十一周实验View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C第十一周实验View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C第十一周实验View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C第十一周实验View 诊断

#ifdef _DEBUG
void C第十一周实验View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C第十一周实验View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C第十一周实验Doc* C第十一周实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第十一周实验Doc)));
	return (C第十一周实验Doc*)m_pDocument;
}
#endif //_DEBUG


// C第十一周实验View 数据库支持
CRecordset* C第十一周实验View::OnGetRecordset()
{
	return m_pSet;
}



// C第十一周实验View 消息处理程序
