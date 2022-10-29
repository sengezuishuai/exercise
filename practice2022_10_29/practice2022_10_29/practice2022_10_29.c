#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>

//int main()
//{
//	int i = 3;
//	float f = 2.3f;
//	double d = 3.2; long l = 10;
//	printf("%f", 10 + 'a' + i * f - d / l);
//	return 0;
//}

//int main()
//{
//	int i = 1, j = 1, k = 2;
//	if ((j++ || k++) && i++)
//		printf("%d,%d,%d\n", i,j, k);
//}

//int main()
//{
//	int a=1, b=1;
//	float w;
//	switch (a+b)
//	{
//	case 1:
//		printf("*\n");
//	case 2:
//		printf("*\n");
//	default:
//		printf("\n");
//	}
//}

//int main()
//{
//	int x = 0, s = 0;
//	while (!x != 0)
//		s += ++x;
//	printf("%d", s);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//void my_strcpy(char* dest, const char* src)
//{
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++ ;
//	//	/*dest++;
//	//	src++;*/
//	//}
//	//*dest = *src;
//	assert(src !=  NULL);//断言，可以报错
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;//hello的拷贝
//	}
//
//}
//
//int main()
//{   
//	char arr[20] = "xxxxxxxxxxxxxxxxxxx";
//	char arr1[] = "hello bit";
//	//strcpy(arr, arr1);
//	my_strcpy(arr, arr1);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const int num = 10;//const修饰变量这个变量被称为常变量不可以修改
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


int main()
{
	int a = 0x11223344;

	printf("%d", a);
	return 0;
}

