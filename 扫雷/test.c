#define _CRT_SECURE_NO_WARNINGS 1
//show���̴�ӡ���������֣�
#include "game.h"
int main()
{
	int input = 0;
	int num = 0;
	char mine_board[ROWS][COLS];
	char show_board[ROWS][COLS];
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���ѡ����\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			init_board(mine_board, ROWS, COLS, '0');
			init_board(show_board, ROWS, COLS, '*');
			//��ը��
			random_board(mine_board, ROW, COL, LIMIT);
			display_board(mine_board, ROW, COL);
			do
			{
				display_board(show_board, ROW, COL);
				num = play_board(mine_board, show_board, ROW, COL);
				if (is_full(show_board, ROW, COL) == 1)
				{
					printf("��ɹ���");
					break;
				}
			} while (num);
			if (num == 0)
			{
				display_board(mine_board, ROW, COL);
			}
			break;
		case 0:
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
	return 0;
}
