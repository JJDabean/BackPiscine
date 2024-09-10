// https://www.acmicpc.net/problem/3052

#include <stdio.h>
#include <stdlib.h>
#define N 10

int *input(int *num)
{
    int i = 0;
    int input;

    while (i < N)
    {
        scanf("%d",&input);
        if (input < 0 || input > 1000)
        {
            printf("Error of Range");
            return (0);
        }
        num[i] = input;
        i++;
    }
    return (num);
}

int *remain(int *num, int *rem)
{
    int i = 0;
    int remain;

    while (i < N)
    {
        rem[i] = num[i] % 42;
        i++;
    }
    return (rem);
}

int main(void)
{
    int *num;
    int *rem;
    int j,i = 0;
    int cnt = 0;
    int unique;

    rem = (int *)malloc(N * sizeof(int));
    num = (int *)malloc(N * sizeof(int));
    if (num == NULL || rem == NULL)
        return (0);

    num = input(num);
    rem = remain(num, rem);

    while (i < N)
    {
        // unique : flag처럼 같은 값인지 체크하는 변수
        unique = 1;
//      printf("rem[%d] : %d\n",i,rem[i]);
        j = i + 1;
        while (j < N)
        {
            if (rem[i] == rem[j])
            {
                unique = 0;
                break;
            }
            j++;
        }
        if (unique)
            cnt++;
        i++;
    }
    printf("%d", cnt);
    return (0);
}