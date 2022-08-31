#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   2.exit   ******\n");
	printf("************************\n");
}

void init_board(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}

void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void random_board(char board[ROWS][COLS], int row, int col, int limit)
{
	int num = 0;
	while (limit)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			limit--;
		}
	}
}


int check_board(char mine_board[ROWS][COLS], int x, int y)
{
	return (mine_board[x + 1][y + 1] + mine_board[x - 1][y - 1] +
		mine_board[x - 1][y] + mine_board[x - 1][y + 1] +
		mine_board[x][y - 1] + mine_board[x][y + 1] +
		mine_board[x + 1][y - 1] + mine_board[x + 1][y] - 8 * '0');
}


int play_board(char mine_board[ROWS][COLS], char show_board[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	int ret = 0;
	while (1)
	{
		printf("输入坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine_board[x][y] != '1')
			{
				ret = check_board(mine_board, x, y);
				show_board[x][y] = ret + '0';
				return 1;
			}
			else
			{
				printf("你死了\n");
				return 0;
			}
		}
		else
		{
			printf("重新输入\n");
		}
	}
}


int is_full(char show_board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0, num = 0;
	for (i = 1; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (show_board[i][j] == '*')
				num++;
		}
	}
	if (num == 10)
		return 1;
}

