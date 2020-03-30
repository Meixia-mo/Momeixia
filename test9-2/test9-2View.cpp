
// test9-2View.cpp : Ctest92View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Ctest92View 构造/析构

Ctest92View::Ctest92View()
{
	// TODO: 在此处添加构造代码

}

Ctest92View::~Ctest92View()
{
}

BOOL Ctest92View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Ctest92View 绘制

void Ctest92View::OnDraw(CDC* /*pDC*/)
{
	Ctest92Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Ctest92View 诊断

#ifdef _DEBUG
void Ctest92View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest92View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest92Doc* Ctest92View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest92Doc)));
	return (Ctest92Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest92View 消息处理程序


void Ctest92View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CImage img;
	CRect rc;
	GetClientRect(&rc);
	int h, w, sx, sy;
	if (r == IDOK) {
		CString filename = cfd.GetPathName();//取得文件路径
		img.Load(filename);//加载图片
		float rc_ratio = 1.0*rc.right / rc.bottom;
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		//img.Draw(dc.m_hDC, (rc.right - img.GetWidth()) / 2, (rc.bottom - img.GetHeight()) / 2, img.GetWidth(), img.GetHeight());//居中显示图片
		//dc.TextOutW((rc.right - img.GetWidth()) / 2, (rc.bottom - img.GetHeight()) / 2 + img.GetHeight(), filename);//显示图片路径
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
		img.Draw(dc.m_hDC,sx,sy, w, h);//按比例缩放居中显示图片
	}
}
