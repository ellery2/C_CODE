#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS (ROW + 2)
#define COLS (COL + 2)
#define LIMIT 10

void menu();
//初始化
void init_board(char board[ROWS][COLS], int rows, int cols, char ret);
//打印
void display_board(char board[ROWS][COLS], int row, int col);
//放炸弹
void random_board(char mine_board[ROWS][COLS], int row, int col, int limit);
//开始扫
int play_board(char mine_board[ROWS][COLS], char show_board[ROWS][COLS], int row, int col);
//输出附近雷数量
int check_board(char mine_board[ROWS][COLS], int x, int y);
//判断成功没有
int is_full(char show_board[ROWS][COLS], int row, int col);