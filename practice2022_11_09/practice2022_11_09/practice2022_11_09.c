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
//	int(*parr)[10] = &arr;//�������ָ��
//	return 0;
//}

//��������������Ԫ�صĵ�ַ
//��������
//1.sizeof����������-��ʾ��������
//2.&��������ʾ��������ȡ����������ĵ�ַ
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

//��ά�������Ԫ���ǣ���һ��
//p��һ������ָ��
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