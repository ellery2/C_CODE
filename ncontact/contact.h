#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct peoinfo
{
	char name[10];
	char sex[5];
	char tele[20];
	int age;
	char addr[20];
};

struct contact
{
	struct peoinfo data[100];
	int sz;//ͨѶ¼�е�����
};

void init_con(struct contact* con);//��ʼ��ͨѶ¼

void menu();

void add_con(struct contact* con);//����û�

void show_con(struct contact* con);//չʾ�û�

void del_con(struct contact* con);//ɾ���û�

void search_con(struct contact* con);//�����û�

void change_con(struct contact* con);//�޸��û���Ϣ

void sort_con(struct contact* con);//����������

