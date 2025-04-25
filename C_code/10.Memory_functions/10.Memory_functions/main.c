#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

//一、memcpy的使用和模拟实现
//memcpy -- 内存拷贝
//这个函数遇到\0并不会停下来
//C语言标准规定，memcpy只要能实现不重叠的拷贝就行，重叠的交给memmove
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//将arr1中的3 4 5 6 7 拷贝到arr2中
//	memcpy(arr2, arr1 + 2, 20);
//	return 0;
//}


//模拟实现
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	int i = 0;
//	void* ret = dest;
//	assert(src && dest);
//	for (i = 0; i < num; i++)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//将arr1中的3 4 5 6 7 拷贝到arr2中
//	my_memcpy(arr2, arr1 + 2, 20);
//	return 0;
//}




//二、memmove的使用和模拟实现
//memmove -- 内存移动
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	return 0;
//}


//模拟实现
//void my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//从前向后
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			src = (char*)src + 1;
//			dest = (char*)dest + 1;
//		}
//	}
//	//从后向前
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	return 0;
//}




//三、memset函数的使用
//memset -- 内存设置
//memset是用来设置内存的，将内存中的值以字节为单位设置成想要的内容
//int main()
//{
//	char arr[] = "hello world\n";
//	memset(arr + 6, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}




//四、memcmp函数的使用
//memcmp -- 内存比较
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
	int arr2[] = { 1,2,3,6,5 };
	//01 00 00 00 02 00 00 00 03 00 00 00 06 00 00 00 05 00 00 00
	int ret = memcmp(arr1, arr2, 12);
	//如果arr1大于arr2，会返回>0,小于返回<0,等于返回=0
	printf("%d\n", ret);
	return 0;
}