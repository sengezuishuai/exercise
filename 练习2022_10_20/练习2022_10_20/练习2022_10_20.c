#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>

//int main()
//{
//	printf("先来一个练手");
//	return 0;
//}

//int bubble_sort(int arr[])
//{
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz+1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,84554,55,52,54,5484,24,5,54};
//	bubble_sort(arr);
//	
//	return 0;
//}
////两个相邻的数比较甚至交换

//int main()
//{
//	int arr[] = { 10 };
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//	printf("%p", &arr);//取出的是数组的地址
//	printf("%p\n", &arr[0]);
//	printf("%p", arr);
//	return 0;
//}
////数组名是首元素地址
////有两个例外
////1.sizero(数组名)-数组表示整个数组-计算整个数组大小是字节
////2.&数组名表示整个数组取出的是整个数组地址


//int bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	//int arr[] = { 9,84554,55,52,54,5484,24,5,54};
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	bubble_sort(arr);
//	
//	return 0;
//}

//三子棋
//test_c  测试游戏的逻辑
//game.h  关于游戏相关的函数申明，符号申明头文件的包含
//game.c  相关游戏的实践


//鞋码转英尺
//#define ADJUST 7.31
//int main()
//{
//	const double SCALE = 0.333;//const 是强制限定符可以让这个值无法改变
//	double shoe, foot=0;
//	shoe = 9.0;
//	foot = SCALE * shoe + ADJUST;
//	printf("Shoe size (men's) foot length\n");
//	printf("%10.lf %15.2f inches\n", shoe, foot);
//
//	return 0;
//}

//#define ADJUST 7.13
//int main()
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//	printf("Shoe size (men`s) foot length\n");
//	shoe = 3.0;
//	while (shoe < 18.5)
//	{
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1.0;
//	}
//	printf("If the shoe fits,wear it.\n");
//	return 0;
//}

//int main()
//{
//	int jane, tarzen, cheeta;
//	cheeta = tarzen = jane = 68;
//	printf("           cheeta   tarzan  jane");
//	printf("First round score %4d %8d %8d\n", cheeta, tarzen, jane);
//
//	return 0;
//}
////c语言可以连续赋值

//int main()
//{
//	int num = 1;
//	while (num < 21)
//	{
//		printf("%4d %6d\n", num, num * num);
//		num = num + 1;
//	}
//	return 0;
//}

//#define SQUARES 64
//int main()
//{
//	const double CROP = 2E16;
//	double current, total;
//	int count = 1;
//	printf("square   grans    total    ");
//	printf("fraction of \n");
//	printf("    addded      grains  ");
//	printf("world total");
//
//	total = current = 1.0;
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current,total,total/CROP);
//	while (count < SQUARES)
//	{
//		count++;
//		current = 2.0 * current;
//		total = total + current;
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current);
//
//	}
//	printf("That`s all.\n");
//	return 0;
//}



