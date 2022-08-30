#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#define ROW 3
#define COL 3
void menu();
//初始化棋盘
void init_board(char board[ROW][COL], int row, int col);
//打印棋盘
void print_board(char board[ROW][COL], int row, int col);
//玩家下棋
void display_board(char board[ROW][COL], int row, int col);
//电脑下棋
void computer_board(char board[ROW][COL], int row, int col);
//判断输赢
int is_win(char board[ROW][COL], int row, int col);
