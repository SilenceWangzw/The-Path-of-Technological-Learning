#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//һ�������ĸ���
//C�����еĺ�������һ�����ĳ���ض������һС�δ���
//C���Եĳ�����ʵ����������С�ĺ�����϶��ɵ�




//�����Զ��庯��
//����дһ���ӷ�����������������ͱ����ļӷ�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);//���ú���
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




//�����βκ�ʵ��
//�ڵ��ú�����ʱ����ʵ���ݸ������Ĳ�������ʵ�ʲ��������ʵ��
//�ں������岿�֣�����������Ĳ�������ʽ����������β�
//�β���ʵ�ε�һ����ʱ����
//int Add(int x, int y)//�β�
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);//�β�
//	printf("%d\n", sum);
//	return 0;
//}




//�ġ�return���
//return ���������һ����ֵ��Ҳ������һ�����ʽ������Ǳ��ʽ����ִ�б��ʽ�ٷ��ر��ʽ�Ľ��
//return����Ҳ����ʲô��û�У�ֱ��дreturn������д���ʺϺ�����������Ϊvoid��
//return�ķ���ֵ�ͺ����ķ������Ͳ�һ�£�ϵͳ���Զ������ص�ֵ��ʽת��Ϊ�����ķ�������
//return ���ִ�к󣬺����ͳ��׷��أ�����Ĵ��벻��ִ��
//��������д���if�ȷ�֧��䣬��Ҫÿ������¶���return���أ��������ֱ������

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
//	return 3.14;//���Զ�ת��Ϊ��������
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}


//�����ʾ��
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


//�����ķ����������ûд����������Ϊ���ص���int���͵�ֵ
//�������Ҫ�󷵻�ֵ�����Ǻ�����û��ʹ��return����ֵ���Ǿ��巵��ʲô�Ͳ�ȷ��
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




//�塢�����������Ĳ���
//1.�����ڴ��ε�ʱ��ʵ�ξ�д���������У��β�Ҳ���������ʽ��
//2.ʵ�κ��βε������ǿ���һ���ģ�Ҳ���Բ�һ��
//3.��������Ƶ�ʱ��һ��Ҫ�������ܵ�һ
//4.�����ڴ��ε�ʱ���βε�������βε�������ͬһ������
//����дһ��������һ���������������ȫ����Ϊ-1����дһ��������ӡ���������
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
//	//��ӡ��ά���������
//	print(arr, 3, 5);
//	return 0;
//}




//����Ƕ�׵��ú���ʽ����
//Ƕ�׵��þ��Ǻ���ֱ�ӵĻ������
//�����������Ǽ���ĳ��ĳ���ж�����
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
//		day++;//�����2����29��
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


//��ν��ʽ���ʾ��ǽ�һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	printf("%zu\n", strlen("abcdef"));
//
//	return 0;
//}


//printf�������ص��Ǵ�ӡ�ַ��ĸ���
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	printf("%d ", printf("%d ", printf("%d ", 43)));//43 3 2
//	return 0;
//}




//�ߡ������������Ͷ���
//1.�����ļ�
//�������߱�����Ҫ������������ʹ��
//int is_leap_year(int);//����������
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))//��������
//	{
//		printf("%d ������\n", year);
//	}
//	else
//	{
//		printf("%d ��������\n", year);
//	}
//	return 0;
//}
////�����Ķ���
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


//2.����ļ�
//�Ѵ��͸��ӵ��ļ�����ֳɶ���ļ��ĺô�
//�����Ŷ�д��
//����ģ�黯���߼���������
//���������
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


//static��extern
//extern�����������ⲿ���ŵ�
//�����򣺾ֲ��������������Ǳ������ڵľֲ���Χ��ȫ�ֱ���������������������
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


//�������ڣ������Ĵ����������ڴ棩�����������٣������ڴ棩֮���һ��ʱ���
//int main()
//{
//	{
//		int a = 100;//����
//		printf("%d\n", a);
//	}
//	//����
//
//	return 0;
//}


//static��extern
//static���ξֲ�����
//void test()
//{
//	static int a = 1;//��ʵ�������ڱ�������ʱ�򣬾�Ϊ��̬���������˵�ַ�������ǽ��뺯������
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


//static����ȫ�ֱ���
//ȫ�ֱ���Ĭ���Ǵ����ⲿ��������
//static����ȫ�ֱ���ʱ���ı���ȫ�ֱ�������������
//ʹ���ⲿ�������Ա�����ڲ�����������
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}




//static���κ���
//����Ҳ�Ǿ����ⲿ�������ԣ�ֻҪ��������.c�ļ�����ȷ������Ҳ�ǿ���ֱ��ʹ�õ�
//static���κ������ú������ⲿ�������Ա���ڲ��������ԣ�ʹ�ú���ֻ�����Լ����ڵ�.c�ļ���ʹ������.c�ļ����޷�ʹ��
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