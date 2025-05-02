#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

//��ʼ��
void StackInit(Stack* st)
{
	assert(st);
	st->data = (STDataType*)malloc(sizeof(STDataType) * INIT_MAX_SIZE);
	if (st->data == NULL)
	{
		printf("����ռ�ʧ��\n");
		exit(-1);
	}
	//topָ��ջ�����ݵ���һ��λ��
	st->top = 0;
	st->capacity = INIT_MAX_SIZE;
}


//����ջ
void StackDestory(Stack* st)
{
	assert(st);
	free(st->data);
	st->data = NULL;
	st->top = 0;
	st->capacity = 0;
}


//��ջ
void StackPush(Stack* st, STDataType x)
{
	assert(st);
	//���ջ����Ҫ����
	if (st->top == st->capacity)
	{
		//����2��
		int newcapacity = st->capacity == 0 ? 4 : st->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(st->data, sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		st->data = tmp;
		st->capacity = newcapacity;
	}

	//������
	st->data[st->top] = x;

	//ջ��+1
	st->top++;
}


//��ջ
void StackPop(Stack* st)
{
	assert(st);
	st->top--;
}


//��ȡջ��Ԫ��
STDataType StackTop(Stack* st)
{
	assert(st);
	assert(st->top > 0);
	return st->data[st->top - 1];
}


//�п�
bool StackEmpty(Stack* st)
{
	assert(st);
	return st->top == 0;
}


//����ջ�Ĵ�С
int StackSize(Stack* st)
{
	assert(st);
	return st->top;
}