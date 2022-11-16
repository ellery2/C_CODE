#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

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