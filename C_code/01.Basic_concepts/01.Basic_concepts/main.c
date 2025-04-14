#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//一、第一个C语言程序
//int main()
//{
//	printf("Hello World\n");
//	return 0;
//}




//二、main函数（主函数）
//1.概念
//每个C语言代码不管有多少行，都是从main函数开始，main函数是程序的入口
//main函数前面的int表示函数执行结束的时候会返回一个整型类型的值，所以在最后写return 0; 正好前后呼应


//2.main函数的多种写法
//①古老的写法 -- 不推荐
//void main()
//{
//
//}


//②只是参数部分多了void，这里的void表示main函数没有参数
//int main(void)
//{
//	return 0;
//}


//③其实main函数可以有参数，他的参数都是有特殊意义的，如果想使用main函数的参数那就写上，如果不想使用就不写
//暂时不需要了解main函数的参数
//int main(int argc, char* argv[])
//{
//	return 0;
//}




//三、printf函数
//printf函数的使用需要包含stdio.h头文件
//std -- standard -- 标准
//i -- input -- 输入
//o -- output -- 输出
//int main()
//{
//	printf("%d\n", 100);//%d -- 打印整数
//	printf("%c\n", 'q');//%c -- 打印字符，单引号括起来的叫字符
//	printf("%f\n", 3.14);//%f -- 打印小数，默认小数点后打印6位
//	printf("%s\n", "Hello World");//%s -- 打印字符串，双引号括起来的叫字符串
//	return 0;
//}




//四、字符和ASCII编码
//C语言中放在单引号中的都是字符
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//	return 0;
//}


//将ASCII码对应的所有字符打印在屏幕上
//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//	}
//	return 0;
//}




//五、字符串和\0
//使用双引号括起来的一串字符就被称为字符串
//字符串的打印格式可以用%s来指定
//int main()
//{
//	printf("%s\n", "hello c");
//	printf("hello c");
//	return 0;
//}


//字符串可以存在字符数组中
//int main()
//{
//	char arr1[] = { 'a','b','c' };//arr1中没有\0
//	char arr2[] = "abc";//arr2中含有\0
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//int main()
//{
//	char arr1[] = { 'a','b','c','\0' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//strlen是一个库函数 -- 求字符串长度，统计字符串中\0之前的字符个数
//使用strlen需要包含头文件string.h
//strlen返回的值是size_t类型的，应该使用%zd
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//	printf("%zd\n", strlen(arr1));//6
//	printf("%zd\n", strlen(arr2));//随机值
//	return 0;
//}




//六、转义字符
//转义字符顾名思义：就是转变原来意思的字符
//int main()
//{
//	printf("abc\ndef");//  \n -- 换行
//	return 0;
//}


//在支持三字母词的编译器上
// ??) --> ]
// ??( --> [
//int main()
//{
//	printf("(are you ok??)");// (are you ok]
//	printf("(are you ok\?\?)");//防止被解析为三字母词
//	return 0;
//}


//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 'b');
//
//	//打印单引号
//	printf("%c\n", '\'');
//	return 0;
//}


//int main()
//{
//	printf("c:test\bit");
//	printf("\n");
//	printf("c:\\test\\bit");
//	return 0;
//}


//int main()
//{
//	printf("abcbdef\n");
//	printf("abc\bdef\n"); //  \b -- 光标回退一个字符，但不删除字符
//	return 0;
//}


//int main()
//{
//	printf("a\tbc\tdef");// \t -- 按照8个字符对齐，如果不够8个字符，就用空格补齐
//	return 0;
//}


// \ddd --- d d d表示1~3个八进制的数字
//int main()
//{
//	printf("%c\n", '\130');//八进制130 --> 十进制88 --> 88对应的ASCII码为X
//	printf("%c\n", '\77');//八进制77-- > 十进制63-- > 63对应的ACSII码为？
//	return 0;
//}


// \xdd -- d d表示两个十六进制数字
//int main()
//{
//	printf("%c\n", '\x36');// 十六进制36 --> 十进制54 --> 54对应的ASCII码为字符6
//	return 0;
//}


//练习题
//int main()
//{
//	printf("%zd\n", strlen("c:\test\bit\114\test.c")); //16
//	printf("%zd\n", strlen("c:\test\bit\118\test.c")); //17
//	return 0;
//}




//七、语句和语句分类
//1.空语句
//int main()
//{
//	;//空语句
//	return 0;
//}
//空语句一般出现的地方是：这里需要一条语句，但是这个语句不需要做任何事，就可以写一个空语句


//2.表达式语句
//在表达式的后面加上分号就是表达式语句
//int main()
//{
//	int a = 10;
//	int b = 0;
//	b = a + 10;//表达式语句
//	return 0;
//}


//3.函数调用语句
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//4.复合语句
//复合语句就是一个代码块，成对括号中的代码就构成一个代码块
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 10 - i;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//5.控制语句
//C语言是一种结构化的程序设计语言
//顺序结构
//选择结构：if、switch
//循环结构：for、while、do while




//八、注释
//注释是对代码的说明，编译器会忽略注释
//注释是给程序员自己，或者其他程序员看的
//注释有两种形式
//1. /* */ -- 多行注释(不可嵌套使用)
//int main()
//{
//	/*
//		int a = 10;
//		printf("%d", a);
//	*/
//
//	return 0;
//}


//2. // -- 单行注释
//int main()
//{
//	//int a = 10;
//	//printf("%d\n", a);
//	return 0;
//}
//注释在编译时会被替换成空格