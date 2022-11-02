#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SeqListInit(SeqList* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestroy(SeqList* ps)
{
	//free ps->a;
	ps->a = NULL;
}

void check(SeqList* ps)
{
	if (ps->size == ps->capacity)
	{
		SLDateType newCapacity = 0;
		ps->capacity == 0 ? newCapacity = 4 : (newCapacity = ps->capacity * 2);
		SLDateType* temp = (SLDateType*)realloc(ps->a, newCapacity * sizeof(SLDateType));
		if (temp == NULL)
		{
			exit(-1);
			perror("realloc false");
		}
		ps->a = temp;
		ps->capacity = newCapacity;
	}
}

void SeqListPushBack(SeqList* ps, SLDateType num)
{
	/*check(ps);
	ps->a[ps->size] = num;
	ps->size++;*/
	SeqListInsert(ps, ps->size, num);
}

void SeqListPrint(SeqList* ps)
{
	SLDateType i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}

void SeqListPushFront(SeqList* ps, SLDateType x)
{
	/*check(ps);
	SLDateType left = ps->size - 1, right = ps->size;
	while (left >= 0)
	{
		ps->a[right] = ps->a[left];
		left--;
		right--;
	}
	ps->a[0] = x;
	ps->size++;*/
	SeqListInsert(ps, 0, x);
}

void SeqListPopFront(SeqList* ps)
{
	/*assert(ps);
	SLDateType left = 0, right = 1;
	while (right < ps->size)
	{
		ps->a[left] = ps->a[right];
		left++;
		right++;
	}
	ps->size--;*/
	SeqListErase(ps, 0);
}

void SeqListPopBack(SeqList* ps)
{
	//assert(ps);
	//ps->size--;
	SeqListErase(ps, ps->size);
}

int SeqListFind(SeqList* ps, SLDateType x)
{
	SLDateType i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return x;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* ps, int pos, SLDateType x)
{
	assert(ps);
	check(ps);
	SLDateType left = ps->size-1, right = ps->size;
	while (left >= pos)
	{
		ps->a[right] = ps->a[left];
		left--;
		right--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SeqListErase(SeqList* ps, int pos)
{
	int left = pos, right = pos+1;
	while (right < ps->size)
	{
		ps->a[left] = ps->a[right];
		left++;
		right++;
	}
	ps->size--;
}