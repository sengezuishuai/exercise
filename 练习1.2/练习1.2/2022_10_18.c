#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<math.h>

�����ĵݹ��Լ������Լ�
 �����ݹ����������
 �������������������������������ʱ�ݹ鲻�ټ���
 ����ÿ��ʹ��ʱ�ӽ��������
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);//1234
	print(num);//print�������Դ�ӡ����ÿһλ

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


ջ�����ÿһ������ջ���������޵�
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
//����Ա��֪��
//Ӣ��


//д�ݹ��ʱ��
//�������������ݹ�Ҫ����������
//�����ݹ�Ĳ�β�����̫��

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
		//return 1 + my_strlen(str++);//�ӵ�
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

//�ݹ������
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

//��n��쳲���������
//�ݹ���Ե�Ч�ʵ�
int count = 0;
int Fib(int n)
{
	//����Ч��̫��
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
	printf("%d", count);//�������
	return 0;
}


//�����ݹ�and����
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


