#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ��ָ������͵�ַ
//1.ȡ��ַ������
//int main()
//{
//	int a = 20;//���������ı�����ʵ�����ڴ�������ռ�
//	//���ڴ�����4���ֽڵĿռ䣬�������20�����ֵ
//	//��4���ֽڣ�ÿ���ֽڶ��б�ţ���ַ��
//	//���������ֽ���ʱ������Ա���ģ��������������֣���ͨ����ַ���ڴ浥Ԫ��
//
//	int* pa = &a;// & -- ȡ��ַ���������õ�����a�ĵ�ַ���õ����ǵ�һ���ֽڵĵ�ַ
//	//pa��һ�����������������������ŵ�ַ��ָ�룩��
//	//paҲ��ָ�����
//	//int*��pa������
//	//*��ʾpa��ָ�����
//	//int��ʾpaָ��ı���a��������int
//	return 0;
//}


//2.�����ò�����
//int main()
//{
//	int a = 20;
//	int* pa = &a;
//
//	*pa = 10;// * -- �����ò���������ӷ��ʲ�������
//	printf("%d\n", a);
//	return 0;
//}


//3.ָ������Ĵ�С
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//ָ�������������ŵ�ַ�ģ�һ����ַ�Ĵ����Ҫ���ռ��أ���ôָ������Ĵ�С���Ƕ��
//	printf("%zd\n", sizeof(p));
//	//32λ���� -- 4���ֽ�
//	//64λ���� -- 8���ֽ�
//
//	return 0;
//}


//ָ������Ĵ�С�������޹أ�ֻҪָ�����͵ı���������ͬ��ƽ̨�£���С������ͬ��
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(int*));
//	return 0;
//}




//����ָ��������͵�����
//1.ָ��Ľ�����
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
//���ۣ�ָ������;����˶�ָ������õ�ʱ���ж���Ȩ�ޣ�һ���ܲ��������ֽڣ�


//2.ָ��+-����
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
//�ܽ᣺ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩
//int* pa;   pa+1 ---> pa+1*sizeof(int)
//			 pa+n ---> pa+n*sizeof(int)
//char* pc;  pc+1 ---> pc+1*sizeof(char)
//           pc+n ---> pc+n*sizeof(char)


//3.void*ָ��
//�޾������͵�ָ�룬�������͵�ָ��������������������͵�ַ
//void*���͵�ָ���������ֱ�ӽ��н����ú�+-����
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
//һ��void*���͵�ָ����ʹ���ں��������Ĳ��֣��������ղ�ͬ�������ݵĵ�ַ
//��������ƿ���ʵ�ַ��ͱ�̵�Ч����ʹ��һ������������������͵�����




//����const����ָ��
//1.const���α���
//const���α�����ʱ�򣬽г���������������εı��������ϻ��Ǳ�����ֻ�ǲ��ܱ��޸�
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
//	//C99֮ǰ��֧�ֱ䳤���飬����Ĵ�С������Ҫ�����������ʽ��ָ���ģ������Ǳ���
//	int arr[n] = { 0 };//err��˵��n�����ϻ��Ǳ���
//	return 0;
//}


//int main()
//{
//	const int n = 10;
//	int* p = &n;
//	*p = 20;//���Ǳ��޸���
//	printf("%d\n", n);
//	return 0;
//}


//2.const����ָ�����
//һ������const����ָ����������Է���*����ߣ�Ҳ���Է���*���ұߣ������ǲ�һ����
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
//	int const* p = &n;//const����ָ����������� * ������Ƶ���*p�����Ƶ���ָ��ָ������ݣ�����ͨ��ָ���������
//
//	*p = 20;//err
//
//	//����ָ����������ǿ��Ըı��
//	p = &m;//ok
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int m = 100;
//
//	int* const p = &n;//const���� * �ұߣ����Ƶ���ָ���������ָ�벻�ܸı�����ָ��
//	//���ǿ���ͨ��ָ������޸�����ָ�������
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
//	int const* const p = &n;//���߶���const����������
//	*p = 20;//err
//
//	p = &m;//err
//
//	return 0;
//}




//�ġ�ָ������
//1.ָ��+-����
//ָ�����;�����ָ��+1�Ĳ�����������ָ������õ�Ȩ��
//�������ڴ�����������ŵ�
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


