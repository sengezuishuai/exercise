#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>

//int main()
//{
//	printf("����һ������");
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
////�������ڵ����Ƚ���������

//int main()
//{
//	int arr[] = { 10 };
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//	printf("%p", &arr);//ȡ����������ĵ�ַ
//	printf("%p\n", &arr[0]);
//	printf("%p", arr);
//	return 0;
//}
////����������Ԫ�ص�ַ
////����������
////1.sizero(������)-�����ʾ��������-�������������С���ֽ�
////2.&��������ʾ��������ȡ���������������ַ


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

//������
//test_c  ������Ϸ���߼�
//game.h  ������Ϸ��صĺ�����������������ͷ�ļ��İ���
//game.c  �����Ϸ��ʵ��


//Ь��תӢ��
//#define ADJUST 7.31
//int main()
//{
//	const double SCALE = 0.333;//const ��ǿ���޶������������ֵ�޷��ı�
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
////c���Կ���������ֵ

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



