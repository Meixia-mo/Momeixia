
// 综合实验四View.cpp : C综合实验四View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "综合实验四.h"
#endif

#include "综合实验四Set.h"
#include "综合实验四Doc.h"
#include "综合实验四View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验四View

IMPLEMENT_DYNCREATE(C综合实验四View, CRecordView)

BEGIN_MESSAGE_MAP(C综合实验四View, CRecordView)
END_MESSAGE_MAP()

// C综合实验四View 构造/析构

C综合实验四View::C综合实验四View()
	: CRecordView(IDD_MY_FORM)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C综合实验四View::~C综合实验四View()
{
}

void C综合实验四View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
}

BOOL C综合实验四View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C综合实验四View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_综合实验四Set;
	CRecordView::OnInitialUpdate();

}


// C综合实验四View 诊断

#ifdef _DEBUG
void C综合实验四View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C综合实验四View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C综合实验四Doc* C综合实验四View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C综合实验四Doc)));
	return (C综合实验四Doc*)m_pDocument;
}
#endif //_DEBUG


// C综合实验四View 数据库支持
CRecordset* C综合实验四View::OnGetRecordset()
{
	return m_pSet;
}



// C综合实验四View 消息处理程序
