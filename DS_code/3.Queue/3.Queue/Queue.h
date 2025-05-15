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
	QueueNode* phead;//ͷָ��
	QueueNode* ptail;//βָ��
	int size;//���ݸ���
}Queue;


//��ʼ��
void QueueInit(Queue* pq);

//��ӣ���β���룩
void QueuePush(Queue* pq, QDataType x);

//���ӣ���ͷɾ����
void QueuePop(Queue* pq);

//��������ݸ���
int QueueSize(Queue* pq);

//ȡ��ͷ����
QDataType QueueFront(Queue* pq);

//ȡ��β����
QDataType QueueBack(Queue* pq);

//�п�
bool QueueEmpty(Queue* pq);

//���ٶ���
void QueueDestory(Queue* pq);