#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ���ṹ�����͵�����
//1.�ṹ������Ĵ������ʼ��
//�ṹ������
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//};
//int main()
//{
//	//��˳���ʼ��
//	struct Book b1 = { "C���Գ������","̷��ǿ",38.8f,"thq2025" };
//	//����˳���ʼ��
//	struct Book b2 = { .id = "thq2025",.book_name = "C���Գ������",.author = "̷��ǿ",.price = 38.8f };
//	
//	printf("%s %s %f %s\n", b1.book_name, b1.author, b1.price, b1.id);
//
//	return 0;
//}


//2.�ṹ���������
//typedef struct Node
//{
//	int data;//������� -- ������
//	struct Node* next;//ָ����
//}Node;




//�����ṹ����ڴ����
//struct S1
//{
//	char c1;
//	char c2;
//	int n;
//};
//struct S2
//{
//	char c1;
//	int n;
//	char c2;
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S1));//8
//	printf("%zd\n", sizeof(struct S2));//12
//	return 0;
//}
//�ṹ��ĳ�Ա���ڴ����Ǵ��ڶ������󣨽ṹ���ڴ���룩


//1.�������
//�ٽṹ��ĵ�һ����Ա���뵽�ṹ�������ʼλ��ƫ����Ϊ0�ĵ�ַ��
//��������Ա����Ҫ���뵽ĳ�����������������ĵ�ַ��
//������ = ������Ĭ�ϵĶ�������ó�Ա�����Ĵ�С�Ľ�Сֵ -- VS��Ĭ�϶�����Ϊ8,��gccû��Ĭ�϶����������������ǳ�Ա���������С
//�۽ṹ���ܴ�С����������������
//�����Ƕ���˽ṹ��������Ƕ�׵Ľṹ���Ա���뵽�Լ��ĳ�Ա���������������������ṹ�������С������������������������
//struct S1
//{
//	char c1;// 1/8
//	char c2;// 1/8
//	int n;// 4/8
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S1));
//	return 0;
//}


//struct S1
//{
//	char c1;// 1/8
//	int n;// 4/8
//	char c2;// 1/8
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S1));
//	return 0;
//}


//struct S1
//{
//	double d;// 8/8
//	char c;// 1/8
//	int i;// 4/8
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S1));
//	return 0;
//}


//struct S1
//{
//	double d;// 8/8
//	char c;// 1/8
//	int i;// 4/8
//};
//struct S2
//{
//	char c1;// 1/8
//	struct S1 s1;// 16/��Ա����������Ϊ8
//	double d;// 8/8
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S2));
//	return 0;
//}


//2.�޸�Ĭ�϶�����
//VS��Ĭ�϶�������8
//#pragma pack(1)
//struct S
//{
//	char c1;
//	int n;
//	char c2;
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S));
//	return 0;
//}




//�����ṹ�崫��
//struct S
//{
//	int arr[1000];
//	int n;
//	char ch;
//};
//void print1(struct S tmp)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp.arr[i]);
//	}
//	printf("\n");
//	printf("n=%d\n", tmp.n);
//	printf("ch=%c\n", tmp.ch);
//}
//void print2(struct S* tmp)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", tmp->arr[i]);
//	}
//	printf("\n");
//	printf("n=%d\n", tmp->n);
//	printf("ch=%c\n", tmp->ch);
//}
//int main()
//{
//	struct S s = { {1,2,3,4,5,6,7,8,9,10},10,'w' };
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	return 0;
//}
//�������ε�ʱ�򣬲�������Ҫѹջ�ģ�����ʱ��Ϳռ��ϵ�ϵͳ����
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