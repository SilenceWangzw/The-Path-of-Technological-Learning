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




//�������Ȳ������Ƶ��ַ�������
//1.strlen��ʹ�ú�ģ��ʵ��
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




//2.strcpy��ʹ�ú�ģ��ʵ��
//Դ�ַ���������\0����
//�ὫԴ�ַ���ĩβ��\0һ�𿽱���Ŀ��ռ䣬Ŀ��ռ������޸Ĳ����㹻��
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//strcpy��ģ��ʵ��
//strcpy�������ص���Ŀ��ռ����ʼ��ַ
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	//��¼��ʼ��ַ
//	char* start = dest;
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	//��ĩβ�� \0 Ҳ������ȥ
//	*dest = *src;
//	//����Ŀ��ռ����ʼ��ַ
//	return start;
//}
//�����
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	//��¼��ʼ��ַ
//	char* start = dest;
//	while (*dest++ = *src++)//������ȥ�ַ����жϱ��ʽ��ֵ����\0�������ж�Ϊ��
//	{
//		;
//	}
//
//	//����Ŀ��ռ����ʼ��ַ
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




//3.strcat��ʹ�ú�ģ��ʵ��
//Դ�ַ���������\0������Ŀ��ռ�Ҳ����\0������û�취֪�������￪ʼ׷��
//Ŀ��ռ�����㹻���ҿ��޸�
//��Ҫȥ�Լ����Լ�׷��
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat��ģ��ʵ��
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	char* start = dest;
//	//�ҵ�Ŀ��ռ��ĩβ\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//�ٽ�Դ�ַ���������ȥ
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




//4.strcmp��ʹ�ú�ģ��ʵ��
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abq";
//	int ret = strcmp(arr1, arr2);
//	//���arr1С��arr2������ <0 ������
//	//�����򷵻�0
//	//�����򷵻� >0 ������
//	printf("%d\n", ret);
//	return 0;
//}


//strcmp��ģ��ʵ��
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




//�ġ����������Ƶ��ַ�������
//1.strncpy������ʹ��
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = { 0 };
//
//	//����3���ַ���arr2��
//	//���Ҫ�������ַ������������׷��\0
//	strncpy(arr2, arr1, 3);
//	printf("%s\n", arr2);
//
//	return 0;
//}


//2.strncat������ʹ��
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "xxxxxxxx";
//
//	strncat(arr1, arr2, 3);//����ĩβ׷��һ��\0
//
//	printf("%s\n", arr1);
//	return 0;
//}


//3.strncmp������ʹ��
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




//�塢strtok����
//����192.168.110.123 -- ���� . ���Ƿָ��
//    wzw@year.net -- @ . Ҳ�Ƿָ��
//strtok���ҵ��ָ���������ĳ�\0��Ȼ�󷵻�ָ�������ǵ�ָ��
//strtok�����ĵ�һ��������ΪNULL���������ҵ�Ŀ��ռ��е�һ����ǣ�strtok���������������ַ����е�λ��
//strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
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


//int main()
//{
//	char arr[] = "Silence@yeah.net";
//	char buf[256] = { 0 };
//	strcpy(buf, arr);
//
//	char sep[] = "@.";
//	
//	char* ret = NULL;
//	for (ret = strtok(buf, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}




//����strstr��ʹ�ú�ģ��ʵ��
//strstr��������һ���ַ�������һ���ַ����Ƿ���ֹ�
//����ҵ��ˣ��ͷ��ص�һ�γ��ֵ���ʼ��ַ������Ҳ������ͷ��ؿ�ָ��
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char* p = "efab";
//
//	char* ret = strstr(arr, p);
//	if (ret == NULL)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//efabcdef
//	}
//	return 0;
//}


//strstr��ģ��ʵ��
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cur = str1;
//
//	//������� -- str2ָ����ǿ��ַ�����ֱ�ӷ���str1
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//
//	while (*cur != '\0')
//	{
//		s1 = cur;
//		s2 = str2;
//
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char* p = "efab";
//
//	const char* ret = my_strstr(arr, p);
//	if (ret == NULL)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//efabcdef
//	}
//	return 0;
//}




//�ߡ�strerror������ʹ��
//�ڲ�ͬ��ϵͳ��C���Ա�׼���ʵ���ж��涨��һЩ�����룬һ���Ƿ���errno.h���ͷ�ļ���˵����
//C���Գ���������ʱ��ͻ�ʹ��һ��ȫ�ֵı���errno����¼����ǰ�Ĵ�����
//��������ʹ�ñ�׼���еĺ�����ʱ������ĳ�ִ��󣬾ͻὫ��Ӧ�Ĵ���������errno��
//strerror�����Ϳ��Խ������Ӧ�Ĵ�����Ϣ�ַ����ĵ�ַ����
//#include<errno.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d %s\n", i, strerror(i));
//	}
//	return 0;
//}


//#include<errno.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");//�Զ��ļ�����ʽ���ļ�������ļ������ڣ��ʹ�ʧ��
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ�ܣ�ԭ���ǣ�%s\n", strerror(errno));
//		return 1;
//	}
//	return 0;
//}


//ע������perror�ǽ�error�д�����Ϣ��ӡ����
#include<errno.h>
int main()
{
	//���ļ�
	FILE* pf = fopen("data.txt", "r");//�Զ��ļ�����ʽ���ļ�������ļ������ڣ��ʹ�ʧ��
	if (pf == NULL)
	{
		printf("���ļ�ʧ�ܣ�ԭ����: %s\n", strerror(errno));
		//perror = printf + strerror
		perror("���ļ�ʧ�ܣ�ԭ����");
		return 1;
	}
	return 0;
}