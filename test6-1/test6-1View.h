
// test6-1View.h : Ctest61View 类的接口
//

#pragma once


class Ctest61View : public CView
{
protected: // 仅从序列化创建
	Ctest61View();
	DECLARE_DYNCREATE(Ctest61View)

// 特性
public:
	Ctest61Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest61View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test6-1View.cpp 中的调试版本
inline Ctest61Doc* Ctest61View::GetDocument() const
   { return reinterpret_cast<Ctest61Doc*>(m_pDocument); }
#endif

