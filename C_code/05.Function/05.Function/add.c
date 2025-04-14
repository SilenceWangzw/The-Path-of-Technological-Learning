#define _CRT_SECURE_NO_WARNINGS
//int Add(int x, int y)
//{
//	return x + y;
//}




//static修饰全局变量时，改变了全局变量的链接属性
//使得外部链接属性变成了内部的链接属性
//这种变量只能在自己所在的.c文件中使用，其他.c文件无法使用
//static int g_val = 2024;




static int Add(int x, int y)
{
	return x + y;
}