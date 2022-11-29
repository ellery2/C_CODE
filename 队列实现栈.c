#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#include <stdbool.h>
typedef int QDataType;
//节点的结构
typedef struct QListNode
{
	QDataType data;
	struct QListNode* next;
}Qnode;

// 队列的结构
typedef struct Queue
{
	Qnode* head;
	Qnode* tail;
	QDataType size;
}Queue;

// 初始化队列 
void QueueInit(Queue* q);
// 队尾入队列 
void QueuePush(Queue* q, QDataType data);
// 队头出队列 
void QueuePop(Queue* q);
// 获取队列中有效元素个数 
int QueueSize(Queue* q);
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q);
// 获取队列头部元素 
QDataType QueueFront(Queue* q);
// 获取队列队尾元素 
QDataType QueueBack(Queue* q);
// 销毁队列 
void QueueDestroy(Queue* q);

void QueueInit(Queue* q)
{
	assert(q);
	q->head = NULL;
	q->tail = NULL;
	q->size = 0;
}

void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	Qnode* newnode = (Qnode*)malloc(sizeof(Qnode));
	newnode->data = data;
	newnode->next = NULL;
	if (newnode == NULL)
	{
		perror(newnode);
		exit(-1);
	}
	if (q->head == NULL)
	{
		q->head = q->tail = newnode;
	}
	else
	{
		q->tail->next = newnode;
		q->tail = newnode;
	}
	q->size++;
}

void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	Queue* tmp = q->head->next;
	free(q->head);
	q->head = tmp;
	if (q->head == NULL)
	{
		q->tail = NULL;
	}
	q->size--;
}

int QueueSize(Queue* q)
{
	return q->size;
}

int QueueEmpty(Queue* q)
{
	return (q->head == NULL);
}

QDataType QueueFront(Queue* q)
{
	return q->head->data;
}

QDataType QueueBack(Queue* q)
{
	return q->tail->data;
}

void QueueDestroy(Queue* q)
{
	Qnode* ver = q->head;
	while (ver)
	{
		Qnode* next = ver->next;
		free(ver);
		ver = next;
	}
	q->head = NULL;
	q->tail = NULL;
	q->size = 0;
}



typedef struct {
	Queue q1;
	Queue q2;
} MyStack;


MyStack* myStackCreate() {
	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&obj->q1);
	QueueInit(&obj->q2);
	return obj;
}

void myStackPush(MyStack* obj, int x) {
	Queue* emptyqueue = &obj->q1;
	Queue* noemptyqueue = &obj->q2;
	if (!QueueEmpty(emptyqueue))
	{
		emptyqueue = &obj->q2;
		noemptyqueue = &obj->q1;
	}
	QueuePush(noemptyqueue, x);
}

//把前n-1个换到另一个队列，剩下的那个就是栈顶
int myStackPop(MyStack* obj) {
	Queue* emptyqueue = &obj->q1;
	Queue* noemptyqueue = &obj->q2;
	if (!QueueEmpty(emptyqueue))
	{
		emptyqueue = &obj->q2;
		noemptyqueue = &obj->q1;
	}
	while (QueueSize(noemptyqueue) > 1)
	{
		QueuePush(emptyqueue, QueueFront(noemptyqueue));
		QueuePop(noemptyqueue);
	}
	int top = QueueFront(noemptyqueue);
	QueuePop(noemptyqueue);
	return top;
}

int myStackTop(MyStack* obj) {
	Queue* emptyqueue = &obj->q1;
	Queue* noemptyqueue = &obj->q2;
	if (!QueueEmpty(emptyqueue))
	{
		emptyqueue = &obj->q2;
		noemptyqueue = &obj->q1;
	}
	return QueueBack(noemptyqueue);
}

bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
	QueueDestroy(&obj->q1);
	QueueDestroy(&obj->q2);
	free(obj);
}

int main()
{
	MyStack* obj = myStackCreate();
	myStackPush(obj, 1);
	myStackPush(obj, 2);
	myStackPush(obj, 3);
	myStackPush(obj, 4);
	int top2 = myStackPop(obj);

	int top1 = myStackTop(obj);
	myStackEmpty(obj);
	return 0;
}