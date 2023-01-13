#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
void Initboard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char isWin(char board[ROW][COL], int row, int col);
#include<time.h>
#include<stdlib.h>