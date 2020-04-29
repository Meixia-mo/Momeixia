
// test11-4View.h : Ctest114View 类的接口
//

#pragma once


class Ctest114View : public CView
{
protected: // 仅从序列化创建
	Ctest114View();
	DECLARE_DYNCREATE(Ctest114View)

// 特性
public:
	Ctest114Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest114View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test11-4View.cpp 中的调试版本
inline Ctest114Doc* Ctest114View::GetDocument() const
   { return reinterpret_cast<Ctest114Doc*>(m_pDocument); }
#endif

