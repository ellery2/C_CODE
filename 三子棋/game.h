#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#define ROW 3
#define COL 3
void menu();
//��ʼ������
void init_board(char board[ROW][COL], int row, int col);
//��ӡ����
void print_board(char board[ROW][COL], int row, int col);
//�������
void display_board(char board[ROW][COL], int row, int col);
//��������
void computer_board(char board[ROW][COL], int row, int col);
//�ж���Ӯ
int is_win(char board[ROW][COL], int row, int col);
