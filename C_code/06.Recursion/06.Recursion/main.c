#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ���ݹ���ʲô
//�����Լ������Լ����ǵݹ�
//�ݹ��������Ĵ��룬��ɴ������ӵ�����
//int main()
//{
//	printf("hehe\n");
//	main();//���ݹ� -- ����һ�������ʾ��
//	return 0;
//}
//����ݹ����޵ĵݹ���ȥ���ͻ����Stack_overflow(ջ���)
//ÿһ�κ������ö�ҪΪ��κ������÷����ڴ�ռ�
//������Ŀռ��Ǵ��ڴ��ջ���Ϸ���ģ�������޵ĵݹ���ú������ͻὫջ���ռ���������ʱ�ͳ�����ջ���������




//�����ݹ����
//1.��n�Ľ׳�
//int Fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n > 0) {
//		return n * Fact(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//	return 0;
//}


//2.����һ������m������˳���ӡ����ÿһλ
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}




//�����ݹ������
//����ͨ������ѭ���ķ�ʽ
//int Fact(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//	return 0;
//}


//�������n��쳲���������
//int Fib(n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//�ǵݹ鷽ʽ
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//
//	int c = 1;//���������ѭ����ֱ�ӷ���1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//һ����������� -- �ݹ���̫��
//��ʹ����ݹ����������ʱ��Ҳ�������
//void test(int n)
//{
//	printf("%d ", n);
//	if (n <= 10000)//���̫�����ջ���
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}