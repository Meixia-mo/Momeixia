
// UsingView.h : CUsingView 类的接口
//

#pragma once


class CUsingView : public CView
{
protected: // 仅从序列化创建
	CUsingView();
	DECLARE_DYNCREATE(CUsingView)

// 特性
public:
	CUsingDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CUsingView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingView.cpp 中的调试版本
inline CUsingDoc* CUsingView::GetDocument() const
   { return reinterpret_cast<CUsingDoc*>(m_pDocument); }
#endif

