#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int a[10] = { 4,31,5,67,4,4,3,2,6,0 }, i, j, x=0,z;
//    for (i = 0; i < 9; i++) {
//        x = i;     //，先将a[i]当成最小的数，遍历找到最小的数的下标
//        for (j = i + 1; j < 10; j++) {
//            if (a[x] > a[j])  //a[x]当成最小的数，于后面的元素一 一比较，
//                x = j;        //如果a[x]>a[j]那么x等于j,变换最小值的下标
//        }
//        if (x != i) {     //如果x!=i，说明x的值已经改变，找到了比a[i]还小的数的下标
//            z = a[i];       //进行a[i]和a[x]的交换
//            a[i] = a[x];
//            a[x] = z;
//        }
//    }
//    for (j = 0; j < 10; j++) {
//        printf("%d ", a[j]);
//    }
//}
//
//#define  _CRT_SECURE_NO_WARNINGS /*防止scanf使用报错*/
//#include<stdio.h>
//#define M 5
//#define N 5
//
//int seekMax(int(*data)[N], int m, int n);
//
//int main()
//{
//	int data[M][N] = {
//		{1,5,8,3,6},
//		{8,6,9,48,62},
//		{19,33,56,-66,48},
//		{13,999,51,23,54},
//		{9,4,8,-99,0}
//	};
//	int Max;
//	Max = seekMax(data, M, N);
//	printf("max = %d\n", Max);
//	printf("\n");
//	return 0;
//}
//
////找寻数组最大元素与其具体位置
//int seekMax(int(*data)[N], int m, int n)
//{
//	int maxNum = data[0][0];
//	int i, j, max_i = 0, max_j = 0;
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (maxNum < *(*(data + i) + j))
//			{
//				maxNum = *(*(data + i) + j);
//				max_i = i;
//				max_j = j;
//			}
//		}
//	}
//	printf("max_i = %d , max_j = %d\n", max_i, max_j);
//	return maxNum;
//}

//#include<stdio.h>
//int gcd(int i, int j);
//int LCM(int m, int n);
//
//int main(void)
//{
//    int M, N, lcm = 1;
//    while (scanf("%d %d", &M, &N) != EOF)
//    {
//        printf("%d ", gcd(M, N));
//        printf("%d", LCM(M, N));
//    }
//    return 0;
//}
//
//int gcd(int i, int j)
//{
//    int mo;
//    while (j > 0)
//    {
//        mo = i % j;
//        i = j;
//        j = mo;
//    }
//    return i;
//}
//
//int LCM(int m, int n)
//{
//    int lcm;
//    lcm = m * n / gcd(m, n);
//    return lcm;
//}
//
//
//#include<stdio.h>
//int fun1(int m, int n);    //这要声明两个函数。也可以像下面那样写
//int fun2(int m, int n);
//int main()
//{
//    int m, n;
//    scanf("%d%d", &m, &n);    //输入两个数 m n
//    printf("%d %d", fun1(m, n), fun2(m, n));//是一个输出直接调用fun1，//第二个调用fun2.
//    return 0;
//}
//int fun1(int m, int n)
//{
//    int s;
//    while (n != 0)//注意判断的是n是否为0，不为0则不做while语句，
//    {
//        s = m % n;
//        m = n;
//        n = s;
//    }
//    return m;//返回的是m的值，m为最大公约数
//}
//int fun2(int m, int n)
//{
//    int a;
//    a = fun1(m, n);//把最大公约数的值赋给 a 
//    return m * n / a;//输出求的是最小公倍数，把两数相乘再除以最大公约数就得出答案
//}
//
//#include<stdio.h>
//int n, m;
//int gcd(int a, int b)
//{
//    if (b == 0)    return a;
//    return gcd(b, a % b);
//}
//int lcm(int a, int b)
//{
//    return a * b / gcd(a, b);
//}
//int main()
//{
//    scanf("%d%d", &n, &m);
//    printf("%d %d", gcd(n, m), lcm(n, m));
//    return 0;
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