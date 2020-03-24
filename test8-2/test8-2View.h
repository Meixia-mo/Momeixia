
// test8-2View.h : Ctest82View 类的接口
//

#pragma once


class Ctest82View : public CView
{
protected: // 仅从序列化创建
	Ctest82View();
	DECLARE_DYNCREATE(Ctest82View)

// 特性
public:
	Ctest82Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Ctest82View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // test8-2View.cpp 中的调试版本
inline Ctest82Doc* Ctest82View::GetDocument() const
   { return reinterpret_cast<Ctest82Doc*>(m_pDocument); }
#endif

