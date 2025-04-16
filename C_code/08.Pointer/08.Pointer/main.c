#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、指针变量和地址
//1.取地址操作符
//int main()
//{
//	int a = 20;//变量创建的本质其实是在内存中申请空间
//	//向内存申请4个字节的空间，用来存放20这个数值
//	//这4个字节，每个字节都有编号（地址）
//	//变量的名字仅仅时给程序员看的，编译器不看名字，是通过地址找内存单元的
//
//	int* pa = &a;// & -- 取地址操作符，拿到变量a的地址，拿到的是第一个字节的地址
//	//pa是一个变量，这个变量是用来存放地址（指针）的
//	//pa也叫指针变量
//	//int*是pa的类型
//	//*表示pa是指针变量
//	//int表示pa指向的变量a的类型是int
//	return 0;
//}


//2.解引用操作符
//int main()
//{
//	int a = 20;
//	int* pa = &a;
//
//	*pa = 10;// * -- 解引用操作符（间接访问操作符）
//	printf("%d\n", a);
//	return 0;
//}


//3.指针变量的大小
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//指针变量是用来存放地址的，一个地址的存放需要多大空间呢，那么指针变量的大小就是多大
//	printf("%zd\n", sizeof(p));
//	//32位机器 -- 4个字节
//	//64位机器 -- 8个字节
//
//	return 0;
//}


//指针变量的大小和类型无关，只要指针类型的变量，在相同的平台下，大小都是相同的
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(int*));
//	return 0;
//}




//二、指针变量类型的意义
//1.指针的解引用
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}
//结论：指针的类型决定了对指针解引用的时候有多大的权限（一次能操作几个字节）


//2.指针+-整数
//int main()
//{
//	int a = 20;
//	int* pa = &a;
//	char* pc = &a;
//	printf("&a = %p\n", &a);
//	printf("pa = %p\n", pa);
//	printf("pc = %p\n", pc);
//
//	printf("&a+1 = %p\n", &a + 1);
//	printf("pa+1 = %p\n", pa + 1);
//	printf("pc+1 = %p\n", pc + 1);
//	return 0;
//}
//总结：指针的类型决定了指针向前或者向后走一步有多大（距离）
//int* pa;   pa+1 ---> pa+1*sizeof(int)
//			 pa+n ---> pa+n*sizeof(int)
//char* pc;  pc+1 ---> pc+1*sizeof(char)
//           pc+n ---> pc+n*sizeof(char)


//3.void*指针
//无具体类型的指针，这种类型的指针可以用来接受任意类型地址
//void*类型的指针变量不能直接进行解引用和+-操作
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//
//	void* pv1 = &a;//int*
//	void* pv2 = &ch;//char*
//
//	return 0;
//}
//一般void*类型的指针是使用在函数参数的部分，用来接收不同类型数据的地址
//这样的设计可以实现泛型编程的效果，使得一个函数来处理多种类型的数据




//三、const修饰指针
//1.const修饰变量
//const修饰变量的时候，叫常变量，这个被修饰的变量本质上还是变量，只是不能被修改
//int main()
//{
//	const int num = 100;
//	num = 200;//err
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	const int n = 10;
//	//C99之前不支持变长数组，数组的大小还是需要常量或常量表达式来指定的，不能是变量
//	int arr[n] = { 0 };//err，说明n本质上还是变量
//	return 0;
//}


//int main()
//{
//	const int n = 10;
//	int* p = &n;
//	*p = 20;//还是被修改了
//	printf("%d\n", n);
//	return 0;
//}


//2.const修饰指针变量
//一般来讲const修饰指针变量，可以放在*的左边，也可以放在*的右边，意义是不一样的
//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int* p = &n;
//	*p = 20;//ok
//
//	p = &m;//ok
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int const* p = &n;//const修饰指针变量，放在 * 左边限制的是*p（限制的是指针指向的内容，不能通过指针变量来修
//
//	*p = 20;//err
//
//	//但是指针变量本身是可以改变的
//	p = &m;//ok
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int* const p = &n;//const放在 * 右边，限制的是指针变量本身，指针不能改变它的指向
//	//但是可以通过指针变量修改它所指向的内容
//	*p = 20;//ok
//
//	p = &m;//err
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int const* const p = &n;//两边都有const，则都限制了
//	*p = 20;//err
//
//	p = &m;//err
//
//	return 0;
//}




//四、指针运算
//1.指针+-整数
//指针类型决定了指针+1的步长，决定了指针解引用的权限
//数组在内存中是连续存放的
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[sz - 1];
//	for (int i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", *p);
//		p--;
//	}
//	return 0;
//}


