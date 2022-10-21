#pragma once

#define ROW 3
#define COL 3
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

//函数申明

//初始化棋盘
void IntBoard(char board[ROW][COL], int row, int col);

//打印棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//外界下棋
void PlayerMove(char boaed[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断游戏状态

//1.玩家赢啦 *
//2.电脑赢啦 #
//3.平局 Q
//4.平局 C
char IsWin(char board[ROW][COL],int row,int col);