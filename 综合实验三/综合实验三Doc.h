
// �ۺ�ʵ����Doc.h : C�ۺ�ʵ����Doc ��Ľӿ�
//


#pragma once
#include "�ۺ�ʵ����Set.h"


class C�ۺ�ʵ����Doc : public CDocument
{
protected: // �������л�����
	C�ۺ�ʵ����Doc();
	DECLARE_DYNCREATE(C�ۺ�ʵ����Doc)

// ����
public:
	C�ۺ�ʵ����Set m_�ۺ�ʵ����Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~C�ۺ�ʵ����Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
