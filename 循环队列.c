#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef struct {
    int* a;
    int front;
    //���һ��������һλ
    int rear;
    //�����ɵ�����
    int k;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    //�࿪��һ���ռ������������пպ�����
    obj->a = (int*)malloc(sizeof(int) * (k + 1));
    obj->front = obj->rear = 0;
    obj->k = k;
    return obj;
}

//�п�����
bool myCircularQueueIsEmpty(MyCircularQueue* obj);
//��������
bool myCircularQueueIsFull(MyCircularQueue* obj);

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    assert(obj);
    if (myCircularQueueIsFull(obj))
        return false;
    obj->a[obj->rear] = value;
    //�������ʽ���Ѿ���rear��������һλ�����������ʽ�Ӳ���++��
    obj->rear = (obj->rear + 1) % (obj->k + 1);
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    assert(obj);
    if (myCircularQueueIsEmpty(obj))
        return false;
    obj->front = (obj->front + 1) % (obj->k + 1);
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    assert(obj);
    if (myCircularQueueIsEmpty(obj))
        return -1;
    return obj->a[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    assert(obj);
    if (myCircularQueueIsEmpty(obj))
        return -1;
    return obj->a[(obj->rear + obj->k) % (obj->k + 1)];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    assert(obj);
    if (obj->front == obj->rear)
        return true;
    else
        return false;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    assert(obj);
    if ((obj->rear + 1) % (obj->k + 1) == obj->front)
        return true;
    else
        return false;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->a);
    free(obj);
}

int main()
{
    int k = 3;
    MyCircularQueue* obj = myCircularQueueCreate(k);
    myCircularQueueEnQueue(obj, 1);
    myCircularQueueEnQueue(obj, 2);
    myCircularQueueEnQueue(obj, 3);
    myCircularQueueIsEmpty(obj);
    return 0;
}