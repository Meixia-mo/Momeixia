
// test13-4View.h : Ctest134View 类的接口
//

#pragma once


class Ctest134View : public CView
{
protected: // 仅从序列化创建
	Ctest134View();
	DECLARE_DYNCREATE(Ctest134View)

// 特性
public:
	Ctest134Doc* GetDocument() const;

// 操作
public:
	CRect rc;
	bool set;
	bool flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest134View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnAddcolor();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // test13-4View.cpp 中的调试版本
inline Ctest134Doc* Ctest134View::GetDocument() const
   { return reinterpret_cast<Ctest134Doc*>(m_pDocument); }
#endif

