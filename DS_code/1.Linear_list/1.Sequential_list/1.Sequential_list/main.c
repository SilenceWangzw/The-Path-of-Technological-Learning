#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

int main()
{
	SeqList L;

	//��ʼ��
	SeqListInit(&L);

	////β��
	//SeqListPushBack(&L, 1);
	//SeqListPushBack(&L, 2);
	//SeqListPushBack(&L, 3);
	//SeqListPushBack(&L, 4);
	//SeqListPushBack(&L, 5);
	//SeqListPrint(&L);

	////βɾ
	//SeqListPopBack(&L);
	//SeqListPrint(&L);


	////ͷ��
	//SeqListPushFront(&L, 1);
	//SeqListPushFront(&L, 2);
	//SeqListPushFront(&L, 3);
	//SeqListPushFront(&L, 4);
	//SeqListPushFront(&L, 5);
	//SeqListPrint(&L);

	////ͷɾ
	//SeqListPopFront(&L);
	//SeqListPopFront(&L);
	//SeqListPrint(&L);


	//����λ�ò���
	SeqListPushBack(&L, 1);
	SeqListPushBack(&L, 2);
	SeqListPushBack(&L, 3);
	SeqListPushBack(&L, 4);
	SeqListPushBack(&L, 5);
	SeqListInsert(&L, 0, 0);
	SeqListPrint(&L);

	//����λ��ɾ��
	SeqListErase(&L, 1);
	SeqListPrint(&L);

	//��������
	int ret = SeqListFind(&L, 5);
	if (ret > 0)
	{
		printf("���ҳɹ��������±�Ϊ%d\n", ret);
	}
	else
	{
		printf("���ݲ�����\n");
	}

	return 0;
}