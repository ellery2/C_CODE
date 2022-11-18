#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

typedef char SLDataType;
typedef struct Stack
{
	SLDataType* a;
	int top;
	int capacity;
}st;

// 初始化栈 
void StackInit(st* ps);

// 入栈 
void StackPush(st* ps, SLDataType x);

// 出栈 
void StackPop(st* ps);

// 获取栈顶元素 
SLDataType StackTop(st* ps);

// 获取栈中有效元素个数 
int StackSize(st* ps);

// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(st* ps);

// 销毁栈 
void StackDestroy(st* ps);



//匹配问题
bool	isValid(char* s) {
	st stack;
	StackInit(&stack);
	while (*s)
	{
		if (*s == '(' || *s == '[' || *s == '{')
		{
			StackPush(&stack, *s);
		}
		else
		{
			if (stack.top == 0)
			{
				StackDestroy(&stack);
				return false;
			}
			char top = StackTop(&stack);
			if ((top == '(' && *s != ')') ||
				(top == '[' && *s != ']') ||
				(top == '{' && *s != '}'))
			{
				StackDestroy(&stack);
				return false;
			}
		}
		s++;
	}
	StackDestroy(&stack);
	return false;
}





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
	return ps->a[ps->top - 1];
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