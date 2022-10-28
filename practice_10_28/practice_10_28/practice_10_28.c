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
//}//指针-指针是两者  57之间的个数
//前提是两个指针在一个空间


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
//	//strlen求字符串长度
//	//递归
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}


//int main()
//{
//	int arr[] = {0};
//	//arr;//数组名是数字首元素地址
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
//	//arr[2]<==>*(p + 2)<==>*(2+p)<==>*(2+arr)乱七八糟
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
//}//可以交换

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa是二级指针变量
//	int** ppa=&pa;//pa也是一个变量，&pa取出内存对的起始地址
//
//	return 0;
//}

//指针数组-数组
//
//好孩子
//int main()
//{
//	int arr[10];
//	char ch[5];
//	//指针数组存放指针的数组
//	int *parr[5]=&arr;//z整形指针的数组
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
} s1,s2;//s1s2也是结构体变量
//s1,s2是全局变量

int main()
{
	struct Stu s = { {'w',20,3.14},"张三",30,"202005034" };
	//.   ->
	/*printf("%c", s.sb.c);
	printf("%s", s.id);*/

	struct Stu* ps = &s;
	printf("%c\n", (*ps).sb.c);
	return 0;
}