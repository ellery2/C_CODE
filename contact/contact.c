#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

static int FindByName(char name[MAX_NAME], struct Contact* ps)
{
	int i=0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(name, ps->data[i].name))
		{
			return i;
		}
	}
	return -1;
}

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼��ʼû��Ԫ��
}
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼����");
	}
	else
	{
		printf("����������\n");
		scanf("%s", ps->data[ps->size].name);
		printf("����������\n");
		scanf("%d", &(ps->data[ps->size].age));		
		printf("�������Ա�\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("������סַ\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("û������\n");
	}
	else
	{
		int i;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����","�Ա�","�绰","��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
		}
	}
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	int j;
	printf("������Ҫ���ҵ�����");
	scanf("%s", &name);
	int pos = FindByName(name, ps);
	if (-1 == pos)
	{
		printf("�û�������");
	}
	else
	{
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�");
	}
}
void SeaContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ�����");
	scanf("%s", &name);
	int pos = FindByName(name, ps);
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
}

void ModContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ��û�����");
	scanf("%s", &name);
	int pos = FindByName(name, ps);
	printf("����������\n");
	scanf("%s", ps->data[pos].name);
	printf("����������\n");
	scanf("%d", &(ps->data[pos].age));
	printf("�������Ա�\n");
	scanf("%s", ps->data[pos].sex);
	printf("������绰\n");
	scanf("%s", ps->data[pos].tele);
	printf("������סַ\n");
	scanf("%s", ps->data[pos].addr);
}

