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
		printf("����һ������\n");
		game(ret);
		break;
	case 2:
		printf("�˳�");
		break;
	}
	srand((unsigned int)time(NULL));
	return 0;
}

void manu()
{
	printf("ѡ������ʹ�õĹ���\n");
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
			printf("С��\n");
		}
		else if (num < inp)
		{
			printf("����\n");
		}
		else
		{
			printf("�¶���");
				break;
		}
	}
}

