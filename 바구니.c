// https://www.acmicpc.net/problem/10811

#include <stdio.h>
#include <stdlib.h>

void    swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int *fill_box(int *box, int n)
{
    int i = 0;

    while (i < n)
    {
        box[i] = i + 1;
        i++;
    }
    return (box);
}

int main(void)
{
    int *box;
    int n, m, i, j;
    int k = 0;

    scanf("%d %d",&n, &m);
    box = (int *)malloc(n * sizeof(int));
    if (box == NULL)
        return (0);
    box = fill_box(box, n);
    
    while (k < m)
    {
        scanf("%d %d",&i, &j);
        i--;
        j--;
        if (i > j)
            printf("Error of Range");
        while (i < j)
        {
            swap(&box[i],&box[j]);
            i++;
            j--;
        }
        k++;
    }

    k = 0;
    while (k < n)
    {
        printf("%d ",box[k]);
        k++;
    }
    return (0);
}