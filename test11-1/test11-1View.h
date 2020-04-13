
// test11-1View.h : Ctest111View 类的接口
//

#pragma once


class Ctest111View : public CView
{
protected: // 仅从序列化创建
	Ctest111View();
	DECLARE_DYNCREATE(Ctest111View)

// 特性
public:
	Ctest111Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest111View();
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

#ifndef _DEBUG  // test11-1View.cpp 中的调试版本
inline Ctest111Doc* Ctest111View::GetDocument() const
   { return reinterpret_cast<Ctest111Doc*>(m_pDocument); }
#endif

