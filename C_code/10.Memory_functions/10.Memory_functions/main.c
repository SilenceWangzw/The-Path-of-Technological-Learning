#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

//һ��memcpy��ʹ�ú�ģ��ʵ��
//memcpy -- �ڴ濽��
//�����������\0������ͣ����
//C���Ա�׼�涨��memcpyֻҪ��ʵ�ֲ��ص��Ŀ������У��ص��Ľ���memmove
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//��arr1�е�3 4 5 6 7 ������arr2��
//	memcpy(arr2, arr1 + 2, 20);
//	return 0;
//}


//ģ��ʵ��
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
//	//��arr1�е�3 4 5 6 7 ������arr2��
//	my_memcpy(arr2, arr1 + 2, 20);
//	return 0;
//}




//����memmove��ʹ�ú�ģ��ʵ��
//memmove -- �ڴ��ƶ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	return 0;
//}


//ģ��ʵ��
//void my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//��ǰ���
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			src = (char*)src + 1;
//			dest = (char*)dest + 1;
//		}
//	}
//	//�Ӻ���ǰ
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




//����memset������ʹ��
//memset -- �ڴ�����
//memset�����������ڴ�ģ����ڴ��е�ֵ���ֽ�Ϊ��λ���ó���Ҫ������
//int main()
//{
//	char arr[] = "hello world\n";
//	memset(arr + 6, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}




//�ġ�memcmp������ʹ��
//memcmp -- �ڴ�Ƚ�
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
	int arr2[] = { 1,2,3,6,5 };
	//01 00 00 00 02 00 00 00 03 00 00 00 06 00 00 00 05 00 00 00
	int ret = memcmp(arr1, arr2, 12);
	//���arr1����arr2���᷵��>0,С�ڷ���<0,���ڷ���=0
	printf("%d\n", ret);
	return 0;
}