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
W32D_API int GetInt(int n) 
{
	int i = 1;
	int sum = 1;
	for (i = 1; i <= n; i++) {
		sum = sum*i;
	}
	return sum;
}
// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� w32D.h

FAC1::FAC1()
{
    return;
}
float FAC1::convert(float deg) {
	float result = deg / 180;
	return result;
}
