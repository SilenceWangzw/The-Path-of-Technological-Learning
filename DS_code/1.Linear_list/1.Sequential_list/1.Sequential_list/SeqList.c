#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//��ʼ��
void SeqListInit(SeqList* ps)
{
	ps->data = (SQLDataType*)malloc(sizeof(SQLDataType) * INIT_MAX_SIZE);
	if (ps->data == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = INIT_MAX_SIZE;
}


//����
void SeqListCheckCapacity(SeqList* ps)
{
	if (ps->size >= ps->capacity)
	{
		//��������һ��
		ps->capacity *= 2;
		ps->data = (SQLDataType*)realloc(ps->data, sizeof(SQLDataType) * ps->capacity);
		if (ps->data == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}
}


//��ӡ
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}


//β��
void SeqListPushBack(SeqList* ps, SQLDataType x)
{
	//ȷ���������Ĳ��ǿ�ָ��
	assert(ps != NULL);
	
	//����ڴ治����Ҫ����
	SeqListCheckCapacity(ps);

	//��������
	ps->data[ps->size] = x;
	ps->size++;
}


//βɾ
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
}


//ͷ��
void SeqListPushFront(SeqList* ps, SQLDataType x)
{
	assert(ps);
	//����ڴ治����Ҫ����
	SeqListCheckCapacity(ps);

	//�ƶ�����
	for (int i = ps->size - 1; i >= 0; i--)
	{
		ps->data[i + 1] = ps->data[i];
	}

	//��������
	ps->data[0] = x;
	ps->size++;
}


//ͷɾ
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	//�ƶ�����
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
}


//�����±�λ�ò���
void SeqListInsert(SeqList* ps, int pos, SQLDataType x)
{
	assert(ps);
	//�ƶ�����
	for (int i = ps->size - 1; i >= pos; i--)
	{
		ps->data[i + 1] = ps->data[i];
	}
	
	//��������
	ps->data[pos] = x;
	ps->size++;
}


//�����±�λ��ɾ��
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	//�ƶ�����
	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
}


//����Ԫ�أ������±�
int SeqListFind(SeqList* ps, SQLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->data[i] == x)
		{
			return i;
		}
	}
	return -1;
}