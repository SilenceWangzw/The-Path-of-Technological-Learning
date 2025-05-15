#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>

typedef int QDataType;
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QueueNode;


typedef struct Queue
{
	QueueNode* phead;//头指针
	QueueNode* ptail;//尾指针
	int size;//数据个数
}Queue;


//初始化
void QueueInit(Queue* pq);

//入队（队尾插入）
void QueuePush(Queue* pq, QDataType x);

//出队（队头删除）
void QueuePop(Queue* pq);

//求队列数据个数
int QueueSize(Queue* pq);

//取队头数据
QDataType QueueFront(Queue* pq);

//取队尾数据
QDataType QueueBack(Queue* pq);

//判空
bool QueueEmpty(Queue* pq);

//销毁队列
void QueueDestory(Queue* pq);