//2.ָ��-ָ��
//ָ��-ָ��ľ���ֵ��ָ���ָ��ֱ��Ԫ�صĸ���
//�����ǰ������������ָ��ָ�����ͬһ��ռ�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//��ϰ��дһ���������ַ����ĳ���
//д��1��
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


//д��2
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
//ָ��+ָ�룿 --> û����


//3.ָ��Ĺ�ϵ����
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




//�塢Ұָ��
//Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ�����ƣ�
//1.Ұָ��ĳ���
//��ָ��δ��ʼ��
//int main()
//{
//	//һ���ֲ���������ʼ��������ֵ�������
//	int* p;//p�Ǿֲ�����������û�г�ʼ������ֵ������ģ������p�е�ֵ������ַ�������ò����ͻ�Ƿ�����
//	*p = 20;//err
//	return 0;
//}


//��ָ��Խ�����
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


//��ָ��ָ��Ŀռ��ͷ�
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


//2.��α���Ұָ��
//��ָ���ʼ��
//�����ȷ֪��ָ��ָ�������ֱ�Ӹ�ֵ��ַ�������֪��ָ��Ӧ��ָ��������Ը�ָ�븳ֵNULL
//int main()
//{
//	int a = 10;
//	int* p1 = &a;//��һ����ȷ�ĵ�ַ
//
//	int* p2 = NULL;//û����ȷ�ĵ�ַ
//	*p2 = 100;//err
//
//	return 0;
//}


//��С��ָ��Խ��
//һ���������ڴ���������Щ�ռ䣬ͨ��ָ��Ҳ��ֻ�ܷ�����Щ�ռ䣬���ܳ�����Χ���ʣ������˾���Խ�����


//��ָ���������ʹ��ʱ����ʱ��NULL��ָ��ʹ��֮ǰ�����Ч��
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


//�ܱ��ⷵ�ؾֲ������ĵ�ַ




//����assert����
//aeeset.hͷ�ļ������˺�assert()������������ʱȷ���������ָ����������������ϣ��ͱ�����ֹ���У�����곣������Ϊ�����ԡ�
//#include<assert.h>
//int main()
//{
//	int* p = NULL;
//	assert(p != NULL);
//
//	return 0;
//}




//�ߡ�ָ���ʹ�úʹ�ַ����
//1.strlen��ģ��ʵ��
//���ַ������ȣ�����pָ����ַ������������޸�
//#include<assert.h>
//size_t my_strlen(char const* p)
//{
//	size_t count = 0;
//	assert(p != NULL);//���ָ��p�Ƿ���Ч
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


//2.��ֵ���úʹ�ַ����
//����дһ�����������������ͱ�����ֵ
//��ʵ�δ��ݸ��βε�ʱ���β�ʱʵ�ε�һ����ʱ���������βε��޸Ĳ�Ӱ��ʵ��
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
//	printf("����ǰa=%d,b=%d\n", a, b);
//	Swap1(a, b);//��ֵ����
//	printf("������a=%d,b=%d\n", a, b);
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
//	printf("����ǰa=%d,b=%d\n", a, b);
//	Swap2(&a, &b);//��ַ����
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}




//�ˡ�ָ���������ص�֪ʶ
//1.�����������
//��ʵ��������������Ԫ�صĵ�ַ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr = %p\n", arr);
//	return 0;
//}


//��������������Ԫ�ص�ַ����������������
//��sizeof(������) -- �������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//��&������ -- �����������Ҳ��ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���е�������������Ԫ�صĵ�ַ
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


//2.ʹ��ָ���������
//д��1��
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//д��2��
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


//3.һά���鴫�εı���
//���鴫�ε�ʱ���βο���д�����飬Ҳ����д��ָ��
//д���������ʽ��򵥣���Ϊ�˷�����⣬���׽��������﷨
//���Ǽ�ʹд���������ʽ�������ϻ���ָ��
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
//	test(arr);//arr������������������ʾ������Ԫ�صĵ�ַ
//	//���鴫�εı��ʣ����ݵ���������Ԫ�صĵ�ַ
//	//�����βμ�ʹд���������ʽ��������Ҳ��һ��ָ�����
//
//	return 0;
//}


