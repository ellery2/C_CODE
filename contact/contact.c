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
	ps->size = 0;//设置通讯录开始没有元素
}
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄\n");
		scanf("%d", &(ps->data[ps->size].age));		
		printf("请输入性别\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入住址\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("没有数据\n");
	}
	else
	{
		int i;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄","性别","电话","地址");
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
	printf("请输入要查找的名字");
	scanf("%s", &name);
	int pos = FindByName(name, ps);
	if (-1 == pos)
	{
		printf("用户不存在");
	}
	else
	{
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功");
	}
}
void SeaContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的名字");
	scanf("%s", &name);
	int pos = FindByName(name, ps);
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改的用户名字");
	scanf("%s", &name);
	int pos = FindByName(name, ps);
	printf("请输入名字\n");
	scanf("%s", ps->data[pos].name);
	printf("请输入年龄\n");
	scanf("%d", &(ps->data[pos].age));
	printf("请输入性别\n");
	scanf("%s", ps->data[pos].sex);
	printf("请输入电话\n");
	scanf("%s", ps->data[pos].tele);
	printf("请输入住址\n");
	scanf("%s", ps->data[pos].addr);
}