//2.指针-指针
//指针-指针的绝对值是指针和指针直接元素的个数
//计算的前提条件是两个指针指向的是同一块空间
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//练习：写一个函数求字符串的长度
//写法1：
//size_t my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t len = my_strlen(ch);
//	printf("%zd\n", len);
//	return 0;
//}


//写法2
//size_t my_strlen(char* p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t len = my_strlen(ch);
//	printf("%zd\n", len);
//	return 0;
//}
//指针+指针？ --> 没意义


//3.指针的关系运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	while (p < &arr[sz])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}




//五、野指针
//野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确的限制）
//1.野指针的成因
//①指针未初始化
//int main()
//{
//	//一个局部变量不初始化，它的值是随机的
//	int* p;//p是局部变量，但是没有初始化，其值是随机的，如果将p中的值当作地址，解引用操作就会非法访问
//	*p = 20;//err
//	return 0;
//}


//②指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = &arr[0];
//	for (int i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//③指针指向的空间释放
//int* test()
//{
//	int i = 100;
//	return &i;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}


//2.如何避免野指针
//①指针初始化
//如果明确知道指针指向哪里就直接赋值地址，如果不知道指针应该指向哪里，可以给指针赋值NULL
//int main()
//{
//	int a = 10;
//	int* p1 = &a;//给一个明确的地址
//
//	int* p2 = NULL;//没有明确的地址
//	*p2 = 100;//err
//
//	return 0;
//}


//②小心指针越界
//一个程序向内存申请了哪些空间，通过指针也就只能访问哪些空间，不能超出范围访问，超出了就是越界访问


//③指针变量不再使用时，及时置NULL，指针使用之前检查有效性
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 200;
//	}
//
//	return 0;
//}


//④避免返回局部变量的地址




//六、assert断言
//aeeset.h头文件定义了宏assert()，用于在运行时确保程序符合指定条件，如果不符合，就报错终止运行，这个宏常常被称为“断言”
//#include<assert.h>
//int main()
//{
//	int* p = NULL;
//	assert(p != NULL);
//
//	return 0;
//}




//七、指针的使用和传址调用
//1.strlen的模拟实现
//求字符串长度，参数p指向的字符串不期望被修改
//#include<assert.h>
//size_t my_strlen(char const* p)
//{
//	size_t count = 0;
//	assert(p != NULL);//检查指针p是否有效
//
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	size_t len = my_strlen(ch);
//	printf("%zd\n", len);
//	return 0;
//}


//2.传值调用和传址调用
//例：写一个函数交换两个整型变量的值
//当实参传递给形参的时候，形参时实参的一份临时拷贝，对形参的修改不影响实参
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap1(a, b);//传值调用
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}


//void Swap2(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap2(&a, &b);//传址调用
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}




//八、指针和数组相关的知识
//1.数组名的理解
//其实数组名是数组首元素的地址
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr = %p\n", arr);
//	return 0;
//}


//数组名是数组首元素地址，但是有两个例外
//①sizeof(数组名) -- 这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//②&数组名 -- 这里的数组名也表示整个数组，取出的是整个数组的地址
//除此之外，所有的数组名都是首元素的地址
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zd\n", sizeof(arr));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("&arr[0]   = %p\n", &arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0] + 1);
//
//	printf("arr       = %p\n", arr);
//	printf("arr+1     = %p\n", arr + 1);
//
//	printf("&arr      = %p\n", &arr);
//	printf("&arr+1    = %p\n", &arr + 1);
//	return 0;
//}


//2.使用指针访问数组
//写法1：
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//写法2：
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


//3.一维数组传参的本质
//数组传参的时候，形参可以写成数组，也可以写成指针
//写成数组的形式最简单，是为了方便理解，容易接受这种语法
//但是即使写成数组的形式，本质上还是指针
//void test(int arr[])
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);
//
//	test(arr);//arr是数组名，数组名表示数组首元素的地址
//	//数组传参的本质，传递的是数组首元素的地址
//	//所以形参即使写成数组的形式，本质上也是一个指针变量
//
//	return 0;
//}


//4.冒泡排序
//void bubble_sort(int* arr, int sz)
//{
//	//总共进行n-1趟排序
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设已经满足顺序
//		//每一趟排序内部比较
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//输入值
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//排序
//	bubble_sort(arr, sz);
//
//	//输入
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//5.二级指针
//二级指针是用来存放一级指针变量的地址
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;//pa是一级指针变量
//
//	int** ppa = &pa;//ppa就是二级指针变量
//	//int** 说明ppa是指针变量，指向的pa的类型是int*类型
//
//
//	printf("%d\n", **ppa);
//	return 0;
//}
//二级指针和二维数组没有对应关系


