#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
//int main()
//{
//	int num1 = 0;
//	int i = 0;
//	int num3 = 0;
//	int num2[10] = { 0 };
//	int j = 1;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &num2[i]);
//	}
//	for (j = 1; j <= 10; j++)
//		for (i = 0; i < 10; i++)
//		{
//			if (num2[i] < num2[i - 1])
//			{
//				num3 = num2[i];
//				num2[i] = num2[i - 1];
//				num2[i - 1] = num3;
//			}
//			else
//			{
//				num3 = num2[i-1];
//				num2[i-1] = num2[i];
//				num2[i] = num3;
//			}
//		}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", num2[i]);
//	}
//	return 0;
//}

int main()
{
	int i, j, k, a[10];
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 10; i++)
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] > a[j])
			{

				k = a[i]; a[i] = a[j]; a[j] = k;
			}
		}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}