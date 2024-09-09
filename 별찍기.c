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
        while (j <= i)
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    return (0);
}