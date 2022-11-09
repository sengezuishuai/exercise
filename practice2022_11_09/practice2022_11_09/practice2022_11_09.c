#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	double* d[5];
//	double(*pd)[5] = &d;
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;//是数组的指针
//	return 0;
//}

//数组名是数组首元素的地址
//两个例外
//1.sizeof（数组名）-表示整个数组
//2.&数组名表示整个数组取出整个数组的地址
//int main()
//{
//	int arr[10] = { 10 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pr)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *((*pr) + i));
//	}
//	return 0;
//}

void print(int arr[3][5], int r, int c)
{
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//二维数组的首元素是；第一行
//p是一个数组指针
void print2(int(*p)[5], int r, int c)
{
	int i = 0,j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i)) + j);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{5,5,6,7,8},{4.1,2,3,4} };
	//print(arr, 3, 5);
	print2(arr, 3, 5);
}