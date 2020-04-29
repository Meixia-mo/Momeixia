
// test13-3View.h : Ctest133View 类的接口
//

#pragma once


class Ctest133View : public CView
{
protected: // 仅从序列化创建
	Ctest133View();
	DECLARE_DYNCREATE(Ctest133View)

// 特性
public:
	Ctest133Doc* GetDocument() const;
// 操作
public:
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest133View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
	afx_msg void OnBnClickedOk();
};

#ifndef _DEBUG  // test13-3View.cpp 中的调试版本
inline Ctest133Doc* Ctest133View::GetDocument() const
   { return reinterpret_cast<Ctest133Doc*>(m_pDocument); }
#endif

