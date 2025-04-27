#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

int main()
{
	SeqList L;

	//初始化
	SeqListInit(&L);

	////尾插
	//SeqListPushBack(&L, 1);
	//SeqListPushBack(&L, 2);
	//SeqListPushBack(&L, 3);
	//SeqListPushBack(&L, 4);
	//SeqListPushBack(&L, 5);
	//SeqListPrint(&L);

	////尾删
	//SeqListPopBack(&L);
	//SeqListPrint(&L);


	////头插
	//SeqListPushFront(&L, 1);
	//SeqListPushFront(&L, 2);
	//SeqListPushFront(&L, 3);
	//SeqListPushFront(&L, 4);
	//SeqListPushFront(&L, 5);
	//SeqListPrint(&L);

	////头删
	//SeqListPopFront(&L);
	//SeqListPopFront(&L);
	//SeqListPrint(&L);


	//任意位置插入
	SeqListPushBack(&L, 1);
	SeqListPushBack(&L, 2);
	SeqListPushBack(&L, 3);
	SeqListPushBack(&L, 4);
	SeqListPushBack(&L, 5);
	SeqListInsert(&L, 0, 0);
	SeqListPrint(&L);

	//任意位置删除
	SeqListErase(&L, 1);
	SeqListPrint(&L);

	//查找数据
	int ret = SeqListFind(&L, 5);
	if (ret > 0)
	{
		printf("查找成功，数据下标为%d\n", ret);
	}
	else
	{
		printf("数据不存在\n");
	}

	return 0;
}