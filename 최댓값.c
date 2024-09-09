#include <stdio.h>
#include <stdlib.h>

#define N 9

int main(void)
{
    int *arr;
    int max, i, num;

    arr = (int *)malloc(N * sizeof(int));
    if (arr == NULL) 
        return (0);
    i = 0;
    while (i < N)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > 100 || arr[i] < 1)
        {
            printf("Error of range");
            free(arr);
            return(0);
        }
        i++;
    }
    max = arr[0];
    num = 1;
    i = 1;
    while (i < N)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            num = i + 1;
        }
        i++;
    }
    printf("%d\n%d",max,num);

    free(arr);
    return (0);
}