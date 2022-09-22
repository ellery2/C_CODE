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
	int sz;//通讯录中的人数
};

void init_con(struct contact* con);//初始化通讯录

void menu();

void add_con(struct contact* con);//添加用户

void show_con(struct contact* con);//展示用户

void del_con(struct contact* con);//删除用户

void search_con(struct contact* con);//查找用户

void change_con(struct contact* con);//修改用户信息

void sort_con(struct contact* con);//排序（姓名）

