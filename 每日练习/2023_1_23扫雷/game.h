#pragma once
#define ROW 9
#define COL 9
#define COLS COL+2
#define ROWS ROW+2
void InitBoard(char board[ROWS][COLS],int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);


