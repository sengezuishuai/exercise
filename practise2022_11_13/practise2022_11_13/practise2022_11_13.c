#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//
//int main()
//{
//    char p[256] = "";
//    printf("������һ���ַ���\n");
//    //�����ַ�
//    gets(p);
//    printf("������ַ��������ǣ�%s\n", p);
//    //char p[] = "chenyu 124#@$! chen333";
//    //�����鸳ֵ��ָ��s
//    char* s = p;
//    int a = 0, b = 0, c = 0, d = 0;
//    //ѭ�������ַ���
//    while (*s != '\0')
//    {
//        printf("*s is %c\n", *s);
//        //�ж��ַ�
//        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
//        {
//            ++a;
//        }
//        //�жϿո�
//        else if (*s == ' ')
//        {
//            ++b;
//        }
//        //�ж�����
//        else if ((*s >= '0') && (*s <= '9'))
//        {
//            ++c;
//        }
//        else
//        {
//            ++d;
//        }
//        //ָ������
//        s++;
//    }
//    printf("Ӣ����ĸ=%d���ո�=%d, �����ַ�=%d�������ַ�=%d\n", a, b, c, d);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n, max, min, b, c;
//	printf("����������������\n");
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
//	printf("\n���Լ��Ϊ��%d\n��С������Ϊ��%d\n", max, min);
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
//	printf("1+2!+3!...+20!=%d\n", s);//C������%e����ָ����ʽ���ʵ��
//	return 0;
//}


#include"stdio.h"
#include"math.h"
main()
{
	int number, i, n;
	printf("������һ��������:\t");
	scanf("%d", &number);
	while (number > 0)//����0��С��0����������ѭ��
	{
		n = (int)sqrt(number);//��ƽ��
		if (number == 1)
		{
			printf("1�Ȳ���������Ҳ���Ǻ���\n");//ע��1�Ȳ���������Ҳ���Ǻ���
			scanf("%d", &number);
			continue; //������һ��ѭ��              
		}
		for (i = 2; i <= n; i++)   //2��3�Ŀ�ƽ���ֱ�Ϊ1.414��1.732��������ѭ������(i<=n)
		{
			if (number % i == 0)
				break;
		}
		if (i > n) //i=2,2��3����(i>n),����������
			printf("%d������\n", number);
		else
			printf("%d��������\n", number);
		printf("������һ��������:\t");
		scanf("%d", &number);
	}
}


