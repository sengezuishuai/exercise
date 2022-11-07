#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	long num;
//	long sum = 0L;
//	int status;
//	printf("Please enter an integer to be sunmmed ");
//	printf("(q to quit); ");
//	status = scanf("%ld", &sum);
//	while (status == 1)
//	{
//		sum = sum * 2;
//		printf("Pleasue enter next integer (q to quit);");
//		status = scanf("%ld", &num);
//	}
//	printf("Those int egers sum to %ld.\n", sum);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	b=scanf("%d", &a);
//	printf("%d %d", a, b);
//	return 0;
//}

//int main()
//{
//	long num;
//	long sum = 0L;
//	_Bool input_is_good;
//	printf("Please enter an integer to be sunmmed ");
//	printf("(q to quit); ");
//	input_is_good = (scanf("%ld", &sum)==1);
//	while (input_is_good)
//	{
//		sum = sum * 2;
//		printf("Pleasue enter next integer (q to quit);");
//		input_is_good= scanf("%ld", &num);
//	}
//	printf("Those int egers sum to %ld.\n", sum);
//	return 0;
//}

//double power(double n, int p);
//
//int main()
//{
//	double x, xpowl;
//	int exp;
//	
//}

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	while (ch != 'g');
//	{
//		printf("%c", ch);
//		scanf("%c", &ch);
//	}
//	return 0;
//}

//int main() {
//	int x = 10, y = 10, i;
//	for (i = 0; x > 8; y = ++i)
//		printf("%d %d", x--, y);
//
//}
//int main()
//{
//	int x, y, z;
//	x = (y = (z = 10) + 5 - 5);
//	printf("%d %d %d", x, y, z);
//}

//int main()
//{
//	int a = 0;
//	a += (a = 12);
//	printf("%d\n", a);
//}

//int main()
//{
//	int num = 0;
//	while (num <= 2)
//	{
//		num += 1;
//		printf("%d\n", num);
//	}
//}

//int main()
//{
//	int y = 10;
//	do { y--; } while (--y);
//	printf("%d\n", y--);
//}

//int main()
//{
//	int x = 3, y = 4;
//	printf("%d", ++x > y-- ? x : y);
//}

//int main()
//{
//	int x = 1, y = 0, a = 0, b = 0;
//	switch(x)
//	{
//	case 0:
//		++a;
//		break;
//	case 1:b++; break;
//	case 2:a++, b++; break;
//	case 3:a++, b++;
//		printf("%d,%d", a, b);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 12345678;
//	printf("%4d\n", a);
//	return 0;
//}

//int main()
//{
//	int k = 0;
//	while (k == 1)
//		k++;
//}

//int main()
//{
//	int i = 10;
//	switch (i - 1)
//	{
//	case 9:i += 1;
//	case 10:i += 1;
//	case 11:i += 1;
//	case 12:i += 1;
//	}
//	printf("%d", i);
//}

//int main()
//{
//	int x; scanf("%d", &x);
//	if (x > 15)printf("%d", x - 5);
//	if (x > 10)printf("%d", x);
//	if (x > 5)printf("%d", x + 5);
//
//}

//int main()
//{
//	int s, t, a, b;
//	scanf("%d%d", &a, &b);
//	s = 1; t = 1;
//	if (a > 10)s = s + 1;
//	if (a > b)s = s + t;
//
//	else if (a == b)t = 5;
//	else t = 2 * s;
//	printf("s=%d,%d\n", s, t);
//}

//int main()
//{
//	int k = 1, n = 263;
//	do {
//		k *= n % 10;
//		n /= 10;
//	} while (n != 0);
//	printf("%d %d", k, n);
//}

//int main()
//{
//	int a = 24, b = 16, r;
//	while (b)
//	{
//		r = a % b; a = b; b = r;
//	}
//	printf("%d",a);
//}

//int main()
//{
//	int a = 8, b = 1;
//	a = a + b;
//	b = a * b;
//	printf("%d,%d", a, b);
//
//}

//int main()
//{
//	int sum = 10, n = 1;
//	while (n<3)
//	{
//		sum = sum - n;
//		n++;
//	}
//
//	printf("%d %d", n, sum);
//}

//int main()
//{
//	int x = 10, y = 20, t = 0;
//	if (x == y) {
//		t = x; x = y; y = t;
//	}
//	printf("%d %d", x, y);
//}

//int main()
//{
//	int a = 'A', b = 'z';
//	printf("%d %d", a, b);
//}

int main()
{
	int x, y;
	scanf("%d", &x);
	if (x < 0)
		y = 2 * x + 1;
	else if (x > 0)
		y = 2 * x - 1;
	else
		y = 0;
	printf("%d", y);
}