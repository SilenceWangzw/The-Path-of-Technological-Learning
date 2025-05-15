#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

//初始化
void QueueInit(Queue* pq)
{
	assert(pq != NULL);
	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}


//入队（队尾插入）
void QueuePush(Queue* pq, QDataType x)
{
	//申请结点
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->next = NULL;
	newnode->data = x;

	if (pq->ptail == NULL)
	{
		pq->phead = pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
		pq->ptail = pq->ptail->next;
	}

	pq->size++;
}


//出队（队头删除）
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->size != 0);

	//只有一个结点
	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	//多个结点
	else
	{
		//保存下一个结点
		QueueNode* next = pq->phead->next;

		free(pq->phead);
		pq->phead = next;
	}
	pq->size--;
}


//求队列数据个数
int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}


//取队头数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->phead);
	return pq->phead->data;
}


//取队尾数据
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->ptail);
	return pq->ptail->data;
}


//判空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}


//销毁队列
void QueueDestory(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->phead;
	while (cur != NULL)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->phead = pq->ptail = NULL;
	pq->size = 0;
}