#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、结构体类型的声明
//1.结构体变量的创建与初始化
//结构体类型
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	float price;
//	char id[19];
//};
//int main()
//{
//	//按顺序初始化
//	struct Book b1 = { "C语言程序设计","谭浩强",38.8f,"thq2025" };
//	//不按顺序初始化
//	struct Book b2 = { .id = "thq2025",.book_name = "C语言程序设计",.author = "谭浩强",.price = 38.8f };
//	
//	printf("%s %s %f %s\n", b1.book_name, b1.author, b1.price, b1.id);
//
//	return 0;
//}


//2.结构体的自引用
//typedef struct Node
//{
//	int data;//存放数据 -- 数据域
//	struct Node* next;//指针域
//}Node;




//二、结构体的内存对齐
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
//结构体的成员在内存中是存在对齐现象（结构体内存对齐）


//1.对齐规则
//①结构体的第一个成员对齐到结构体变量起始位置偏移量为0的地址处
//②其他成员变量要对齐到某个对齐数的整数倍的地址数
//对齐数 = 编译器默认的对齐数与该成员变量的大小的较小值 -- VS中默认对齐数为8,，gcc没有默认对齐数，对齐数就是成员自身变量大小
//③结构体总大小最大对齐数的整数倍
//④如果嵌套了结构体的情况，嵌套的结构体成员对齐到自己的成员中最大对齐数的整数倍，结构体整体大小就是所有最大对齐数的整数倍
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
//	struct S1 s1;// 16/成员中最大对齐数为8
//	double d;// 8/8
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S2));
//	return 0;
//}


//2.修改默认对齐数
//VS上默认对齐数数8
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




//三、结构体传参
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
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}
//函数传参的时候，参数是需要压栈的，会有时间和空间上的系统开销
//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降