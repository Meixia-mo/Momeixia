// w32D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "w32D.h"


// ���ǵ���������һ��ʾ��
W32D_API int nw32D=0;

// ���ǵ���������һ��ʾ����
W32D_API int fnw32D(void)
{
    return 42;
}
W32D_API int GetInt() 
{
	return 2020;
}
// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� w32D.h
Cw32D::Cw32D()
{
    return;
}
