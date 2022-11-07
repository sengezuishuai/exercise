#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);//1.目标地址，2.原空间地址
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strcpy(char* dest, char* src)
//{
//	
//}

//断言assert()可以起到检查作用

//size_t=unsigned int 

//size_t my_strlen(const char* p)
//{
//	assert(p != NULL);
//	size_t i = 0;
//	while (*p++!='\0')
//	{
//		i++;
//	}
//	return i;
//}
//
//int main()
//{
//	char* p;
//	char arr[] = "hello";
//	p = &arr;
//	int a = my_strlen(p);
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	/*char ch = 'q';
//	char* pc = &ch;*/
//
//	char* ps = "hekko hjfdh";//ps存储的是第一个字
//	printf("%c", *ps);
//
//
//	return 0;
//}

int main()
{
	//指针数组是存放指针的数组。
	//int* arr[3];存放整形指针的数组
	//int a = 10, b = 20, c = 30;
	//int* arr[] = { &a,&b,&c };

	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6,7 };
	int c[] = { 3,4,5,6,7,8,9 };
	int* arr[3] = { a,b,c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", *(arr[i] + j));
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
