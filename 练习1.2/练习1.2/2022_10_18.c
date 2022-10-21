#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<math.h>

函数的递归自己调用自己
 函数递归的两个条件
 ——存在限制条件，当满足这个条件时递归不再继续
 ——每次使用时接近这个条件
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);//1234
	print(num);//print函数可以打印参数每一位

	return 0;
}
int print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);

	}
	printf("%u ", n % 10);
}


栈溢出，每一个函数栈区都是有限的
int main()
{

	_test(1);
	return 0;
}
int _test(int n)
{
    if (n < 10000)
{
	_test(n + 1);
}
}
//www.stackoverflow.com
//程序员的知乎
//英文


//写递归的时候：
//——不可以死递归要有跳出条件
//——递归的层次不可以太深

int main()
{
	char arr[] = "bit";
	int b = my_strlen(arr);
	//printf("%d\n", strlen(arr));
	printf("%d", b);

	return 0;
}

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
		//return 1 + my_strlen(str++);//坑爹
	else
		return 0;
}
 

int main()
{
	char arr[] = "bit";
	//int b = my_strlen(arr);
	//printf("%d\n", strlen(arr));
	//printf("%d", b);
	printf("%d\n", my_strlen(arr));
	return 0;
}

//递归与迭代
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("%d\n", ret);
	return 0;
}


int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}

//第n个斐波那契数列
//递归可以但效率低
int count = 0;
int Fib(int n)
{
	//计算效率太低
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	printf("%d", count);//计算次数
	return 0;
}


//函数递归and迭代
int Fid(int n)
{
	int a = 1, b = 1, c = 1;
	while (n>2)
		{
		c = a + b;
		a = b;
		b = c;
		n--;
		}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fid(n);
	printf("%d\n", ret);
	return 0;
}


