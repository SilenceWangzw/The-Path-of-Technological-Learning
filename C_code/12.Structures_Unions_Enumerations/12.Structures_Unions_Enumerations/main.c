#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ���ṹ�����͵��������ʼ��
//�ṹ������
struct Book
{
	char book_name[20];
	char author[20];
	float price;
	char id[19];
};
int main()
{
	//��˳���ʼ��
	struct Book b1 = { "C���Գ������","̷��ǿ",38.8f,"thq2025" };
	//����˳���ʼ��
	struct Book b2 = { .id = "thq2025",.book_name = "C���Գ������",.author = "̷��ǿ",.price = 38.8f };
	
	printf("%s %s %f %s\n", b1.book_name, b1.author, b1.price, b1.id);

	return 0;
}