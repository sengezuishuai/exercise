#define _CRT_SECURE_NO_WARNINGS 1
#define ADD 5
#include<stdio.h>
#include<string.h>

//求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
int main()
{
	int Sn = 0;
	int i = 0;
	int k = 0;
	int p = 1;
	int o = 0;
	scanf("%d", &k);
	int c = k;
	for (i = 1; i <= k; i++)
	{
		for (o = 1; o <= c; o++)
		{
			p = p * o;
		}
		c--;
		Sn = Sn + p;
		p = 1;
	}
	printf("%d", Sn);
	return 0;
}