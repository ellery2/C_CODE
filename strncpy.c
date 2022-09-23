#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strncpy(char* st1, char* st2);
int main()
{
	int num = 0;
	scanf("%d", &num);
	char str1[] = "abcdqwe";
	char str2[] = "efgh";
	char* p = my_strncpy(str1, str2, num - 1);
	printf("%s", p);
	return 0;
}
char* my_strncpy(char* st1, char* st2, int num)
{
	char* p = st1;
	do
	{
		if (*st2 != '\0')
		{
			*st1++ = *st2++;
		}
		else
		{
			*st1 = '0';
		}
	} while (num--);
	return p;
}
