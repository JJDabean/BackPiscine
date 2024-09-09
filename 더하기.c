#include <stdio.h>

int main(void)
{
    int n = 0;
    int a,b = 0;

    scanf("%d",&n);
    while(n != 0)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
        n--;
    }
    return (0);
}