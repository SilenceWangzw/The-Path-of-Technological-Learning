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




//四、结构体实现位段
//1.什么是位段
//位段的声明和结构是类似的，有两个不同
//①位段的成员可以是int、unsigned int、char
//②位段的成员名后面有一个冒号和一个数字
//位段中的位，指的是二进制的位
//struct S
//{
//	int _a : 2;//限定占两个字节
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S));
//	return 0;
//}


//2.位段的内存分配
//位段的空间上是按照需要以4个字节或1个字节的方式来开辟的
//位段设计很多不确定因素，不跨平台的，注重可移植性的程序应该避免使用位段
//①给定了空间后，在空间内部是从左向右，还是从右向左使用，这个是不确定的
//②当剩下的空间不足以存放下一个成员时，空间是浪费还是使用，也是不确定的
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




//五、联合体




//六、枚举类型
//枚举顾名思义就是一一列举，把可能的取值一一列举
enum Sex
{
	//该枚举类型的三种可能取值，他们都是常量，被称为枚举常量
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex sex1 = MALE;
	enum Sex sex2 = FEMALE;

	//枚举常量的址默认从0开始
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	return 0;
}
//枚举的优点
//①增加代码的可读性和可维护性
//②和define定义的标识符比起来，枚举有类型检查，更加严谨
//③便于调试，预处理阶段会删除#define定义的符号
//④使用方便，一次可以定义多个常量
//⑤枚举常量是遵循作用域规则的，枚举声明在函数内，只能在函数内使用