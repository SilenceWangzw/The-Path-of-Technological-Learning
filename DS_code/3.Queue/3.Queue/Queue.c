#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

//��ʼ��
void QueueInit(Queue* pq)
{
	assert(pq != NULL);
	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}


//��ӣ���β���룩
void QueuePush(Queue* pq, QDataType x)
{
	//������
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


//���ӣ���ͷɾ����
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->size != 0);

	//ֻ��һ�����
	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	//������
	else
	{
		//������һ�����
		QueueNode* next = pq->phead->next;

		free(pq->phead);
		pq->phead = next;
	}
	pq->size--;
}


//��������ݸ���
int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}


//ȡ��ͷ����
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->phead);
	return pq->phead->data;
}


//ȡ��β����
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->ptail);
	return pq->ptail->data;
}


//�п�
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}


//���ٶ���
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