
// test15-1View.h : Ctest151View 类的接口
//

#pragma once


class Ctest151View : public CView
{
protected: // 仅从序列化创建
	Ctest151View();
	DECLARE_DYNCREATE(Ctest151View)

// 特性
public:
	Ctest151Doc* GetDocument() const;

// 操作
public:
	CString path;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest151View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileSaveAs();
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // test15-1View.cpp 中的调试版本
inline Ctest151Doc* Ctest151View::GetDocument() const
   { return reinterpret_cast<Ctest151Doc*>(m_pDocument); }
#endif

