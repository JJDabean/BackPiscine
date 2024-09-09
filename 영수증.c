#include <stdio.h>

int main(void)
{
    int x,n,a,b;
    int sum = 0;

    scanf("%d", &x);
    scanf("%d", &n);

    while(n != 0)
    {
        scanf("%d %d",&a,&b);
        sum = sum + (a * b);
        n--;
    }

    if (sum == x)
        printf("Yes");
    else if (n != 0 || sum != x)
        printf("No");
    return (0);
}