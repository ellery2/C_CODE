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
//��ʼ��
void init_board(char board[ROWS][COLS], int rows, int cols, char ret);
//��ӡ
void display_board(char board[ROWS][COLS], int row, int col);
//��ը��
void random_board(char mine_board[ROWS][COLS], int row, int col, int limit);
//��ʼɨ
int play_board(char mine_board[ROWS][COLS], char show_board[ROWS][COLS], int row, int col);
//�������������
int check_board(char mine_board[ROWS][COLS], int x, int y);
//�жϳɹ�û��
int is_full(char show_board[ROWS][COLS], int row, int col);