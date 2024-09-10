// https://www.acmicpc.net/problem/2739

#include <stdio.h>

int     main(void)
{
    int i = 1;
    int num = 0;

    scanf("%d",&num);

    while (i <= 9)
    {
        printf("%d * %d = %d\n",num, i, num*i);
        i++;
    }
    return (0);
}