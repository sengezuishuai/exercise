#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	arr[0] = 0;
//	scanf("%d", &arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]<arr[i+1])
//		{
//			break;
//		}
//		a = arr[i + 1];
//		arr[i + 1] = arr[i];
//		arr[i] = a;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[9 - i]);
//	}
//	return 0;
//}
//void gongyinshu( int a,int b )
//{
//	int a1, a2, a3;
//
//}
//
//int main()
//{
//	int a, b;
//	gongyinshu(a,b);
//	return 0;
//}


//#include<stdio.h>  
//void main()   /*  辗转相除法求最大公约数 */
//{
//	int m, n, a, b, t, c;
//	printf("Input two integer numbers : \n");
//	scanf(" % d % d", &a, &b);
//	m = a;   n = b;
//	while (b != 0)  /* 余数不为0，继续相除，直到余数为0 */
//	{
//		c = a % b; a = b;  b = c;
//	}
//	printf("The largest common divisor : % d\n", a);
//	printf("The least common multiple : % d\n", m * n / a);
//}

#include <stdio.h>
#include <math.h>
double P, Q, K, X;     //定义全局变量并声明函数 
void d0();
void d1();
void d2();
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    P = b * b - 4 * a * c;        // ▲ 
    Q = (-b) / (2 * a);
    K = 2 * a;
    X = sqrt(fabs(P)) / K;
    if (P < 0)         // ▲< 0 无实数根，2个共轭复根 
    {
        d0();
    }
    if (P == 0)        // ▲ = 0 时，方程有两个相等的实数根
    {
        d1();
    }
    if (P > 0)         // ▲ > 0 时，方程有两个不相等的实数根 
    {
        d2();
    }
    return 0;
}
void d0(void)
{
    printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi", Q, X, Q, X);
}
void d1(void)
{
    printf("x1=%.3lf x2=%.3lf", Q + X, Q + X);
}
void d2(void)
{
    printf("x1=%.3lf x2=%.3lf", Q + X, Q - X);
}