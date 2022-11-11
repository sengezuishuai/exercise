#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 0;
//	scanf("%d", &b);
//	return 0;
//} 

//int main()
//{
//	printf("%d", sizeof(int));
//}

//int main()
//{
//	int i = 0;
//	printf("0x%x\n", &i);
//	printf("%p", &i);
//}

//int search(int key, int a[], int length);
//
//int main()
//{
//	{
//		int a[] = { 1,2,3,4,5,6,7,8,9,10,2,5,6 };
//		int i;
//	}
//	int x;
//	int loc;
//	printf("请输入一个数字：");
//	scanf("%d", &x);
//	loc = search(x, a, sizeof(a) / sizeof(a[0]));
//	if (loc != -1)
//	{
//		printf("%d不在第%d这个位置上");
//	}
//	else
//	{
//		printf("%d不存在\n", x);
//	}
//	return 0;
//}
//
//int search(int key, int a[], int length)
//{
//	int ret = -1;
//	int i;
//	for (i = 0; i < length; i++)
//	{
//		if (a[i] == key)
//		{
//			ret = i;
//			break;
//		}
//	}
//}

//int main()
//{
//	int m[][3] = { 1,4,7,2,5,8,3,6,9, };
//	int i, j, k = 2;
//	for (i = 0; i < 3; i++) {
//		printf("%d", m[k][i]);
//	}
//}

//int search(int arr[],int longs)
//{
//	int i;
//	int ret = -1;
//	for (i = 0; i < longs; i++)
//	{
//
//	}
//	return;
//}


//int main()
//{
//	int a[] = { 32,4,45,4,5,6,5,6,7,6,4,3,344 };
//	int r = search(a,sizeof(a) / sizeof(a[0]));
//	printf("%d", r);
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", a);
//	printf("%p\n", &a);
//	printf("%p\n", 10);
//	printf("%p\n", 10);
//	scanf("%d\n", &a);
//	printf("%p\n", &a);
//	printf("%p\n", a);
//}

//交换的一种思路
//int main()
//{
//	int a = 10;
//	int b = 9;
//	b = a + b;
//	a = b - a;
//	b = b - a;
//	printf("%d %d", a, b);
//}

//int max(int a[],int wei,int find)
//{
//	int baipiao=-1;
//	int i;
//	int j = wei;
//	for (i = 0; i < wei ; i++)
//	{
//		j = j / 2;
//		if (a[j] == find)
//			baipiao = find;
//		if (find > a[j])
//			j = (j + 2 * j) / 2;
//	}
//	return baipiao;
//}


//int main()
//{
//	int a[] = { 12,3,4,5,6,7,8,9,101,11,23,55 };
//	int p = 0;
//	scanf("%d", &p);
//	int i = max(a, sizeof(a) / sizeof(a[0]),p);
//	printf("%d", i);
//	return 0;
//}

//int search(int key, int a[], int len)
//{
//	int ret = -1;
//	for (int i = 0; i < len; i++)
//	{
//		if (key == a[i])
//		{
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int a[] = { 1,3,2,5,12,14,23,6,9,45 };
//	int r = search(12,a,sizeof(a)/sizeof(a[0]));
//	printf("%d", r);
//	return 0;


//int search(int key, int a[], int len)
//{
//	int ret = -1;
//	int left = 0;
//	int right = len - 1;
//	while ( right > left )
//	{
//		int mid = (left + right) / 2;
//		if ( a[mid] == k )
//		{
//			ret = mid;
//			break;
//		}
//		else if ( a[mid] > k )
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int k = 10;
//	int r = search(k, amount, sizeof(amount) / sizeof(amount[0]));
//}





