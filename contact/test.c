#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("****************************************************\n");
	printf("******* 1.add             2.delete *****************\n");
	printf("******* 3.seak            4.modify *****************\n");
	printf("******* 5.print           5.sort   *****************\n");
	printf("******* 6.exit                     *****************\n");
	printf("****************************************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯
	InitContact(&con);
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SeaContact(&con);
			break;
		case MODIFY:
			ModContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	}while (input);
	return 0;
}
