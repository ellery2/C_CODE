#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct stu
{
	char name[10];
	int age;
};
void test2();
void bsort(void* base, int sz, int width, int(*cmp_fun)(void* e1, void* e2));//no change
int cmp(void* e1, void* e2);
void swap(char* p1, char* p2, int width);//no change
int main()
{
	test2();//qsort��������
	return 0;
}
void test2()
{
	int i = 0;
	struct stu num[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 40} };
	int sz = sizeof(num) / sizeof(num[0]);
	bsort(num, sz, sizeof(num[0]), cmp);//cmpΪ�Զ���ȽϺ�������bsort������ָ�����
}
void bsort(void* base, int sz, int width, int(*cmp_fun)(void* e1, void* e2))
{
	int i = 0, j = 0, tmp = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)//ÿ�εĹ���
		{
			if (cmp(((char*)base) + j * width, ((char*)base) + (j + 1) * width) > 0)//ʵ��Ϊcmp����0
			{
				swap(((char*)base) + j * width, ((char*)base) + (j + 1) * width, width);
			}
		}
	}
}
int cmp(void* e1, void* e2)
{
	return ((struct stu*)e1) -> age - ((struct stu*)e2)->age;
}
void swap(char* p1, char* p2, int width)
{
	int i = 0;
	char tmp;
	for (i = 0; i < width; i++)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}
