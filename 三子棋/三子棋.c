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
		printf("���ѡ���ǣ�\n");
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
				printf("���Ӯ\n");
			else if (ret == '#')
				printf("����Ӯ\n");
			else if (ret == 'Q')
				printf("ƽ��\n");
			print_board(board, ROW, COL);
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}
