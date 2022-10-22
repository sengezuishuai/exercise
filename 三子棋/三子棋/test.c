#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("********       1.play          ***\n");
	printf("********       0.tui           ***\n");
	printf("**********************************\n");

}

void game()
{
	//存储数据-二维数组
	char board[ROW][COL];
	//初始化棋盘-初始化空格
	IntBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	//接受游戏状态
	char ret = 0;
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);

		DisplayBoard(board,ROW,COL);
		//判断玩家是否胜利
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);

		DisplayBoard(board, ROW, COL);
		//判断电脑是否胜利
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢啦\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢啦\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}

