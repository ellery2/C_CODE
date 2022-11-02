#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
int main()
{
	SeqList s;
	SeqListInit(&s);
	//β��
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	//ͷ��
	SeqListPushFront(&s, 0);
	//ͷɾ
	SeqListPopFront(&s);
	//βɾ
	SeqListPopBack(&s);
	SeqListPushBack(&s, 6);
	//����
	if (SeqListFind(&s, 10) != -1)
	{
		printf("%d\n", SeqListFind(&s, 3));
	}
	else
	{
		printf("û�ҵ�\n");
	}
	//�м��
	SeqListInsert(&s, 2, 8);
	//�м�ɾ
	SeqListErase(&s, 2);
	SeqListPrint(&s);
	SeqListDestroy(&s);
	return 0;
}