//6.指针数组
//存放指针的数组，数组的每个元素其实是指针类型
//int main()
//{
//	char arr1[10];//字符数组 --- 存放字符的数组
//	int arr2[5];//整型数组 --- 存放整型的数组
//
//	char* arr3[5];//指针数组 --- 存放字符指针的数组
//	int* arr4[6];//存放整型指针的数组
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* arr[3] = { &a,&b,&c };
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


//7.指针数组模拟二维数组
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//8.字符指针变量
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", *pc);
//
//	return 0;
//}


//int main()
//{
//	char const* p = "abcdef";//这里的赋值是将字符串中首字符的地址赋值给p
//	printf("%c\n", *p);
//	printf("%s\n", p);//使用%s打印字符串的时候，只需要提供首字符的地址就行
//
//	//*p = 'q';//err 常量字符串不能被修改
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	const char* str3 = "hello bit";
//	const char* str4 = "hello bit";
//
//	if (str1 == str2)//两个不同的数组
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	
//	if (str3 == str4)//内容相同的常量字符串只需要保存一份
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//9.数组指针变量
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int(*p)[10] = &arr;//p就是数组指针，p中存放的是数组的地址
//	
//	//arr -- int*             arr+1跳过4个字节
//	//&arr[0] -- int*         &arr[0]+1跳过4个字节
//	//&arr -- int(*)[10]	  &arr+1跳过40个字节
//
//	return 0;
//}


//int main()
//{
//	char* ch[5];
//
//	char (*pc)[5] = &ch;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//
//	//使用p这个数组指针访问arr数组的内容
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	return 0;
//}


//10.二维数组传参的本质
//二维数组的数组名也是数组首元素的地址
//二维数组可以理解为一维数组的数组
//二维数组的每一行可以看作是一个一维数组
//所以二维数组的首元素就是他第一行的地址
//void Print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Print2(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print1(arr, 3, 5);//将arr数组的内容打印出来
//	Print2(arr, 3, 5);//第一行是个一维数组，传过去的就是第一行这个一维数组的地址
//	return 0;
//}




//九、函数指针
//1.函数指针变量的创建与使用
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//整型指针变量
//	
//	int arr[5] = { 0 };
//	int (*parr)[5] = &arr;//parr是数组指针变量
//
//	// &函数名和函数名都是函数的地址，没有区别
//	int (*pf)(int, int) = &Add;
//
//	//通过指针调用函数
//	int ret = (*pf)(3, 5);
//	printf("%d\n", ret);
//
//	return 0;
//}


//2.typedef关键字
//typedef int* pint_t;
//int main()
//{
//	int* p1;
//	pint_t p2;
//	return 0;
//}


//typedef int(*parr_t)[6];
//int main()
//{
//	int arr[6] = { 0 };
//	int (*p)[6] = &arr;//p是数组指针
//	parr_t p2 = &arr;
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//typedef int(*pf_t)(int, int);
//int main()
//{
//	int(*pf)(int, int) = &Add;
//	pf_t pf2 = &Add;
//	return 0;
//}


//3.函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pf1)(int, int) = &Add;
//	int (*pf2)(int, int) = &Sub;
//	int (*pf3)(int, int) = &Mul;
//	int (*pf4)(int, int) = &Div;
//
//	//函数指针数组，来存放这些函数的地址
//	int(*pf[4])(int, int) = { &Add,&Sub,&Mul,&Div };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pf[i](6, 2);
//		printf("%d\n", ret);
//	}
//	return 0;
//}



//4.转移表
//实现一个计算器，完成整数的加减乘除
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("*******  1.add   2.sub  *****\n");
//	printf("*******  3.mul   4.div  *****\n");
//	printf("*******  0.exit         *****\n");
//	printf("*****************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x,&y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x,&y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x,&y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x,&y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//改造版
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("*******  1.add   2.sub  *****\n");
//	printf("*******  3.mul   4.div  *****\n");
//	printf("*******  0.exit         *****\n");
//	printf("*****************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//函数指针数组 -- 转移表
//	int(*pfArr[5])(int, int) = { 0, Add,Sub,Mul,Div };
//	//                           0   1   2   3   4
//	do
//	{
//		menu();
//		printf("请选择:> ");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:> ");
//			scanf("%d%d", &x, &y);
//
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//		}
//	} while (input);
//	return 0;
//}




//十、回调函数
//1.回调函数是什么
//回调函数就是一个通过函数指针调用的函数
//就是通过一个函数指针的地址，去调用这个函数，这个被调函数就叫回调函数
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*****************************\n");
	printf("*******  1.add   2.sub  *****\n");
	printf("*******  3.mul   4.div  *****\n");
	printf("*******  0.exit         *****\n");
	printf("*****************************\n");
}
void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数:> ");
	scanf("%d%d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}