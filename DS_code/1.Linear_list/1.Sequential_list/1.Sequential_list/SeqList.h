#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SQLDataType;
#define INIT_MAX_SIZE 4
typedef struct SeqList
{
	SQLDataType* data;//ָ��̬���ٵ�����
	int size;//���������ݵĸ���
	int capacity;//�����������
}SeqList;

//��ʼ��
void SeqListInit(SeqList* ps);

//����
void SeqListCheckCapacity(SeqList* ps);

//��ӡ
void SeqListPrint(SeqList* ps);

//β��
void SeqListPushBack(SeqList* ps, SQLDataType x);

//βɾ
void SeqListPopBack(SeqList* ps);

//ͷ��
void SeqListPushFront(SeqList* ps, SQLDataType x);

//ͷɾ
void SeqListPopFront(SeqList* ps);

//�����±�λ�ò���
void SeqListInsert(SeqList* ps, int pos, SQLDataType x);

//�����±�λ��ɾ��
void SeqListErase(SeqList* ps, int pos);

//����Ԫ�أ������±�
int SeqListFind(SeqList* ps, SQLDataType x);