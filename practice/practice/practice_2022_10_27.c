#define _CRT_SECURE_NO_WARNINGS 1

////测函数时间的模板
//clock_t start, stop;
////clock_t是clock()函数返回类型
//double duration;
////记录被测函数的运行时间，一秒为单位
//
//int main()
//{//不在测试范围的准备工作在clock（）之前
//	start = clock();//开始计时
//	MyFunction();//被测函数加在这里
//	stop = clock();//停止计时
//	duration = ((double)(stop - start)) / CLK_TCK;//计算运行时间
//	//其他不在测试范围的写在后面，例如输出duration的值
//	return 0;
//}

#include<stdio.h>
#include<time.h>
#include<math.h>

//void PrintN(int N);
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	PrintN(N);
//	return 0;
//}

//void PrintN(int N)
//{
//	int i;
//	for (i = 1; i < N; i++)
//	{
//		printf("%d\n", i);
//	}
//	return;
//}

////最高运行至3993
//void PrintN(int N)
//{
//	if (N)
//	{
//		PrintN(N - 1);
//		printf("%d\n", N);
//	}
//	return;
//}



//给定点x的值f(x)=a+ax......a*x^n
//double f1(int n, double a[], double x)
//{
//	int i;
//	double p = a[0];
//	for (i = 1; i <= n; i++)
//		p += (a[i] * pow(x, i));
//	return p;
//}

////f(x)=a+x*(a1+x*(a[n-1]+x*(a(n))...))
//double f2(int n, double a[], double x)
//{
//	int i;
//	double p = a[n];
//	for (i = n; i > 0; i--)
//		p = a[i - 1] + x * p;
//	return p;
//}

//int main()
//{
//	printf("%d",CLK_TCK);
//	return 0;
//}


////测函数时间的模板
//clock_t start, stop;
////clock_t是clock()函数返回类型
//double duration;
////记录被测函数的运行时间，一秒为单位
//
//int main()
//{//不在测试范围的准备工作在clock（）之前
//	start = clock();//开始计时
//	MyFunction();//被测函数加在这里
//	stop = clock();//停止计时
//	duration = ((double)(stop - start)) / CLK_TCK;//计算运行时间
//	//其他不在测试范围的写在后面，例如输出duration的值
//	return 0;
//}

//clock_t start, stop;
//double duration;
//#define MAXN 10
//#define MAXK 1e7//被测函数重复被调用次数
//
//int main()
//{
//	int i;
//	double a[MAXN];
//	for (i = 0; i < MAXN; i++)
//		a[i] = (double)i;
//	start = clock();
//	for(i=0;i<MAXK;i++)//这两个可以重复运行函数
//		f1(MAXN - 1, a, 1.1);//
//	stop = clock();
//	duration = ((double)(stop - start)) / CLK_TCK/MAXK;//计算函数单次运行时间
//	printf("ticks1=%f\n", (double)(stop - start));
//	printf("duration1=%6.2e\n", duration);
//	start = clock();
//	for(i=0;i<MAXK;i++)
//		f2(MAXN - 1, a, 1.1);
//	stop = clock();
//	duration = ((double)(stop - start)) / CLK_TCK/MAXK;
//	printf("ticks2=%f\n", (double)(stop - start));
//	printf("duration1=%6.2e\n", duration);
//}


////测函数时间的模板
//clock_t start, stop;
////clock_t是clock()函数返回类型
//double duration;
////记录被测函数的运行时间，一秒为单位
//
//int main()
//{//不在测试范围的准备工作在clock（）之前
//	start = clock();//开始计时
//	MyFunction();//被测函数加在这里
//	stop = clock();//停止计时
//	duration = ((double)(stop - start)) / CLK_TCK;//计算运行时间
//	//其他不在测试范围的写在后面，例如输出duration的值
//	return 0;
//}
  

//void time()
//{
//	clock_t start, stop;
//	double duration;
//#define MAXN 10
//#define MAXK 1e7//被测函数重复被调用次数
//	//测函数时间的模板
//	clock_t start, stop;
//	//clock_t是clock()函数返回类型
//	double duration;
//	//记录被测函数的运行时间，一秒为单位
//	start = clock();
//	main();
//	stop = clock();//停止计时
//	duration = ((double)(stop - start)) / CLK_TCK;//计算运行时间
//	//其他不在测试范围的写在后面，例如输出duration的值
//}//失败

int main()
{
	
	return 0;
}