#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<assert.h>

//һ���ַ����ຯ��
//C��������һϵ�еĺ�����ר�����ַ�����ģ�Ҳ����һ���ַ�������ʲô���͵��ַ�
//ʹ����Щ��������Ҫ����ͷ�ļ�ctype.h
//����дһ�����룬���ַ����е�Сд��ĸת�ɴ�д�������ַ�����
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




//�����ַ�ת������
//C�����ṩ�������ַ�ת������
//tolower:����������ȥ�Ĵ�д�ַ�תСд
//toupper:����������ȥ��Сд�ַ�ת��д
//int main()
//{
//	char ch = toupper('a');
//	printf("%c\n", ch);
//
//	ch = tolower('A');
//	printf("%c\n", ch);
//	return 0;
//}




//����strlen��ʹ�ú�ģ��ʵ��
//strlen����һ���ַ������ȣ�ͳ��\0ǰ����ֵ��ַ�����
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
//�����������ڣ��������޷������ͽ��м����ʱ�򣬽�������޷�������


//ģ��ʵ��
//����1��������
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
//����2��ָ�� - ָ��
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
//����3���ݹ�
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




//�ġ�strcpy��ʹ�ú�ģ��ʵ��
//Դ�ַ���������\0����
//�ὫԴ�ַ���ĩβ��\0һ�𿽱���Ŀ��ռ䣬Ŀ��ռ������޸Ĳ����㹻��
int main()
{
	char arr1[] = "hello world";
	char arr2[20] = { 0 };
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}