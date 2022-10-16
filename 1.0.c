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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误");
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
//	//在while循环中break可以跳出循环
//	//continue跳过之后的代码
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
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请输入密码(Y/N):>");
//	//getchar();
//	int tmp = 0;
//	//清理缓冲区的字符
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
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
//		printf("请输入密码：>");
//		scanf("%s", password);
////		if(password=="123456")这是错误的写法两个字符串比较不可以用==应该是strcmp
//		if (strcmp(password, "123456")==0)
//		{
//
//			printf("输入正确\n");
//				break;
//		}
//		else
//		{
//			printf("输出错误\n");
//		}
//		if (i == 3)
//		{
//			printf("输出错误");
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
//		printf("请选择/n");
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
//猜数字游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//创建菜单
void menu()
{
	printf("********************************************\n");
	printf("********  1. 进入游戏   0. 退出游戏  *******\n");
	printf("********************************************\n");
}
//进入猜数字游戏
void game()
{
	int ret = rand() % 100 + 1;   //用来生产1-100之间的随机数
	int guess = 0;
	int max = 100;
	int min = 0;
	while (1)
	{

		printf("请猜数字:>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
			max = guess;
			printf("猜测范围要在%d - %d\n", min, max);
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
			min = guess;
			printf("猜测范围要在%d - %d 之间\n", min, max);
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请选择(1/0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏");
			break;
		case 1:
			game();
			break;
		default:
			printf("选择错误，请重新输入！\n");
		}
	} while (input);
	return 0;
}










//while
//do while
//for
//strlen
//strcmp相同打印0字符串函数
//前加#include<string.h>
