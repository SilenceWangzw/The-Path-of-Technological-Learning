#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SQLDataType;
#define INIT_MAX_SIZE 4
typedef struct SeqList
{
	SQLDataType* data;//指向动态开辟的数组
	int size;//数组中数据的个数
	int capacity;//数组的总容量
}SeqList;

//初始化
void SeqListInit(SeqList* ps);

//扩容
void SeqListCheckCapacity(SeqList* ps);

//打印
void SeqListPrint(SeqList* ps);

//尾插
void SeqListPushBack(SeqList* ps, SQLDataType x);

//尾删
void SeqListPopBack(SeqList* ps);

//头插
void SeqListPushFront(SeqList* ps, SQLDataType x);

//头删
void SeqListPopFront(SeqList* ps);

//任意下标位置插入
void SeqListInsert(SeqList* ps, int pos, SQLDataType x);

//任意下标位置删除
void SeqListErase(SeqList* ps, int pos);

//查找元素，返回下标
int SeqListFind(SeqList* ps, SQLDataType x);