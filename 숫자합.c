// https://www.acmicpc.net/problem/11720

#include <stdio.h>

int main(void)
{
    int n, i = 0;
    int sum = 0;
    // n을 입력받아서 malloc하면 메모리손실 없을듯
    char num[101]; 

    scanf("%d",&n);
    scanf("%s",num);

    // n보다 작은 값을 넣으면 쓰레기값 들어가
    // 근데 귀찮아..
    while (i < n)
    {
        sum += (num[i] - '0');
        i++;
    }
    printf("%d", sum);
    return (0);
}