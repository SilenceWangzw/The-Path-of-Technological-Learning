#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、递归是什么
//函数自己调用自己就是递归
//递归是少量的代码，完成大量复杂的运算
//int main()
//{
//	printf("hehe\n");
//	main();//死递归 -- 这是一个错误的示范
//	return 0;
//}
//如果递归无限的递归下去，就会出现Stack_overflow(栈溢出)
//每一次函数调用都要为这次函数调用分配内存空间
//而分配的空间是从内存的栈区上分配的，如果无限的递归调用函数，就会将栈区空间填满，这时就出现了栈溢出的现象




//二、递归举例
//1.求n的阶乘
//int Fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n > 0) {
//		return n * Fact(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//	return 0;
//}


//2.输入一个正数m，按照顺序打印它的每一位
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}




//三、递归与迭代
//迭代通常就是循环的方式
//int Fact(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//	return 0;
//}


//例：求第n个斐波那契数列
//int Fib(n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//非递归方式
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//
//	int c = 1;//如果不进入循环，直接返回1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//一个错误的例子 -- 递归层次太深
//即使满足递归的条件，有时候也会出问题
//void test(int n)
//{
//	printf("%d ", n);
//	if (n <= 10000)//层次太深，导致栈溢出
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}