#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"
void IntBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)

				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			//printf("---|---|---\n");
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}	
	}
}


void PlayerMove(char board[][COL], int row, int col)
{
	int x, y;
	printf("玩家走：>");
	while (1)
	{
		printf("请输入你的地址");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//坐标是否占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入");
			}
		}
		else
		{
			printf("坐标非法");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");

	while (1)
	{
		int x = rand() % row;

		int y = rand() % col;
		//判断占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';

			break;
		}
	}
}
 
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没有满
			}
		}
	}
	return 1;//棋盘满了
}

//1.玩家赢啦 *
//2.电脑赢啦 #
//3.平局 Q
//4.平局 C

//判断游戏是否有输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][1] != ' ');
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ');
		{
			return board[1][i];
		}
	}

	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ');
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ');
	{
		return board[1][1];
	}
	//判断平局

	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';
}
