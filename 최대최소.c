// https://www.acmicpc.net/problem/10818

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int min, max, n, i;

    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
        return (0);
    i = 0;
    while (i < n)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    min = arr[0];
    max = arr[0];
    i = 0;
    while (i < n)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
        i++;
    }
    printf("%d %d",min, max);
    free(arr);
    return (0);
}