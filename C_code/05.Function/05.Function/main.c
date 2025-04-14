#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//一、函数的概念
//C语言中的函数就是一个完成某项特定任务的一小段代码
//C语言的程序其实是由无数个小的函数组合而成的




//二、自定义函数
//例：写一个加法函数，完成两个整型变量的加法操作
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);//调用函数
//	printf("%d\n", sum);
//	return 0;
//}


//void print(void)
//{
//	printf("Hello World\n");
//}
//int main()
//{
//	print();
//	return 0;
//}




//三、形参和实参
//在调用函数的时候，真实传递给函数的参数，叫实际参数，简称实参
//在函数定义部分，函数名后面的参数叫形式参数，简称形参
//形参是实参的一份临时拷贝
//int Add(int x, int y)//形参
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);//形参
//	printf("%d\n", sum);
//	return 0;
//}




//四、return语句
//return 后面可以是一个数值，也可以是一个表达式，如果是表达式则先执行表达式再返回表达式的结果
//return后面也可以什么都没有，直接写return，这种写法适合函数返回类型为void的
//return的返回值和函数的返回类型不一致，系统会自动将返回的值隐式转换为函数的返回类型
//return 语句执行后，函数就彻底返回，后面的代码不再执行
//如果函数中存在if等分支语句，则要每种情况下都有return返回，否则会出现编译错误

//void test()
//{
//	printf("hehe\n");
//	if (1)
//		return;
//	printf("haha\n");
//}
//int main()
//{
//	test();
//	return 0;
//}


//int test()
//{
//	return 3.14;//会自动转换为函数类型
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}


//错误的示范
//int test()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a)
//		return 1;
//}
//int main()
//{
//	int r = test();
//	return 0;
//}


//函数的返回类型如果没写，编译器认为返回的是int类型的值
//如果函数要求返回值，但是函数中没有使用return返回值，那具体返回什么就不确定
//test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}




//五、数组做函数的参数
//1.数组在传参的时候，实参就写数组名就行，形参也是数组的形式。
//2.实参和形参的名字是可以一样的，也可以不一样
//3.函数在设计的时候，一定要尽量功能单一
//4.数组在传参的时候，形参的数组和形参的数组是同一个数组
//例：写一个函数将一个整型数组的内容全部置为-1，再写一个函数打印数组的内容
//void set_arr(int arr[], int sz, int set)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	set_arr(arr, sz, -1);
//	print_arr(arr, sz);
//	return 0;
//}


//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//打印二维数组的内容
//	print(arr, 3, 5);
//	return 0;
//}




//六、嵌套调用和链式访问
//嵌套调用就是函数直接的互相调用
//例：假设我们计算某年某月有多少天
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//}
//int get_days_of_month(int year, int month)
//{
//	int days[] = { 0,31,28,30,31,30,31,30,31,30,31,30,31 };
//	int day = days[month];
//	if (is_leap_year(year) == 1 && month == 2)
//	{
//		day++;//闰年的2月是29天
//	}
//	return day;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d%d", &year, &month);
//	int day = get_days_of_month(year, month);
//	printf("%d\n", day);
//	return 0;
//}


//所谓链式访问就是将一个函数的返回值作为另一个函数的参数
//int main()
//{
//	printf("%zu\n", strlen("abcdef"));
//
//	return 0;
//}


//printf函数返回的是打印字符的个数
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	printf("%d ", printf("%d ", printf("%d ", 43)));//43 3 2
//	return 0;
//}




//七、函数的声明和定义
//1.单个文件
//函数或者变量都要满足先声明后使用
//int is_leap_year(int);//函数的声明
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))//函数调用
//	{
//		printf("%d 是闰年\n", year);
//	}
//	else
//	{
//		printf("%d 不是闰年\n", year);
//	}
//	return 0;
//}
////函数的定义
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


//2.多个文件
//把大型复杂的文件，拆分成多个文件的好处
//方便团队写作
//代码模块化，逻辑更加清晰
//代码的隐藏
//#include"add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int r = Add(a, b);
//	printf("%d\n", r);
//	return 0;
//}


//static和extern
//extern是用来声明外部符号的
//作用域：局部变量的作用域是变量所在的局部范围，全局变量的作用域是整个工程
//int main()
//{
//	{
//		int a = 100;
//	}
//	printf("%d\n", a);//err
//	return 0;
//}


//int a = 100;
//int main()
//{
//	{
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}


//生命周期：变量的创建（申请内存）到变量的销毁（回收内存）之间的一个时间段
//int main()
//{
//	{
//		int a = 100;//创建
//		printf("%d\n", a);
//	}
//	//销毁
//
//	return 0;
//}


//static和extern
//static修饰局部变量
//void test()
//{
//	static int a = 1;//其实编译器在编译代码的时候，就为静态变量分配了地址，而不是进入函数创建
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}


//static修饰全局变量
//全局变量默认是带有外部链接属性
//static修饰全局变量时，改变了全局变量的链接属性
//使得外部链接属性变成了内部的链接属性
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}




//static修饰函数
//函数也是具有外部链接属性，只要在其他的.c文件中正确的声明也是可以直接使用的
//static修饰函数，让函数的外部链接属性变成内部链接属性，使得函数只能在自己所在的.c文件中使用其他.c文件中无法使用
//extern int Add(int, int);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}