#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void StackInit(st* ps)
{
	assert(ps);
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	ps->top = 0;//注意这个top指向的是栈顶的下一位
	ps->capacity = 4;
}

void StackPush(st* ps, SLDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity * 2);//realloc也要改类型
		if (tmp == NULL)
		{
			perror(realloc);
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = ps->capacity * 2;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(st* ps)
{
	assert(ps);
	ps->top--;
}

SLDataType StackTop(st* ps)
{
	assert(ps);
	return ps->a[ps->top-1];
}

int StackSize(st* ps)
{
	assert(ps);
	return ps->top - 1;
}

int StackEmpty(st* ps)
{
	assert(ps);
	return (ps->top == 0);
}

void StackDestroy(st* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}