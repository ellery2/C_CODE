#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
enum num
{
	Exit,
	add,
	Delete,
	search,
	show,
	change,
	sort
};
int main()
{
	int input = 0;
	struct contact con;
	init_con(&con);
	do
	{
		printf("你的选择是？\n");
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case add:
			add_con(&con);
			break;
		case Delete:
			del_con(&con);
			break;
		case search:
			search_con(&con);
			break;
		case show:
			show_con(&con);
			break;
		case change:
			change_con(&con);
			break;
		case sort:
			sort_con(&con);
			break;
		case Exit:
			break;
		default:
			printf("请重新输入\n");
		}
	} while (input);
	free(con.data);
	return 0;
}
