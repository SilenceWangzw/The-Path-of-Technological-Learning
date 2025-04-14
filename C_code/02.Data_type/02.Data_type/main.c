#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、数据类型介绍
//生活中有各种各样的数据，编程是为了解决生活中的问题
//计算机语言来写代码 -- 得有能力描述生活中的问题
//编译器只有知道了数据的类型，才知道怎么操作数据
//C语言把类型分为两类
//1.内置类型（C语言本身就具有的）：字符型、整型、浮点型、布尔类型
//2.自定义类型（自己创造的）：数组、结构体、枚举、联合体


//布尔类型 -- 用来表示真假
//使用布尔类型要引用头文件stdbool.h
//C语言中规定0表示假，非0表示真
//#include<stdbool.h>
//int main()
//{
//	_Bool flag1 = true;//写法1
//	bool flag2 = false;//写法2
//	if (flag1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//各种数据类型的长度
//每一种数据类型都有自己的长度，使用不同的数据类型，能够创建出长度不同的变量
//变量的长度不同，存储的数据范围就有所差异
//sizeof是一个关键字，也是操作符，用来计算操作数的类型长度的，单位是字节
//sizeof操作符的操作数可以是类型，也可以是变量或者表达式
//int main()
//{
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}
//C语言标准规定：sizeof(long) >= sizeof(int)


//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);//里面放的是表达式或变量，括号可省略，类型不能省略括号
//	return 0;
//}


//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%zd\n", sizeof(s = b + 1));//sizeof中如果放的是表达式，表达式不会真实计算
//	printf("%d\n", s);
//	return 0;
//}




//二、signed和unsigned
//C语言中使用signed和unsigned关键字修饰字符型和整型的
//signed关键字：表示一个类型带有正负号，包含负值
//unsigned关键字：表示该类型不带有正负号，只能表示零和正整数
//int main()
//{
//	//signed int --- 有符号的int
//	signed int num1 = 100;
//	num1 = -200;
//
//	//unsigned int --- 无符号的int
//	unsigned int num2 = 100;
//	num2 = 1000;
//	return 0;
//}
//char到底是有符号还是无符号呢？这个不确定，是取决于编译器的实现
//大部分编译器上 char == signed char


//int == signed int
//对于有符号的整数打印应该使用%d
//对于无符号整数的打印应该使用%u
//int main()
//{
//	int num = -100;
//	printf("%d\n", num);
//	return 0;
//}




//三、变量
//1.变量的创建
//int main()
//{
//	unsigned int age;//整型变量
//	char ch;//字符变量
//	float score;//单精度浮点型变量
//	double weight;//双精度浮点型变量
//	return 0;
//}



//2.变量的初始化
//创建变量的同时赋值，就叫做给变量初始化
//如果未初始化，里面存放的是随机值
//int main()
//{
//	unsigned int age = 10;
//	age = 20;//赋值
//	printf("%u\n", age);
//
//	char ch = 'q';
//	printf("%c\n", ch);
//
//	float score = 3.14f;//如果不加f，默认是double类型
//	printf("%f\n", score);
//
//	double weight = 4.5;
//	printf("%lf\n", weight);
//
//	return 0;
//}


//3.变量的分类
//全局变量：在大括号外部定义的变量就是全局变量
//局部变量：在大括号内部定义的变量就是局部变量
//int num = 100;//全局变量
//int main()
//{
//	int num = 10;//局部变量
//	printf("%d\n", num);
//	return 0;
//}
//注：当局部变量和全局变量名字相同，局部变量优先使用




//四、算术操作符
//操作符也叫运算符
// +  -  *  /  %
//int main()
//{
//	printf("%d\n", 33 + 42);//  + 称为操作符，33和42称为操作数，分别为左操作数和右操作数，所以 + 也是双目操作符
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	printf("%d\n", a + 23);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 33 - 42);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a - b);
//	printf("%d\n", a - 23);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 5 * 5);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a * b);
//	return 0;
//}


//int main()
//{
//	//除号的两端如果是整数，得到的也是整数
//	printf("%d\n", 9 / 3);
//	printf("%d\n", 9 / 4);
//	printf("%d\n", 10 / 4);
//
//	//除号两端至少有一个小数，得到的就是小数
//	printf("%f\n", 10 / 4.0);
//	printf("%f\n", 10.0 / 4);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 10 % 3);
//	int n = 0;
//	if (n % 2 == 0)
//	{
//		printf("偶数\n");
//	}
//	return 0;
//}
//注：取模运算符操作数不能是小数


//负数求模的规则：结果的正负号由第一个运算数的正负号决定
//int main()
//{
//	printf("%d\n", 11 % -5);//1
//	printf("%d\n", -11 % -5);//-1
//	printf("%d\n", -11 % 5);//-1
//	return 0;
//}




//五、赋值操作符
//int main()
//{
//	int a = 0;//初始化
//	a = 10;//赋值,  = 是赋值操作符
//	return 0;
//}


//1.连续赋值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;//连续赋值，从右向左依次赋值 --- 不推荐使用
//	return 0;
//}


//2.复合赋值
// +=  -=  *=  /=  %=
//int main()
//{
//	int a = 0;
//	a += 10;// 等价于 a = a + 10;
//	printf("%d\n", a);
//	return 0;
//}




