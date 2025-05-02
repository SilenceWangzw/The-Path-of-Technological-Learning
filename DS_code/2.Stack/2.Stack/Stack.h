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
	int top;//栈顶
	int capacity;//总容量
}Stack;

//初始化
void StackInit(Stack* st);

//销毁栈
void StackDestory(Stack* st);

//入栈
void StackPush(Stack* st, STDataType x);

//出栈
void StackPop(Stack* st);

//获取栈顶元素
STDataType StackTop(Stack* st);

//判空
bool StackEmpty(Stack* st);

//计算栈的大小
int StackSize(Stack* st);