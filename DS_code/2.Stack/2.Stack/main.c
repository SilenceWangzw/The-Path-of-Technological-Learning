#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

int main()
{
	Stack st;
	//≥ı ºªØ
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);

	while (!StackEmpty(&st))
	{
		printf("%d\n", StackTop(&st));
		StackPop(&st);
	}


	StackDestory(&st);
	return 0;
}