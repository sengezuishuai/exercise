#define _CRT_SECURE_NO_WARNINGS 1

////�⺯��ʱ���ģ��
//clock_t start, stop;
////clock_t��clock()������������
//double duration;
////��¼���⺯��������ʱ�䣬һ��Ϊ��λ
//
//int main()
//{//���ڲ��Է�Χ��׼��������clock����֮ǰ
//	start = clock();//��ʼ��ʱ
//	MyFunction();//���⺯����������
//	stop = clock();//ֹͣ��ʱ
//	duration = ((double)(stop - start)) / CLK_TCK;//��������ʱ��
//	//�������ڲ��Է�Χ��д�ں��棬�������duration��ֵ
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

////���������3993
//void PrintN(int N)
//{
//	if (N)
//	{
//		PrintN(N - 1);
//		printf("%d\n", N);
//	}
//	return;
//}



//������x��ֵf(x)=a+ax......a*x^n
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


////�⺯��ʱ���ģ��
//clock_t start, stop;
////clock_t��clock()������������
//double duration;
////��¼���⺯��������ʱ�䣬һ��Ϊ��λ
//
//int main()
//{//���ڲ��Է�Χ��׼��������clock����֮ǰ
//	start = clock();//��ʼ��ʱ
//	MyFunction();//���⺯����������
//	stop = clock();//ֹͣ��ʱ
//	duration = ((double)(stop - start)) / CLK_TCK;//��������ʱ��
//	//�������ڲ��Է�Χ��д�ں��棬�������duration��ֵ
//	return 0;
//}

//clock_t start, stop;
//double duration;
//#define MAXN 10
//#define MAXK 1e7//���⺯���ظ������ô���
//
//int main()
//{
//	int i;
//	double a[MAXN];
//	for (i = 0; i < MAXN; i++)
//		a[i] = (double)i;
//	start = clock();
//	for(i=0;i<MAXK;i++)//�����������ظ����к���
//		f1(MAXN - 1, a, 1.1);//
//	stop = clock();
//	duration = ((double)(stop - start)) / CLK_TCK/MAXK;//���㺯����������ʱ��
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


////�⺯��ʱ���ģ��
//clock_t start, stop;
////clock_t��clock()������������
//double duration;
////��¼���⺯��������ʱ�䣬һ��Ϊ��λ
//
//int main()
//{//���ڲ��Է�Χ��׼��������clock����֮ǰ
//	start = clock();//��ʼ��ʱ
//	MyFunction();//���⺯����������
//	stop = clock();//ֹͣ��ʱ
//	duration = ((double)(stop - start)) / CLK_TCK;//��������ʱ��
//	//�������ڲ��Է�Χ��д�ں��棬�������duration��ֵ
//	return 0;
//}
  

//void time()
//{
//	clock_t start, stop;
//	double duration;
//#define MAXN 10
//#define MAXK 1e7//���⺯���ظ������ô���
//	//�⺯��ʱ���ģ��
//	clock_t start, stop;
//	//clock_t��clock()������������
//	double duration;
//	//��¼���⺯��������ʱ�䣬һ��Ϊ��λ
//	start = clock();
//	main();
//	stop = clock();//ֹͣ��ʱ
//	duration = ((double)(stop - start)) / CLK_TCK;//��������ʱ��
//	//�������ڲ��Է�Χ��д�ں��棬�������duration��ֵ
//}//ʧ��

int main()
{
	
	return 0;
}