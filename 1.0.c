#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include <xkeycheck.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}
// 
// 
// 
// 
// 
// 
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//
//	return 0;
//}
// 
// 
// 
// 
// 
//int main()
//{
//	int a = 1;
//	while (a>0)
//	{
//		
//		a++;
//		printf("%d\n", a);
//	}
//
//	return 0;
//
//} 
// 
// 
// 
// 
// 
//int main()
//{
//	int i = 1;
//	//��whileѭ����break��������ѭ��
//	//continue����֮��Ĵ���
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
// 
// 
// 
// 
// 
// 
//int main()
//{
//  
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}
// 
// 
// 
// 
// 
// 
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
// 
// 
// 
// 
// 
// 
// 
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("����������(Y/N):>");
//	//getchar();
//	int tmp = 0;
//	//�����������ַ�
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0'||ch>'9')
//
//			continue;
//		putchar(ch);
//
//	}
//
//	return 0;
//
//}
// 
// 
// 
// 
// 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
// 
// 
// 
// 
// 
// 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}
// 
// 
// 
// 
// 
// 
// 
// 
//#include<string>
//int main()
//{
//	char arr1 [] = "welcome to china!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//
//	while (left <= right)
//{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//
//	}
//	return 0;
//}
// 
// 
// 
// 
// 
// 
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
////		if(password=="123456")���Ǵ����д�������ַ����Ƚϲ�������==Ӧ����strcmp
//		if (strcmp(password, "123456")==0)
//		{
//
//			printf("������ȷ\n");
//				break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		if (i == 3)
//		{
//			printf("�������");
//		}
//	}
//	return 0;
//}
// 
// 
// 
// 
// 
// 
// 
//#include<stdib.h>
//int main()
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��/n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//
//			break;
//		case 2:
//			printf("");
//			break;
//		default;
//			printf("");
//			break;
//		}while (input);
//	}
//	return 0;
//}
// 
// 
// 
// 
// 
//void menu()
//{
//	printf("***************************    ");
//	printf("********  1.play  *************");
//	printf("********  2.exit  *************");
//	printf("***************************    ");
//}
#define _CRT_SECURE_NO_WARNINGS
//��������Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//�����˵�
void menu()
{
	printf("********************************************\n");
	printf("********  1. ������Ϸ   0. �˳���Ϸ  *******\n");
	printf("********************************************\n");
}
//�����������Ϸ
void game()
{
	int ret = rand() % 100 + 1;   //��������1-100֮��������
	int guess = 0;
	int max = 100;
	int min = 0;
	while (1)
	{

		printf("�������:>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
			max = guess;
			printf("�²ⷶΧҪ��%d - %d\n", min, max);
		}
		else if (guess < ret)
		{
			printf("��С��\n");
			min = guess;
			printf("�²ⷶΧҪ��%d - %d ֮��\n", min, max);
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��(1/0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ");
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ��������������룡\n");
		}
	} while (input);
	return 0;
}










//while
//do while
//for
//strlen
//strcmp��ͬ��ӡ0�ַ�������
//ǰ��#include<string.h>
