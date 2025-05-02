#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

//初始化
void StackInit(Stack* st)
{
	assert(st);
	st->data = (STDataType*)malloc(sizeof(STDataType) * INIT_MAX_SIZE);
	if (st->data == NULL)
	{
		printf("申请空间失败\n");
		exit(-1);
	}
	//top指向栈顶数据的下一个位置
	st->top = 0;
	st->capacity = INIT_MAX_SIZE;
}


//销毁栈
void StackDestory(Stack* st)
{
	assert(st);
	free(st->data);
	st->data = NULL;
	st->top = 0;
	st->capacity = 0;
}


//入栈
void StackPush(Stack* st, STDataType x)
{
	assert(st);
	//如果栈满，要扩容
	if (st->top == st->capacity)
	{
		//扩大2倍
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

	//入数据
	st->data[st->top] = x;

	//栈顶+1
	st->top++;
}


//出栈
void StackPop(Stack* st)
{
	assert(st);
	st->top--;
}


//获取栈顶元素
STDataType StackTop(Stack* st)
{
	assert(st);
	assert(st->top > 0);
	return st->data[st->top - 1];
}


//判空
bool StackEmpty(Stack* st)
{
	assert(st);
	return st->top == 0;
}


//计算栈的大小
int StackSize(Stack* st)
{
	assert(st);
	return st->top;
}