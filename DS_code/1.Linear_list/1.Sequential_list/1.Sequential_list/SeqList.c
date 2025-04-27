#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//初始化
void SeqListInit(SeqList* ps)
{
	ps->data = (SQLDataType*)malloc(sizeof(SQLDataType) * INIT_MAX_SIZE);
	if (ps->data == NULL)
	{
		printf("申请内存失败\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = INIT_MAX_SIZE;
}


//扩容
void SeqListCheckCapacity(SeqList* ps)
{
	if (ps->size >= ps->capacity)
	{
		//容量扩大一倍
		ps->capacity *= 2;
		ps->data = (SQLDataType*)realloc(ps->data, sizeof(SQLDataType) * ps->capacity);
		if (ps->data == NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
	}
}


//打印
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}


//尾插
void SeqListPushBack(SeqList* ps, SQLDataType x)
{
	//确保传过来的不是空指针
	assert(ps != NULL);
	
	//如果内存不够，要扩容
	SeqListCheckCapacity(ps);

	//插入数据
	ps->data[ps->size] = x;
	ps->size++;
}


//尾删
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
}


//头插
void SeqListPushFront(SeqList* ps, SQLDataType x)
{
	assert(ps);
	//如果内存不够，要扩容
	SeqListCheckCapacity(ps);

	//移动数据
	for (int i = ps->size - 1; i >= 0; i--)
	{
		ps->data[i + 1] = ps->data[i];
	}

	//插入数据
	ps->data[0] = x;
	ps->size++;
}


//头删
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	//移动数据
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
}


//任意下标位置插入
void SeqListInsert(SeqList* ps, int pos, SQLDataType x)
{
	assert(ps);
	//移动数据
	for (int i = ps->size - 1; i >= pos; i--)
	{
		ps->data[i + 1] = ps->data[i];
	}
	
	//插入数据
	ps->data[pos] = x;
	ps->size++;
}


//任意下标位置删除
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	//移动数据
	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
}


//查找元素，返回下标
int SeqListFind(SeqList* ps, SQLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->data[i] == x)
		{
			return i;
		}
	}
	return -1;
}