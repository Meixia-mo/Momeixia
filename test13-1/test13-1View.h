
// test13-1View.h : Ctest131View 类的接口
//

#pragma once


class Ctest131View : public CView
{
protected: // 仅从序列化创建
	Ctest131View();
	DECLARE_DYNCREATE(Ctest131View)

// 特性
public:
	Ctest131Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest131View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCountnumber();
};

#ifndef _DEBUG  // test13-1View.cpp 中的调试版本
inline Ctest131Doc* Ctest131View::GetDocument() const
   { return reinterpret_cast<Ctest131Doc*>(m_pDocument); }
#endif

