#pragma once
#define ROW 9
#define COL 9
#define COLS COL+2
#define ROWS ROW+2
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);
void Setmine(char board[ROWS][COLS], int row, int col);
