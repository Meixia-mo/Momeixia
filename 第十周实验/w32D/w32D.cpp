// w32D.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "w32D.h"


// 这是导出变量的一个示例
W32D_API int nw32D=0;

// 这是导出函数的一个示例。
W32D_API int fnw32D(void)
{
    return 42;
}
W32D_API int GetInt() 
{
	return 2020;
}
// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 w32D.h
Cw32D::Cw32D()
{
    return;
}
