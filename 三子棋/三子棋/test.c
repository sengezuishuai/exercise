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
	//�洢����-��ά����
	char board[ROW][COL];
	//��ʼ������-��ʼ���ո�
	IntBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	//������Ϸ״̬
	char ret = 0;
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);

		DisplayBoard(board,ROW,COL);
		//�ж�����Ƿ�ʤ��
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);

		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�ʤ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ��");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��");
	}
	else
	{
		printf("ƽ��");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}