#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

char* FlashBack(char a[], int n) {
    static char newarray[100];
    int i, j = n - 1;
    char* b;

    for (i = 0; i < n; i++) {
        newarray[i] = a[j];
        j--;
    }

    b = &newarray[0];

    return b;
}

void line(char a[], char b[])
{
    int i = 0, j = 0;
    char c[100];
    for (i = 0; i < (strlen(a)); i++)
    {
        c[i] = a[i];
    }
    for (j = i; j < (strlen(a) + strlen(b)); j++)
    {
        int t = j - i;
        c[j] = b[t];
    }
    c[j] = '\0';//这个地方不要忘了
    printf("%s", c);
}

//void yuansu(char arr[],int m)
//{
//    int i, j=0;
//    char newarr[100];
//    for (i = 0; i < m; i++)
//    {
//        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] = '\0')
//        {
//            newarr[j] = arr[i];
//            j++;
//        }
//    }
//    printf("%s", newarr);
//}

int yuanyin(char a[], char b[])
{
    int i, j = 0, k, l;
    char x;
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            b[j] = a[i];
            j++;
        }
    }
    b[j] = '\0';
    k = strlen(b);
    for (i = 0; i < k; i++)
    {
        for (j = i; j < k; j++)
        {
            if (b[i] > b[j])
            {
                x = b[j]; b[j] = b[i]; b[i] = x;
            }
        }
    }
    return 0;
}