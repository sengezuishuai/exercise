#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//		//strcpy( 1 , 2 );1代表目的地，2代表要移动的东西,需要头文件string。h
//		strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5); //第一个是名字第二个是要替换的第三个是要替换的位数
// //函数名 函数参数
//	printf("%s", arr);
//	return 0;
//
//}

//自定义函数

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 50;
//	printf("%d,%d\n", a, b);
//	swap(&a, &b);
//	printf("%d,%d\n", a, b);
//	return 0;
//}
// 
// 
// 
//int swap(int* pa, int* pb)
//{
//	int z = 0;
//	z=*pa;
//	*pa = *pb;
//	*pb = z;
//	return 0;
//}
//函数需要改变主函数的值的时候需要使用指针
//不改变时则不用


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa=20;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//
//	float a = 1.0;
//	printf("%f\n", a);
//	printf("%.2f", a);
//	return 0;
//}
//int main()
//{
//	int a = 10, b = 20;
//	get_max(a, b);
//	int max = get_max;
//	printf("max = %d\n", max);
//
//	return 0;
//}
//get_max(int x,int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//main=我；get_max张三


//菜狗
//int main()
//{
//	
//	int i = 0;
//	for (i = 100 ; i <= 200 ; i++)
//	{
//		if (is_prime(i))
//			printf("%d", i);
//	}
//	return 0;
//}
//int is_prime(int z)
//{
//	int y;
//	y = z / 2;
//	return y ;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i)==1)
//		{
//
//			//count++;
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}

//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap(y) == 1)
//		{
//			printf("%d\n", y);
//		}
//	}
//	return 0;
//}
//
////一个函数不写返回类型默认int类型
//int is_leap(int z)
//{
//	if (z % 4 == 0 && z % 100 !=0 || 0 == z % 400)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}

//int main()
//{
//	int arr[]={ 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//
//	return 0;
//}
//int binary_search(int a[], int k, int s)
//
//{
//	int left = 0;
//	int right = s - 1;
//	int mid = (left + right) / 2;
//	if (a[mid] > k)
//	{
//		right = mid - 1;
//
//	}
//	else if (a[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else
//	{
//		return mid;
//	}
//	return -1;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9 || a == 9)
//			printf("%d", a);
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	double b = 0, c = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			b = 1.0 / i;
//		if (i % 2 == 0)
//			b = -1.0 / i;
//		c = b + c;
//		
//	}
//	printf("%lf", c);
//	return 0;
//}


//int main()
//{
//
//	return 0;
//}


//int main()
//{
//    int sum;
//    int i, j;
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            if (j <= i)//防止输出两遍
//            {
//                sum = i * j;
//                printf("%d*%d=%d\t", i, j, sum);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//	int a, b, c;
//
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= 9; b++)
//		{
//			if (a >=  b)
//			{
//				c = a * b;
//				printf("%d*%d=%d ", a, b, c);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//
//	int a[10];
//
//	int Max = 0;
//
//	for (int i = 0; i < 10; i++) {
//
//		scanf("%d", &a[i]);
//
//	}
//
//	for (int i = 0; i < 10; i++) {
//
//		if (a[i] > Max) {
//
//			Max = a[i];
//
//		}
//
//	}
//
//	printf("十个数中最大的是：%d", Max);
//
//	return 0;
//
//}


int main()
{
	int a = 0;
	printf("%d", a);
	return 0;
}