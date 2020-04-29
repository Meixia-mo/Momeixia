
// test12-4View.h : Ctest124View 类的接口
//

#pragma once


class Ctest124View : public CView
{
protected: // 仅从序列化创建
	Ctest124View();
	DECLARE_DYNCREATE(Ctest124View)

// 特性
public:
	Ctest124Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest124View();
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
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // test12-4View.cpp 中的调试版本
inline Ctest124Doc* Ctest124View::GetDocument() const
   { return reinterpret_cast<Ctest124Doc*>(m_pDocument); }
#endif

