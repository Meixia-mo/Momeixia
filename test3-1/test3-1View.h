
// test3-1View.h : Ctest31View 类的接口
//

#pragma once


class Ctest31View : public CView
{
protected: // 仅从序列化创建
	Ctest31View();
	DECLARE_DYNCREATE(Ctest31View)

// 特性
public:
	Ctest31Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest31View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test3-1View.cpp 中的调试版本
inline Ctest31Doc* Ctest31View::GetDocument() const
   { return reinterpret_cast<Ctest31Doc*>(m_pDocument); }
#endif

