// https://www.acmicpc.net/problem/27866

#include <stdio.h>

int ft_len(char *s)
{
    int cnt = 0;

    while (s[cnt])
    {
        cnt++;
    }
    return (cnt);
}

int main (void)
{
    char s[1001];
    int i;

    scanf("%s", s);
    scanf("%d", &i);
    i--;
    if (i > ft_len(s) || i < 0)
        printf("Error of Range");
    else
        printf("%c",s[i]);
    return (0);
}