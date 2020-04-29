
// test10-3View.h : Ctest103View 类的接口
//

#pragma once


class Ctest103View : public CView
{
protected: // 仅从序列化创建
	Ctest103View();
	DECLARE_DYNCREATE(Ctest103View)

// 特性
public:
	Ctest103Doc* GetDocument() const;

// 操作
public:
	CString s;


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest103View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // test10-3View.cpp 中的调试版本
inline Ctest103Doc* Ctest103View::GetDocument() const
   { return reinterpret_cast<Ctest103Doc*>(m_pDocument); }
#endif

