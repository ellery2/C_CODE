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
	test2();//qsort整形排序
	return 0;
}
void test2()
{
	int i = 0;
	struct stu num[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 40} };
	int sz = sizeof(num) / sizeof(num[0]);
	bsort(num, sz, sizeof(num[0]), cmp);//cmp为自定义比较函数，在bsort里面用指针接收
}
void bsort(void* base, int sz, int width, int(*cmp_fun)(void* e1, void* e2))
{
	int i = 0, j = 0, tmp = 0;
	//几趟
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)//每次的过程
		{
			if (cmp(((char*)base) + j * width, ((char*)base) + (j + 1) * width) > 0)//实际为cmp大于0
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
