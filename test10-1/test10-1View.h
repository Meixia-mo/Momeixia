
// test10-1View.h : Ctest101View 类的接口
//

#pragma once


class Ctest101View : public CView
{
protected: // 仅从序列化创建
	Ctest101View();
	DECLARE_DYNCREATE(Ctest101View)

// 特性
public:
	Ctest101Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest101View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // test10-1View.cpp 中的调试版本
inline Ctest101Doc* Ctest101View::GetDocument() const
   { return reinterpret_cast<Ctest101Doc*>(m_pDocument); }
#endif

