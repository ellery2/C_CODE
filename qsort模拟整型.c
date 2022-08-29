#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test1();
void bsort(void* base, int sz, int width, int(* cmp_fun)(void* e1, void* e2));
int cmp(void* e1, void* e2);
void swap(char* p1, char* p2, int width);
int main()
{
	test1();//qsort��������
	return 0;
}
void test1()
{
	int i = 0;
	int arr[10] = { 9,8,6,5,4,2,1,7,3,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bsort(arr, sz, sizeof(arr[0]), cmp);//cmpΪ�Զ���ȽϺ�������bsort������ָ�����
	for (i = 0; i < sz; i++)
	{
		printf("%d", *(arr + i));
	}
}
void bsort(void* base, int sz, int width, int(*cmp_fun)(void* e1, void* e2))
{
	int i = 0, j = 0, tmp = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)//ÿ�εĹ���
		{
			if (cmp(((char*) base) + j * width, ((char*)base) + (j + 1) * width) > 0)//ʵ��Ϊcmp����0
			{
				swap(((char*)base) + j * width, ((char*)base) + (j + 1) * width, width);
			}
		}
	}
}
int cmp(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
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