//4.ð������
//void bubble_sort(int* arr, int sz)
//{
//	//�ܹ�����n-1������
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//�����Ѿ�����˳��
//		//ÿһ�������ڲ��Ƚ�
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
//	//����ֵ
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//����
//	bubble_sort(arr, sz);
//
//	//����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//5.����ָ��
//����ָ�����������һ��ָ������ĵ�ַ
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;//pa��һ��ָ�����
//
//	int** ppa = &pa;//ppa���Ƕ���ָ�����
//	//int** ˵��ppa��ָ�������ָ���pa��������int*����
//
//
//	printf("%d\n", **ppa);
//	return 0;
//}
//����ָ��Ͷ�ά����û�ж�Ӧ��ϵ


//6.ָ������
//���ָ������飬�����ÿ��Ԫ����ʵ��ָ������
//int main()
//{
//	char arr1[10];//�ַ����� --- ����ַ�������
//	int arr2[5];//�������� --- ������͵�����
//
//	char* arr3[5];//ָ������ --- ����ַ�ָ�������
//	int* arr4[6];//�������ָ�������
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


//7.ָ������ģ���ά����
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


//8.�ַ�ָ�����
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
//	char const* p = "abcdef";//����ĸ�ֵ�ǽ��ַ��������ַ��ĵ�ַ��ֵ��p
//	printf("%c\n", *p);
//	printf("%s\n", p);//ʹ��%s��ӡ�ַ�����ʱ��ֻ��Ҫ�ṩ���ַ��ĵ�ַ����
//
//	//*p = 'q';//err �����ַ������ܱ��޸�
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	const char* str3 = "hello bit";
//	const char* str4 = "hello bit";
//
//	if (str1 == str2)//������ͬ������
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	
//	if (str3 == str4)//������ͬ�ĳ����ַ���ֻ��Ҫ����һ��
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//9.����ָ�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int(*p)[10] = &arr;//p��������ָ�룬p�д�ŵ�������ĵ�ַ
//	
//	//arr -- int*             arr+1����4���ֽ�
//	//&arr[0] -- int*         &arr[0]+1����4���ֽ�
//	//&arr -- int(*)[10]	  &arr+1����40���ֽ�
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
//	//ʹ��p�������ָ�����arr���������
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	return 0;
//}


//10.��ά���鴫�εı���
//��ά�����������Ҳ��������Ԫ�صĵ�ַ
//��ά����������Ϊһά���������
//��ά�����ÿһ�п��Կ�����һ��һά����
//���Զ�ά�������Ԫ�ؾ�������һ�еĵ�ַ
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
//	Print1(arr, 3, 5);//��arr��������ݴ�ӡ����
//	Print2(arr, 3, 5);//��һ���Ǹ�һά���飬����ȥ�ľ��ǵ�һ�����һά����ĵ�ַ
//	return 0;
//}




//�š�����ָ��
//1.����ָ������Ĵ�����ʹ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//����ָ�����
//	
//	int arr[5] = { 0 };
//	int (*parr)[5] = &arr;//parr������ָ�����
//
//	// &�������ͺ��������Ǻ����ĵ�ַ��û������
//	int (*pf)(int, int) = &Add;
//
//	//ͨ��ָ����ú���
//	int ret = (*pf)(3, 5);
//	printf("%d\n", ret);
//
//	return 0;
//}


//2.typedef�ؼ���
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
//	int (*p)[6] = &arr;//p������ָ��
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


//3.����ָ������
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
//	//����ָ�����飬�������Щ�����ĵ�ַ
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



//4.ת�Ʊ�
//ʵ��һ������������������ļӼ��˳�
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x,&y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x,&y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x,&y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x,&y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//�����
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
//	//����ָ������ -- ת�Ʊ�
//	int(*pfArr[5])(int, int) = { 0, Add,Sub,Mul,Div };
//	//                           0   1   2   3   4
//	do
//	{
//		menu();
//		printf("��ѡ��:> ");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:> ");
//			scanf("%d%d", &x, &y);
//
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//	} while (input);
//	return 0;
//}




//ʮ���ص�����
//1.�ص�������ʲô
//�ص���������һ��ͨ������ָ����õĺ���
//����ͨ��һ������ָ��ĵ�ַ��ȥ�������������������������ͽлص�����
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
	printf("����������������:> ");
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
		printf("��ѡ��:>");
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
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}