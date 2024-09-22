// https://www.acmicpc.net/problem/2444

#include <stdio.h>

int main(void)
{
    int n,j;
    int i = 1;

    scanf("%d",&n);

    while (i <= n)
    {
        j = 1;
        while (j <= n - i)
        {
            printf(" ");
            j++;
        }
        j = 1;
        while (j <= (2 * i) - 1)
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    i = n - 1;
    while (i >= 1)
    {
        j = 1;
        while (j <= n - i)
        {
            printf(" ");
            j++;
        }
        j = 1;
        while (j <= (2 * i) - 1)
        {
            printf("*");
            j++;
        }
        i--;
        printf("\n");
    }

    return (0);
}