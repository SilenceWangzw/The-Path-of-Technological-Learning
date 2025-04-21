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




//三、长度不受限制的字符串函数
//1.strlen的使用和模拟实现
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




//2.strcpy的使用和模拟实现
//源字符串必须以\0结束
//会将源字符串末尾的\0一起拷贝到目标空间，目标空间必须可修改并且足够大
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//strcpy的模拟实现
//strcpy函数返回的是目标空间的起始地址
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	//记录起始地址
//	char* start = dest;
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	//将末尾的 \0 也拷贝过去
//	*dest = *src;
//	//返回目标空间的起始地址
//	return start;
//}
//改造版
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	//记录起始地址
//	char* start = dest;
//	while (*dest++ = *src++)//拷贝过去字符后，判断表达式的值，当\0拷贝后，判断为假
//	{
//		;
//	}
//
//	//返回目标空间的起始地址
//	return start;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	char* pstr = my_strcpy(arr2, arr1);
//	printf("%s\n", pstr);
//	return 0;
//}




//3.strcat的使用和模拟实现
//源字符串必须以\0结束，目标空间也得有\0，否则没办法知道从哪里开始追加
//目标空间必须足够大且可修改
//不要去自己给自己追加
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat的模拟实现
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	char* start = dest;
//	//找到目标空间的末尾\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//再将源字符串拷贝过去
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}




//4.strcmp的使用和模拟实现
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int ret = strcmp(arr1, arr2);
//	//如果arr1小于arr2，返回 <0 的数字
//	//等于则返回0
//	//大于则返回 >0 的数字
//	printf("%d\n", ret);
//	return 0;
//}


//strcmp的模拟实现
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("==\n");
//	}
//	return 0;
//}




//四、长度受限制的字符串函数
//1.strncpy函数的使用
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = { 0 };
//
//	//拷贝3个字符到arr2中
//	//如果要拷贝的字符串不够，则会追加\0
//	strncpy(arr2, arr1, 3);
//	printf("%s\n", arr2);
//
//	return 0;
//}


//2.strncat函数的使用
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "xxxxxxxx";
//
//	strncat(arr1, arr2, 3);//会在末尾追加一个\0
//
//	printf("%s\n", arr1);
//	return 0;
//}


//3.strncmp函数的使用
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "abcq";
//
//	int ret = strncmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}




//五、strtok函数
//例：192.168.110.123 -- 其中 . 就是分割符
//    wzw@year.net -- @ . 也是分割符
//strtok会找到分割符，将它改成\0，然后返回指向这个标记的指针
//strtok函数的第一个参数不为NULL，函数将找到目标空间中第一个标记，strtok函数将保存它的字符串中的位置
//strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//int main()
//{
//	char arr[] = "Silence@yeah.net";
//	char buf[256] = { 0 };
//	strcpy(buf, arr);
//
//	char sep[] = "@.";
//	char* ret = strtok(buf, sep);//Silence\0yeah.net
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);//Silence\0yeah\0net
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//	return 0;
//}


int main()
{
	char arr[] = "Silence@yeah.net";
	char buf[256] = { 0 };
	strcpy(buf, arr);

	char sep[] = "@.";
	
	char* ret = NULL;
	for (ret = strtok(buf, sep); ret != NULL; ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}

	return 0;
}