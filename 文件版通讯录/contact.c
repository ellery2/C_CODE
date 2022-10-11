#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void load_con(struct contact* con)
{
	int i = 0;
	//struct peoinfo tmp = { 0 };
	FILE* file = fopen("test.txt", "rb");
	while (fread(con->data+i, sizeof(struct peoinfo), 1, file) == 1)
	{
		con->check++;
		//con->data[con->sz] = tmp;
		con->sz++;
		i++;
		if (con->check == 3)
		{
			con->data = (struct peoinfo*)realloc(con->data, (con->sz + 3) * sizeof(struct peoinfo));
			con->check = 0;
		}
	}
	fclose(file);
	file = NULL;
}


void init_con(struct contact* con)
{
	con->sz = 0;
	con->check = 0;
	con->data = (struct peoinfo*)calloc(3, sizeof(struct peoinfo));
	load_con(con);
}

void menu()
{
	printf("*********************************\n");
	printf("      1.add       2.delete       \n");
	printf("      3.search    4.show         \n");
	printf("      5.change    6.sort         \n");
	printf("      0.exit                     \n");
	printf("*********************************\n");
}

void add_con(struct contact* con)
{
	printf("����\n");
	scanf("%s", con->data[con->sz].name);
	printf("�Ա�\n");
	scanf("%s", con->data[con->sz].sex);
	printf("�绰\n");
	scanf("%s", con->data[con->sz].tele);
	printf("����\n");
	scanf("%d", &(con->data[con->sz].age));
	printf("��ַ\n");
	scanf("%s", con->data[con->sz].addr);
	con->sz++;
	con->check++;
	if (con->check == 3)
	{
		con->data = (struct peoinfo*)realloc(con->data, (con->sz + 3) * sizeof(struct peoinfo));
		con->check = 0;
	}
}

void show_con(struct contact* con)
{
	int i = 0;
	printf("%-10s\t", "����");
	printf("%-5s\t", "�Ա�");
	printf("%-20s\t", "�绰");
	printf("%-10s\t", "����");
	printf("%-20s\t", "��ַ");
	printf("\n");
	for (i = 0; i < con->sz; i++)
	{
		printf("%-10s\t", con->data[i].name);
		printf("%-5s\t", con->data[i].sex);
		printf("%-20s\t", con->data[i].tele);
		printf("%-10d\t", con->data[i].age);
		printf("%-20s\t", con->data[i].addr);
		printf("\n");
	}
}

static int find(char* name, struct contact* con)
{
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void del_con(struct contact* con)
{
	char* name[10];
	printf("����Ҫɾ����������\n");
	scanf("%s", name);
	int i = find(name, con);
	if (i != -1)
	{
		for (; i <= con->sz - 1; i++)
		{
			con->data[i] = con->data[i + 1];
		}
		printf("ɾ���ɹ�\n");
		con->sz--;
	}
	else
	{
		printf("�û�������\n");
	}
}

void search_con(struct contact* con)
{
	char* name[10];
	printf("����Ҫ���ҵ�������\n");
	scanf("%s", name);
	int i = find(name, con);
	if (i != -1)
	{
		printf("%-10s\t", "����");
		printf("%-5s\t", "�Ա�");
		printf("%-20s\t", "�绰");
		printf("%-10s\t", "����");
		printf("%-20s\t", "��ַ");
		printf("\n");
		printf("%-10s\t", con->data[i].name);
		printf("%-5s\t", con->data[i].sex);
		printf("%-20s\t", con->data[i].tele);
		printf("%-10d\t", con->data[i].age);
		printf("%-20s\t", con->data[i].addr);
		printf("\n");
	}
}

void change_con(struct contact* con)
{
	char* name[10];
	printf("��Ҫ�޸ĵ��û���\n");
	scanf("%s", name);
	int i = find(name, con);
	printf("����\n");
	scanf("%s", con->data[i].name);
	printf("�Ա�\n");
	scanf("%s", con->data[i].sex);
	printf("�绰\n");
	scanf("%s", con->data[i].tele);
	printf("����\n");
	scanf("%d", &(con->data[i].age));
	printf("��ַ\n");
	scanf("%s", con->data[i].addr);
}

int my_cmp(void* e1, void* e2)
{
	return (strcmp(((struct peoinfo*)e1)->name, ((struct peoinfo*)e2)->name));
}

void sort_con(struct contact* con)
{
	qsort(con->data, con->sz, sizeof(con->data[0]), my_cmp);
	show_con(con);
}

void keep_con(struct contact* con)
{
	int j = 0;
	FILE* file = fopen("test.txt", "wb");
	if (file == NULL)
	{
		return;
	}
	for (j = 0; j < con->sz; j++)
	{
		fwrite(con->data+j, sizeof(struct peoinfo), 1, file);
	}
	fclose(file);
	file = NULL;
}

