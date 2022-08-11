#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char ret;
	int i = 0;
	char str[10];
	gets(str);
	int num = 0;
	scanf("%d", &num);
	int len = strlen(str);
	char* p = str;
	char* p2 = str + len - num;
	if (num <= len / 2)
	{
		for (i = 0; i < num; i++)
		{
			ret = *p;
			*p = *p2;
			*p2 = ret;
			p++;
			p2++;
		}
	}
	printf("%s", str);
	return 0;
}
