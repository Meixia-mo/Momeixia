
// test11-2View.h : Ctest112View 类的接口
//

#pragma once


class Ctest112View : public CView
{
protected: // 仅从序列化创建
	Ctest112View();
	DECLARE_DYNCREATE(Ctest112View)

// 特性
public:
	Ctest112Doc* GetDocument() const;

// 操作
public:
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest112View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test11-2View.cpp 中的调试版本
inline Ctest112Doc* Ctest112View::GetDocument() const
   { return reinterpret_cast<Ctest112Doc*>(m_pDocument); }
#endif

