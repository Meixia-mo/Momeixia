
// test11-3View.h : Ctest113View 类的接口
//

#pragma once


class Ctest113View : public CView
{
protected: // 仅从序列化创建
	Ctest113View();
	DECLARE_DYNCREATE(Ctest113View)

// 特性
public:
	Ctest113Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest113View();
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

#ifndef _DEBUG  // test11-3View.cpp 中的调试版本
inline Ctest113Doc* Ctest113View::GetDocument() const
   { return reinterpret_cast<Ctest113Doc*>(m_pDocument); }
#endif

