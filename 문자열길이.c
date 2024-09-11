// https://www.acmicpc.net/problem/2743

#include <stdio.h>

int main(void)
{
    char str[100];
    int cnt = 0;

    scanf("%s", str);

    while (str[cnt])
        cnt++;
    printf("%d", cnt);
    return (0);
}