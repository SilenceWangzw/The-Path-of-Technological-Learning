#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、结构体类型的声明与初始化
//结构体类型
struct Book
{
	char book_name[20];
	char author[20];
	float price;
	char id[19];
};
int main()
{
	//按顺序初始化
	struct Book b1 = { "C语言程序设计","谭浩强",38.8f,"thq2025" };
	//不按顺序初始化
	struct Book b2 = { .id = "thq2025",.book_name = "C语言程序设计",.author = "谭浩强",.price = 38.8f };
	
	printf("%s %s %f %s\n", b1.book_name, b1.author, b1.price, b1.id);

	return 0;
}