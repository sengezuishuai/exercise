#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>

//����
int main()
{
	int arr[8];
	//char ch[5];
	//int aee[�������ʽ]
	
	return 0;
}

int main()
{
	char arr1[] = "hfh";
	char arr2[] = { 'f','f','f' };
	printf("%d\n", strlen(arr1));
	printf("%d", strlen(arr2));
	return 0;
}

//[]�±����ò�����
int main()
{
	int arr[10] = { 0 };
	arr[4] = 5;
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);//sizeof(arr)������ֽڳ���һ�����Ǵ�
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

int main()
{
	/*printf("%x\n", 0X12);
	printf("%p\n", 0X12);*/
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//printf("%p\n", &arr[i]);
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}

////һά������������ŵģ����������±��������ַ���ɵ͵��ߵ�

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}

int main()
{
	//int arr[3][4];
	//char ch[3][10];
	//��ʼ��-����ʱ��ֵ
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9 };//Ĭ�ϲ���
	//int arr[3][4] = { {1,2},{3,4},{5,6} };//һ��һ�е���

	return 0;
}

int main()
{
	int arr[][4] = { {1,2},{3,4},{5,6} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ",arr[i][j]);
		}
	}
	return 0;
}

//��ά�������ڴ�Ĵ洢
int main()
{
	int arr[][4] = { {1,2},{3,4},{4,5} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			//printf("%p\n",&arr[i][)
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}
//��ά�������ڴ���Ҳ��������

int main()
{
	int arr[][4] = { {1,2},{3,4},{4,5} };
	int i = 0;
	int j = 0;
	int* p=&arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}