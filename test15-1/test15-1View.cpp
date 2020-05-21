
// test15-1View.cpp : Ctest151View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "test15-1.h"
#endif

#include "test15-1Doc.h"
#include "test15-1View.h"

#include "fstream"
#include "string"
#include "iostream"
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest151View

IMPLEMENT_DYNCREATE(Ctest151View, CView)

BEGIN_MESSAGE_MAP(Ctest151View, CView)
	ON_COMMAND(ID_FILE_SAVE_AS, &Ctest151View::OnFileSaveAs)
	ON_COMMAND(ID_FILE_OPEN, &Ctest151View::OnFileOpen)
END_MESSAGE_MAP()

// Ctest151View 构造/析构

Ctest151View::Ctest151View()
{
	// TODO: 在此处添加构造代码

}

Ctest151View::~Ctest151View()
{
}

BOOL Ctest151View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest151View 绘制

void Ctest151View::OnDraw(CDC* /*pDC*/)
{
	Ctest151Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest151View 诊断

#ifdef _DEBUG
void Ctest151View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest151View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest151Doc* Ctest151View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest151Doc)));
	return (Ctest151Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest151View 消息处理程序


void Ctest151View::OnFileSaveAs()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK) {
		//CString filename = cfd.GetPathName();//取得文件路径
		ofstream ofs(cfd.GetPathName());
		//CString s = cfd.GetPathName();
		ofs << CT2A(path.GetString()) << endl;

	}
}


void Ctest151View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	if (r == IDOK) {
		CString filename = cfd.GetPathName();//取得文件路径
		ifstream ifs(filename);
		string s;
		path = filename;
		/*CClientDC dc(this);
		int x = 20, y = 10;
		while (ifs >> s) {
			dc.TextOutW(x, y, CString(s.c_str()));
			y += 30;
		}*/
	}
}
