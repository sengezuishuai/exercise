#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][3] = { 0 };
//	int arr1[3][3] = { 0 };
//	for(i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//		{
//			arr1[i][j] = arr[i][j];
//		}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			arr[i][j] = arr1[j][i];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int zifuchuan[] = { 0 };
//	scanf("%c", &zifuchuan);
//	int i = sizeof(zifuchuan) / sizeof(zifuchuan[0]);
//	for (int j = 0; j < i; j++)
//		printf("%c", zifuchuan[i - 1 - j]);
//	return 0;
//}

int main(void)
{
	char arr[100] = { 0 };
	gets_s(arr);
	printf("%s", arr);
	return 0;
}