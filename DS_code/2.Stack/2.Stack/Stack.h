#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;
#define INIT_MAX_SIZE 4
typedef struct Stack
{
	STDataType* data;
	int top;//ջ��
	int capacity;//������
}Stack;

//��ʼ��
void StackInit(Stack* st);

//����ջ
void StackDestory(Stack* st);

//��ջ
void StackPush(Stack* st, STDataType x);

//��ջ
void StackPop(Stack* st);

//��ȡջ��Ԫ��
STDataType StackTop(Stack* st);

//�п�
bool StackEmpty(Stack* st);

//����ջ�Ĵ�С
int StackSize(Stack* st);