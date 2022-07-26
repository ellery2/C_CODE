#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void manu();
int game(int num);
int main()
{
	int input = 0;
	manu();
	scanf("%d", &input);
	int ret = rand() % 100 + 1;
	switch (input)
	{
	case 1:
		printf("输入一个数字\n");
		game(ret);
		break;
	case 2:
		printf("退出");
		break;
	}
	srand((unsigned int)time(NULL));
	return 0;
}

void manu()
{
	printf("选择你想使用的功能\n");
	printf("********1.game**********\n");
	printf("********2.exit**********\n");
}

int game(int num)
{
	int inp;
	while (1)
	{
		scanf("%d", &inp);
		if (num > inp)
		{
			printf("小了\n");
		}
		else if (num < inp)
		{
			printf("大了\n");
		}
		else
		{
			printf("猜对了");
				break;
		}
	}
}

