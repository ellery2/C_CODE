#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int main()
{
	int input = 0;
	char ret;
	char board[ROW][COL];
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("你的选择是？\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			init_board(board, ROW, COL);
			print_board(board, ROW, COL);
			while (1)
			{
				display_board(board, ROW, COL);
				ret = is_win(board, ROW, COL);
				if (ret != 'c')
					break;
				print_board(board, ROW, COL);
				computer_board(board, ROW, COL);
				ret = is_win(board, ROW, COL);
				if (ret != 'c')
					break;
				print_board(board, ROW, COL);
			}
			if (ret == '*')
				printf("玩家赢\n");
			else if (ret == '#')
				printf("电脑赢\n");
			else if (ret == 'Q')
				printf("平局\n");
			print_board(board, ROW, COL);
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
