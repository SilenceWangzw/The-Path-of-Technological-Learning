#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//C������һ�Žṹ�����ԣ��ṹָ����˳��ṹ��ѡ��ṹ��ѭ���ṹ
//һ��if���
//int main()
//{
//	int num = 10;
//	if (num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//��������һ���������ж��Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�жϺ����
//	if (num % 2 != 0)
//	{
//		printf("%d������\n", num);
//	}
//	else
//	{
//		printf("%d��ż��\n", num);
//	}
//	return 0;
//}


//��������һ�����䣬�ж��Ƿ����
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//	}
//	return 0;
//}


//Ƕ��if
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("�����ֵ��0\n");
//	}
//	else
//	{
//		if (num > 0)
//		{
//			printf("�����ֵ������\n");
//		}
//		else {
//			printf("�����ֵ�Ǹ���\n");
//		}
//		
//	}
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (age >= 18 && age <= 44)
//	{
//		printf("����\n");
//	}
//	else if (age >= 45 && age <= 59)
//	{
//		printf("������\n");
//	}
//	else if (age >= 60 && age <= 89)
//	{
//		printf("����\n");
//	}
//	else if (age >= 90)
//	{
//		printf("������\n");
//	}
//	return 0;
//}




//������ϵ������
//C�������ڱȽϵı��ʽ����Ϊ��ϵ���ʽ������ʹ�õ�������ͳ�Ϊ��ϵ�����
// >  <  >=  <=  ==  !=
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//ע������ == �� =
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a == b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//��ϵ���ʽ�ķ���ֵ��1��0
//int main()
//{
//	int a = (3 == 5);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//��һ��������һ�������Ƚ���ȵ�ʱ��Ӧ����ôд�أ�
//	//���齫��������==����ߣ�Ϊ�˷�ֹ��==д��=����
//	int a = 4;
//	if (5 == a)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//�����ϵ����������
//int main()
//{
//	int a = 3;
//	int b = 7;
//	int c = 4;
//	//����д��
//	if (a < b < c)
//	{
//		printf("hehe\n");
//	}
//
//	//��ȷд��
//	if (a < b && b < c)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//��������һ�����䣬���������18~36��֮�䣬�������
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//	{
//		printf("����\n");
//	}
//	return 0;
//}




//��������������
//����������Ҳ����Ŀ������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	
//	b = a > 5 ? 3 : -3;
//	printf("%d\n", b);
//
//	return 0;
//}


//����ʹ���������ʽʵ�����������нϴ�ֵ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = a > b ? a : b;
//	printf("max = %d\n", max);
//	return 0;
//}




//�ġ��߼�������
// &&  ||  !
//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	if (!flag)//flagΪ��Ҫ��ʲô��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//����3~5���Ǵ���
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("����\n");
//	}
//	return 0;
//}


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}


//��ϰ��������ж�
//�����ܱ�4�������Ҳ��ܱ�100����������
//		�ܱ�400����������
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//}


//��·�������ߵı��ʽ������������������Ͳ��ٶ��ұߵı��ʽ��ֵ�����������Ϊ��·
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("i = %d\na = %d\nb = %d\nc = %d\nd = %d\n", i, a, b, c, d);
//	return 0;
//}




//�塢switch���
//��������һ������ֵ�������3֮�������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("������0\n");
//		break;
//	case 1:
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
//		break;
//	}
//	return 0;
//}
//ע:switch��ı��ʽ���������ͱ��ʽ
//	 case����������ͳ������ʽ


//Ҳ����ʹ��char���ͣ���Ϊ�ַ���Ҳ�ǹ��ൽ���ͼ��壬�ַ�������ASCII��ֵ�����ֵ������
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case 'a':
//		break;
//	case 'b':
//		break;
//	}
//	return 0;
//}


//��ϰ������1~7�����֣���ӡ��Ӧ�����ڼ�
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}


//����������仯��1~5��������գ�6~7�����Ϣ��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("������������ֵӦ����1~7�ķ�Χ\n");
//		break;
//	}
//	return 0;
//}




//����whileѭ��
//int main()
//{
//	int n = 10;
//	while (n > 0)
//	{
//		printf("hehe\n");//��ѭ��
//	}
//
//	return 0;
//}


//��ϰ������Ļ�ϴ�ӡ1~10
//int main()
//{
//	int i = 1;//ѭ������
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//��ϰ:����һ���������������ӡ�������ÿһλ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}




//�ߡ�forѭ��
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//��ϰ������1~100֮��3�ı���������֮��
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum = sum + i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//�ˡ�do-whileѭ��
//do while��ѭ��������ִ��һ��
//int main()
//{
//	int i = 1;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//��ϰ������һ��������������һ����������Ǽ�λ��
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	do {
//		count++;
//		n = n / 10;
//	} while (n);
//
//	printf("%d\n", count);
//	return 0;
//}




//�š�break��continue
//break���������������õ���ֹѭ��
//continu����������������ѭ����continue����Ĵ���
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}




//ʮ��ѭ����Ƕ��
//��ϰ���ҳ�100~200֮�������������ӡ����Ļ��
//������ֻ�ܱ�1��������������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����i������
//		//ÿһ��ѭ�������������һ������
//		//�ж���������Ƿ�������
//		//����2~i-1ֱ�ӵ�����ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//�Ż���ż��������������
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//����i������
//		//ÿһ��ѭ�������������һ������
//		//�ж���������Ƿ�������
//		//����2~i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//�� m=a*b����a��b��������һ��������<=����m��
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����i������
//		//ÿһ��ѭ�������������һ������
//		//�ж���������Ƿ�������
//		//����2~i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}




//ʮһ��goto���
//goto������ʵ����ͬһ����������ת����ƺõı�Ŵ�
//int main()
//{
//	printf("hehe\n");
//	if (1)
//	{
//		goto end;
//	}
//	printf("haha\n");
//
//end:
//	printf("end\n");
//	return 0;
//}


//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;//��ѭ��
//	return 0;
//}


//�ػ�����
//������������ʱ���Ϳ�ʼ����ʱ60��ػ�,��������������룺ȡ������ȡ���ػ�
//shutdown -s �ػ�
//shutdown -s -t ���ùػ�ʱ�䣨�룩
//shutdown -a ȡ���ػ�
//system -- �⺯��������ִ��ϵͳ�����Ҫ��ͷ�ļ���stdlib.h
//�����ַ����Ƚ���ȵ�ʱ����ʹ�õȺţ�Ӧ��ʹ��strcmp����Ҫ��ͷ�ļ���string.h
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺ȡ������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "ȡ��") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����һ�����ڹػ�����������룺ȡ������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "ȡ��") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}