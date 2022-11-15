#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//
//int main()
//{
//    char p[256] = "";
//    printf("请输入一行字符串\n");
//    //输入字符
//    gets(p);
//    printf("输入的字符串内容是：%s\n", p);
//    //char p[] = "chenyu 124#@$! chen333";
//    //把数组赋值给指针s
//    char* s = p;
//    int a = 0, b = 0, c = 0, d = 0;
//    //循环遍历字符串
//    while (*s != '\0')
//    {
//        printf("*s is %c\n", *s);
//        //判断字符
//        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
//        {
//            ++a;
//        }
//        //判断空格
//        else if (*s == ' ')
//        {
//            ++b;
//        }
//        //判断数字
//        else if ((*s >= '0') && (*s <= '9'))
//        {
//            ++c;
//        }
//        else
//        {
//            ++d;
//        }
//        //指针右移
//        s++;
//    }
//    printf("英文字母=%d，空格=%d, 数字字符=%d，其它字符=%d\n", a, b, c, d);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n, max, min, b, c;
//	printf("请输入两个整数：\n");
//	scanf("%d%d", &m, &n);
//	c = m % n;
//	b = m * n;
//	while (c != 0)
//	{
//		m = n;
//		n = c;
//		c = m % n;
//	}
//	max = n;
//	min = b / max;
//	printf("\n最大公约数为：%d\n最小公倍数为：%d\n", max, min);
//	return 0;
//}


//#include<stdio.h>
//
//int main() {
//	float n, s = 0, t = 1;
//	for (n = 1; n <= 20; n++) {
//		t *= n;
//		s += t;
//	}
//	printf("1+2!+3!...+20!=%d\n", s);//C语言中%e：以指数形式输出实数
//	return 0;
//}


#include"stdio.h"
#include"math.h"
main()
{
	int number, i, n;
	printf("请输入一个正整数:\t");
	scanf("%d", &number);
	while (number > 0)//输入0或小于0的数，结束循环
	{
		n = (int)sqrt(number);//开平方
		if (number == 1)
		{
			printf("1既不是素数，也不是合数\n");//注：1既不是素数，也不是合数
			scanf("%d", &number);
			continue; //跳出这一次循环              
		}
		for (i = 2; i <= n; i++)   //2和3的开平方分别为1.414和1.732，不满足循环条件(i<=n)
		{
			if (number % i == 0)
				break;
		}
		if (i > n) //i=2,2和3满足(i>n),所以是素数
			printf("%d是素数\n", number);
		else
			printf("%d不是素数\n", number);
		printf("请输入一个正整数:\t");
		scanf("%d", &number);
	}
}


