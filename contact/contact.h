#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#include<stdio.h>
#include<string.h>
struct Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact
{
	struct Peoinfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* ps);
//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);
//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��ͨѶ¼����
void DelContact(struct Contact* ps);
//����ͨѶ¼
void SeaContact(struct Contact* ps);
//�޸�ͨѶ¼
void ModContact(struct Contact* ps);

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};