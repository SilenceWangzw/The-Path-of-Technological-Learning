#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<assert.h>

//一、字符分类函数
//C语言中有一系列的函数是专门做字符分类的，也就是一个字符是属于什么类型的字符
//使用这些函数都需要包含头文件ctype.h
//例：写一个代码，将字符串中的小写字母转成大写，其他字符不变
//int main()
//{
//	char arr[] = "I am a Student";
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = arr[i] - 32;
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}




//二、字符转换函数
//C语言提供了两个字符转换函数
//tolower:将参数传进去的大写字符转小写
//toupper:将参数传进去的小写字符转大写
//int main()
//{
//	char ch = toupper('a');
//	printf("%c\n", ch);
//
//	ch = tolower('A');
//	printf("%c\n", ch);
//	return 0;
//}




//三、strlen的使用和模拟实现
//strlen是求一个字符串长度，统计\0前面出现的字符个数
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=");
//	}
//	return 0;
//}
//结果会输出大于，当两个无符号整型进行计算的时候，结果还是无符号整型


//模拟实现
//方法1：计数器
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//方法2：指针 - 指针
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	char* start = str;
//	char* tail = str;
//	while (*tail != '\0')
//	{
//		tail++;
//	}
//	return tail - start;
//}
//方法3：递归
//size_t my_strlen(char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}




//四、strcpy的使用和模拟实现
//源字符串必须以\0结束
//会将源字符串末尾的\0一起拷贝到目标空间，目标空间必须可修改并且足够大
int main()
{
	char arr1[] = "hello world";
	char arr2[20] = { 0 };
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}