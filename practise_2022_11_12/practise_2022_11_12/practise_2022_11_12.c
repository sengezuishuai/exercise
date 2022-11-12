#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0, j = 0, k = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2]);
//	}
//	j = arr[0][0] + arr[1][1] + arr[2][2];
//	k = arr[0][2] + arr[1][1] + arr[2][0];
//	printf("%d %d", j, k);
//}

//int main()
//{
//	int arr[10];
//	int i = 0, j = 0;
//	scanf("%d%d%d%d%d%d%d%d%d", &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
//	scanf("%d", &arr[0]);
//	for (i = 0; i <= 8; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			i = arr[i + 1];
//			arr[i + 1] = arr[i];
//			arr[i] = i;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//}

//int main()
//{
//    int a[10];
//    int i = 0;
//    int t;
//    for (i = 0; i < 9; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    a[9] = 0;
//    int x;
//    scanf("%d", &x);
//    for (i = 0; i < 10; i++)
//    {
//        if (x >= a[i] && x <= a[i + 1])
//        {
//            t = i + 1;
//            break;
//        }
//    }
//    //  printf("%d\n",t);
//    for (i = 9; i > t; i--)
//    {
//        a[i] = a[i - 1];
//    }
//    a[t] = x;
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", a[i]);
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d", &x);
//	if (x < 1)
//		y = x;
//	else if (1 <= x && x < 10)
//		y = 2 * x - 1;
//	else
//		y = 3 * x - 11;
//	printf("%d", y);
//}
//int main()
//{
//    int n;
//    printf("请输入成绩:");
//    scanf("%d", &n);
//    n = n / 10;
//    char g;
//    switch (n)
//    {
//    case 10:
//    case 9:
//        g = 'A';
//        break;
//    case 8:
//        g = 'B';
//        break;
//    case 7:
//        g = 'C';
//        break;
//    case 6:
//        g = 'D';
//        break;
//    default:
//        g = 'E';
//        break;
//    }
//    printf("等级评定为:%c\n", g);
//}

//#include <stdio.h>
//int main()
//{
//    int i, j, k, n;
//    for (i = 100; i < 1000; i++)
//    {
//        j = i % 10;
//        k = i / 10 % 10;
//        n = i / 100;
//        if (j * j * j + k * k * k + n * n * n == i)
//            printf("%5d\n", i);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main() {
//	int N;
//	int sum = 1;
//	scanf("%d", &N);
//
//	for (int i = 1; i <= N - 1; i++) {
//		sum = (sum + 1) * 2;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	float n, s = 0, t = 1;
//	for (n = 1; n <= 20; n++) {
//		t *= n;
//		s += t;
//	}
//	printf("1+2!+3!...+20!=%e\n", s);//C语言中%e：以指数形式输出实数
//	return 0;
//}



//int main()
//{
//    int a[10];
//    int i = 0;
//    int t;
//    for (i = 0; i < 9; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    a[9] = 0;
//    int x;
//    scanf("%d", &x);
//    for (i = 0; i < 10; i++)
//    {
//        if (x >= a[i] && x <= a[i + 1])
//        {
//            t = i + 1;
//            break;
//        }
//    }
//    //  printf("%d\n",t);
//    for (i = 9; i > t; i--)
//    {
//        a[i] = a[i - 1];
//    }
//    a[t] = x;
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", a[i]);
//    }
//    return 0;
//}

int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", arr);
	}
}