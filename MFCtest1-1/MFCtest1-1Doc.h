
// MFCtest1-1Doc.h : CMFCtest11Doc ��Ľӿ�
//


#pragma once


class CMFCtest11Doc : public CDocument
{
protected: // �������л�����
	CMFCtest11Doc();
	DECLARE_DYNCREATE(CMFCtest11Doc)

// ����
public:

// ����
public:
	CRect rc;
	bool set;

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFCtest11Doc();
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
