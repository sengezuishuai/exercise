#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}//ָ��-ָ��������  57֮��ĸ���
//ǰ��������ָ����һ���ռ�


//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str-start;
//}
//
//int main()
//{
//	//strlen���ַ�������
//	//�ݹ�
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}


//int main()
//{
//	int arr[] = {0};
//	//arr;//��������������Ԫ�ص�ַ
//
//	printf("%p\n", &arr);
//	printf("%p", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p<==>%p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//arr[2]<==>*(p + 2)<==>*(2+p)<==>*(2+arr)���߰���
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	printf("%d", p[2]);
//	return 0;
//}//���Խ���

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppa�Ƕ���ָ�����
//	int** ppa=&pa;//paҲ��һ��������&paȡ���ڴ�Ե���ʼ��ַ
//
//	return 0;
//}

//ָ������-����
//
//�ú���
//int main()
//{
//	int arr[10];
//	char ch[5];
//	//ָ��������ָ�������
//	int *parr[5]=&arr;//z����ָ�������
//	char* pch[5]=&arr;
//	return 0;
//}

struct B
{
	char c;
	short s;
	double d;
};

struct Stu
{
	struct B sb;
	char name[20];
	int age;
	char id[20];
} s1,s2;//s1s2Ҳ�ǽṹ�����
//s1,s2��ȫ�ֱ���

int main()
{
	struct Stu s = { {'w',20,3.14},"����",30,"202005034" };
	//.   ->
	/*printf("%c", s.sb.c);
	printf("%s", s.id);*/

	struct Stu* ps = &s;
	printf("%c\n", (*ps).sb.c);
	return 0;
}