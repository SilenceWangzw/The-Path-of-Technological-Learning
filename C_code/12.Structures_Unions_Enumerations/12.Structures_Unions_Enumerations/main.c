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




//�ġ��ṹ��ʵ��λ��
//1.ʲô��λ��
//λ�ε������ͽṹ�����Ƶģ���������ͬ
//��λ�εĳ�Ա������int��unsigned int��char
//��λ�εĳ�Ա��������һ��ð�ź�һ������
//λ���е�λ��ָ���Ƕ����Ƶ�λ
//struct S
//{
//	int _a : 2;//�޶�ռ�����ֽ�
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S));
//	return 0;
//}


//2.λ�ε��ڴ����
//λ�εĿռ����ǰ�����Ҫ��4���ֽڻ�1���ֽڵķ�ʽ�����ٵ�
//λ����ƺܶ಻ȷ�����أ�����ƽ̨�ģ�ע�ؿ���ֲ�Եĳ���Ӧ�ñ���ʹ��λ��
//�ٸ����˿ռ���ڿռ��ڲ��Ǵ������ң����Ǵ�������ʹ�ã�����ǲ�ȷ����
//�ڵ�ʣ�µĿռ䲻���Դ����һ����Աʱ���ռ����˷ѻ���ʹ�ã�Ҳ�ǲ�ȷ����
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 6;
//};
//int main()
//{
//	struct S s;
//	printf("%zd\n", sizeof(s));
//	return 0;
//}




//�塢������




//����ö������
//ö�ٹ���˼�����һһ�о٣��ѿ��ܵ�ȡֵһһ�о�
enum Sex
{
	//��ö�����͵����ֿ���ȡֵ�����Ƕ��ǳ���������Ϊö�ٳ���
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex sex1 = MALE;
	enum Sex sex2 = FEMALE;

	//ö�ٳ�����ַĬ�ϴ�0��ʼ
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	return 0;
}
//ö�ٵ��ŵ�
//�����Ӵ���Ŀɶ��ԺͿ�ά����
//�ں�define����ı�ʶ����������ö�������ͼ�飬�����Ͻ�
//�۱��ڵ��ԣ�Ԥ����׶λ�ɾ��#define����ķ���
//��ʹ�÷��㣬һ�ο��Զ���������
//��ö�ٳ�������ѭ���������ģ�ö�������ں����ڣ�ֻ���ں�����ʹ��