//六、单目操作符
// ++  --  +(正号)  -(负号)
//int main()
//{
//	int a = 5;
//	a++;
//	printf("%d\n", a);//6
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = ++a;//前置++  ---  先++后使用
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a++;//后置++  ---  先使用后++
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", +10);//10
//	printf("%d\n", a);//10
//	printf("%d\n", -a);//-10
//	return 0;
//}




//七、强制类型转换
//int main()
//{
//	int a = (int)3.14; //将3.14强制转换成int类型，保留整数部分，小数部分丢弃
//	printf("%d\n", a);
//
//	return 0;
//}




//八、printf和scanf函数
//1.printf
//print -- 打印     f -- format -- 格式
//int main()
//{
//	printf("Hello World\n");
//	printf("abc\ndef");
//	return 0;
//}


//占位符
//printf()可以在输出文本中指定占位符
//所谓占位符，就是这个位置可以用其他值代入
//%d -- 十进制整数
//int main()
//{
//	printf("There are %d apples\n", 3);
//	return 0;
//}


//%s -- 代表的是一个字符串
//int main()
//{
//	printf("%s will come tonight\n", "lisi");
//	printf("%s will come tonight\n", "wangwu");
//	return 0;
//}


//多个占位符
//int main()
//{
//	printf("%s says it is %d o'clock\n", "lisi", 10);
//	printf("%s says it is %d o'clock\n", "cuihua", 10);
//	return 0;
//}
//printf()参数与占位符是一一对应的


//%c -- 打印字符
//int main()
//{
//	printf("this is %c\n", 'A');
//	return 0;
//}


//int main()
//{
//	printf("%hd\n", 100);//%hd -- 十进制短整型
//	printf("%ho\n", 100);//%ho -- 八进制短整型
//	printf("%x\n", 15);//%x -- 十六进制
//}


//限定宽度
//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);//%5d -- 最少输出5位，不够则补空格，默认向右对齐
//	printf("%5d\n", 123456);//指的是最小宽度，超过就直接打印
//	printf("%-5d\n", 123);//左对齐
//	return 0;
//}


// %f和%lf在打印的时候，小数点后默认是打印6位
//int main()
//{
//	printf("%lf\n", 123.45);
//	printf("%12lf\n", 123.45);
//	return 0;
//}


//限定正负号
//int main()
//{
//	printf("%d\n", 123);//+123
//	printf("%d\n", -123);//-123
//
//	printf("%+d\n", 123);
//	printf("%+d\n", -123);
//	return 0;
//}


//限定小数点位
//int main()
//{
//	printf("%.2lf\n", 123.45);// %.2lf -- 打印两位
//	printf("%.3lf\n", 123.45);
//	printf("%.1lf\n", 123.45);
//	return 0;
//}


//结合使用
//int main()
//{
//	printf("%12.1lf\n", 123.45); //%12.1lf -- 占12位，小数点后保留1位
//	printf("%*.*lf\n", 12, 1, 123.45);//写法2
//	return 0;
//}


//输出部分字符串
//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("%.3s\n", "abcdef");//打印前3个字符
//	return 0;
//}


//2.scanf
//int main()
//{
//	int score = 0;
//	printf("请输入成绩:> ");
//	//& -- 取地址操作符
//	scanf("%d", &score);//输入操作。scanf函数中，占位符的后面的参数需要的是地址
//	printf("成绩是:%d\n", score);
//	return 0;
//}


//输入多组数据
//scanf处理占位符时，会自动过滤空白字符，包括空格、制表符、换行符等
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f1 = 0.0;
//	float f2 = 0.0;
//
//	scanf("%d %d %f %f", &a, &b, &f1, &f2);
//	printf("%d %d %f %f\n", a, b, f1, f2);
//	return 0;
//}


//int main()
//{
//	int x;
//	float y;
//
//	//用户输入  -13.45e12# 0
//	scanf("%d", &x);//-13
//	printf("%d\n", x);
//	scanf("%f", &y);//0.45e12  --  浮点数在内存中可能无法精确保存
//	printf("%f\n", y);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}


//scanf的返回值是一个整数，表示成功读取变量个数
//如果没有读取任何项，或者匹配失败，则返回0
//如果在读取任何数据之前，发生了读取错误或者遇到读取读取到文件结尾，则返回常量EOF(-1)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int ret = scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	printf("%d\n", ret);
//	return 0;
//}


//除了%c以外，都会自动忽略起首的空白字符,%c不忽略空白字符
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);//如果在%c前面加上空格，就会跳过空白字符
//	printf("xxxx%cyyyy\n", ch);
//	return 0;
//}


//%s -- 它的规则是，从当前第一个非空白字符开始读起，直到遇到空白字符
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);//arr是数组名，数组名是地址
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr[5] = { 0 };
//	scanf("%4s", arr);//打印4个，后面的字符将被丢弃
//	printf("%s\n", arr);
//	return 0;
//}


//赋值忽略符
//只要把*加在任何占位符百分号的后面，该占位符就不会返回值，解析后将被丢弃
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d-%d-%d", &year, &month, &day);
//	printf("%d %d %d\n", year, month, day);
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//	printf("%d %d %d\n", year, month, day);
//	return 0;
//}