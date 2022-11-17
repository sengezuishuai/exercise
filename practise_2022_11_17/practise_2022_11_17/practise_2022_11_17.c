#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//int main()
//{
//	char arr[1000];
//	int m = strlen(arr);
//	char b=fuck(arr,m);
//	int i = 0;
//	scanf("%s", arr);
//	for(i=0;i<m;i++)
//	{
//		printf("%c", b[i]);
//	}
//	return 0;
//}
//
//char* fuck(char a[],int m)
//{
//	static int newa[100];
//	scanf("%s", a);
//	int i, j = m - 1;
//	for (i = 0; i < m; i++)
//	{
//		newa[i] = a[j];
//		j--;
//	}
//	char* p = &newa[0];
//	return p;
//}

int main()
{
	int arr[5][5] = { 0 };
	int i, j;
	for(i=0;i<5;i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &arr[i][j]);
	int a = arr[0];
	int b = 0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if (a <= arr[i])
			{
				a = arr[i];
				b = i;
			}
		}
	printf("%d %d", &a, &b);
	return 0;
}