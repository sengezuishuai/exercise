#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int a[10] = { 4,31,5,67,4,4,3,2,6,0 }, i, j, x=0,z;
//    for (i = 0; i < 9; i++) {
//        x = i;     //���Ƚ�a[i]������С�����������ҵ���С�������±�
//        for (j = i + 1; j < 10; j++) {
//            if (a[x] > a[j])  //a[x]������С�������ں����Ԫ��һ һ�Ƚϣ�
//                x = j;        //���a[x]>a[j]��ôx����j,�任��Сֵ���±�
//        }
//        if (x != i) {     //���x!=i��˵��x��ֵ�Ѿ��ı䣬�ҵ��˱�a[i]��С�������±�
//            z = a[i];       //����a[i]��a[x]�Ľ���
//            a[i] = a[x];
//            a[x] = z;
//        }
//    }
//    for (j = 0; j < 10; j++) {
//        printf("%d ", a[j]);
//    }
//}
//
//#define  _CRT_SECURE_NO_WARNINGS /*��ֹscanfʹ�ñ���*/
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
////��Ѱ�������Ԫ���������λ��
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
//int fun1(int m, int n);    //��Ҫ��������������Ҳ��������������д
//int fun2(int m, int n);
//int main()
//{
//    int m, n;
//    scanf("%d%d", &m, &n);    //���������� m n
//    printf("%d %d", fun1(m, n), fun2(m, n));//��һ�����ֱ�ӵ���fun1��//�ڶ�������fun2.
//    return 0;
//}
//int fun1(int m, int n)
//{
//    int s;
//    while (n != 0)//ע���жϵ���n�Ƿ�Ϊ0����Ϊ0����while��䣬
//    {
//        s = m % n;
//        m = n;
//        n = s;
//    }
//    return m;//���ص���m��ֵ��mΪ���Լ��
//}
//int fun2(int m, int n)
//{
//    int a;
//    a = fun1(m, n);//�����Լ����ֵ���� a 
//    return m * n / a;//����������С������������������ٳ������Լ���͵ó���
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
double P, Q, K, X;     //����ȫ�ֱ������������� 
void d0();
void d1();
void d2();
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    P = b * b - 4 * a * c;        // �� 
    Q = (-b) / (2 * a);
    K = 2 * a;
    X = sqrt(fabs(P)) / K;
    if (P < 0)         // ��< 0 ��ʵ������2������� 
    {
        d0();
    }
    if (P == 0)        // �� = 0 ʱ��������������ȵ�ʵ����
    {
        d1();
    }
    if (P > 0)         // �� > 0 ʱ����������������ȵ�ʵ���� 
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