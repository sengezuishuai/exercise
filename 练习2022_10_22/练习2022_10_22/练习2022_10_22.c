#define _CRT_SECURE_NO_WARNINGS 1
#include"senge.h"

//int main()
//{
//	int  a = 3 / 5;
//	printf("%d",a);
//	float a = 6 % 5;//�����С�����������Ĭ����double��������6.0/8��0�ں����һ��f���Ա���
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 7 % 3;
//	printf("%d\n", a);
//
//	return 0;
//
//}

//��λ������
//int main()
//{
//	int a = 2;
//	int b = a << 1;//�����������߶����ұ߲���
//	printf("b = %d\n",b);
//	return;
//}

//int main()
//{
//	int a = 2;
//	int b = a >> 1;//�����������߶����ұ߲���
//	printf("b = %d\n", b);
//	return;
//}

//Դ��ֱ������ֵд�����Ƕ���������
// 10000000000000000000000000000000001 -1��Դ��
// 11111111111111111111111111111111110 -1�ķ���
// 11111111111111111111111111111111111 -1�Ĳ���
//����Դ��ķ���λ���䣬������λȡ�����Ƿ���
//���뷴���һ���ǲ���
//��ɶ��ѽ

////λ���������ܽ���ѧ�ò�����
////
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//&-���������ƣ�λ�����a��b�������ֶ����ƶ�Ӧλ�϶���һ��ʱ�����1��������0
//	//|-���������ƣ�λ�����a��b�������ֶ����ƶ�Ӧλ�ϲ�����һ��ʱ��Ҳ��1��������0
//	//��λ���^��Ӧ�Ķ�����λ���������ͬΪ0����Ϊһ
//	int c = a & b;
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 7;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//��;

//int main()
//{
//	int a = 8;
//	int b = 9;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
// ѧϰ�ö�����
//}

//int main()
//{
//	int a = 3;
//
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	int b = 1;
//	b = a << 4;
//	printf("%d", a ^ b);
//	return 0;
//}

//��ֵ������
//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;
//	a += 100;
//	a = a >> 8;
//	a >>= 8;
//	return 0;
//}

//int main()
//{
//	int flag = 5;
//	printf("%d\n", !flag);
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//��Ŀ������ֻ��һ��������

//sizeof�����ַ���λ��

//int main()
//{
//	int a = 10;
//	char arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	//sizepfֻ��һ������������һ������
//	printf("%d\n", sizeof(arr));//��λ���ֽ�  
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//sizeof()sizeof��ı��ʽ����������
//	//���� ���� ����
//	printf("%d\n", s);
//	return 0;
//}