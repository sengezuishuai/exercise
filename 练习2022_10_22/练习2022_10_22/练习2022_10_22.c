#define _CRT_SECURE_NO_WARNINGS 1
#include"senge.h"

//int main()
//{
//	int  a = 3 / 5;
//	printf("%d",a);
//	float a = 6 % 5;//如果是小数点的数字则默认是double类型例如6.0/8。0在后面加一个f可以避免
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

//移位操作符
//int main()
//{
//	int a = 2;
//	int b = a << 1;//左翼操作符左边丢弃右边补齐
//	printf("b = %d\n",b);
//	return;
//}

//int main()
//{
//	int a = 2;
//	int b = a >> 1;//右翼操作符左边丢弃右边补齐
//	printf("b = %d\n", b);
//	return;
//}

//源码直接有数值写出的是二进制序列
// 10000000000000000000000000000000001 -1的源码
// 11111111111111111111111111111111110 -1的反码
// 11111111111111111111111111111111111 -1的补码
//反码源码的符号位不变，其他按位取反就是反码
//补码反码加一就是补码
//有啥用呀

////位操作符：总结数学好才有用
////
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//&-按（二进制）位与就是a，b这两数字二进制对应位上都是一的时候才是1，否则是0
//	//|-按（二进制）位与就是a，b这两数字二进制对应位上不都是一的时候也是1，否则是0
//	//按位异或^对应的二进制位进行异或相同为0相异为一
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
//用途

//int main()
//{
//	int a = 8;
//	int b = 9;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
// 学习好二进制
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

//赋值操作符
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
//单目操作符只有一个操作数

//sizeof计算字符的位数

//int main()
//{
//	int a = 10;
//	char arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	//sizepf只是一个操作符不是一个函数
//	printf("%d\n", sizeof(arr));//单位是字节  
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//sizeof()sizeof里的表达式不参与运算
//	//编译 链接 运行
//	printf("%d\n", s);
//	return 0;
//}