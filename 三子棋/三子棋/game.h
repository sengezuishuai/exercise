#pragma once

#define ROW 3
#define COL 3
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

//��������

//��ʼ������
void IntBoard(char board[ROW][COL], int row, int col);

//��ӡ���̺���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char boaed[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ϸ״̬

//1.���Ӯ�� *
//2.����Ӯ�� #
//3.ƽ�� Q
//4.ƽ�� C
char IsWin(char board[ROW][COL],int row,int col);