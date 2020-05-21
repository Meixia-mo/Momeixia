
// 第十一周实验Set.cpp : C第十一周实验Set 类的实现
//

#include "stdafx.h"
#include "第十一周实验.h"
#include "第十一周实验Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第十一周实验Set 实现

// 代码生成在 2020年5月21日, 22:08

IMPLEMENT_DYNAMIC(C第十一周实验Set, CRecordset)

C第十一周实验Set::C第十一周实验Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0.0;
	m_3 = L"";
	m_nFields = 4;
	m_nDefaultType = snapshot;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString C第十一周实验Set::GetDefaultConnect()
{
	return _T("DSN=数据库_学生信息表3;DBQ=D:\\\x684c\x9762\x6587\x4ef6\x5939\\\x4e71\x4e03\x516b\x7cdf\\Database2.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C第十一周实验Set::GetDefaultSQL()
{
	return _T("[学生信息表]");
}

void C第十一周实验Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[字段1]"), m_1);
	RFX_Double(pFX, _T("[字段2]"), m_2);
	RFX_Text(pFX, _T("[字段3]"), m_3);

}
/////////////////////////////////////////////////////////////////////////////
// C第十一周实验Set 诊断

#ifdef _DEBUG
void C第十一周实验Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C第十一周实验Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

