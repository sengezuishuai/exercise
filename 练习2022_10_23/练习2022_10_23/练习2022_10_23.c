#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int main()
{
	int a = 0, b = 0;
	scanf("%d", &a);
	b = math(a);
	printf("%d", b);

	return 0;

}

int math(int i)
{
	int a = 1, b = 0, c = 1;

	for (b = 1; b < i; b++)
	{
		a = b * a;

	}
	c = 1 + math(i - 1);
	return c;
}

#include <stdio.h>
int main(void)
{
    int n;
    long long Sn = 0, j;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        j = 1;
        for (int m = 0; m < i; m++)
            j *= (m + 1);
        Sn = Sn + j;
    }
    printf("%lld", Sn); //long long的格式指定符为%lld
    return 0;
}

