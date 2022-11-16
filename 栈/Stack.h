#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

typedef int SLDataType;
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