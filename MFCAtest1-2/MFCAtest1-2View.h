
// MFCAtest1-2View.h : CMFCAtest12View 类的接口
//

#pragma once


class CMFCAtest12View : public CView
{
protected: // 仅从序列化创建
	CMFCAtest12View();
	DECLARE_DYNCREATE(CMFCAtest12View)

// 特性
public:
	CMFCAtest12Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCAtest12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCAtest1-2View.cpp 中的调试版本
inline CMFCAtest12Doc* CMFCAtest12View::GetDocument() const
   { return reinterpret_cast<CMFCAtest12Doc*>(m_pDocument); }
#endif

