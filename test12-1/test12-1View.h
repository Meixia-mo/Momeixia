
// test12-1View.h : Ctest121View 类的接口
//

#pragma once


class Ctest121View : public CView
{
protected: // 仅从序列化创建
	Ctest121View();
	DECLARE_DYNCREATE(Ctest121View)

// 特性
public:
	Ctest121Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest121View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test12-1View.cpp 中的调试版本
inline Ctest121Doc* Ctest121View::GetDocument() const
   { return reinterpret_cast<Ctest121Doc*>(m_pDocument); }
#endif

