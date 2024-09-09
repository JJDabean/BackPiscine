#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *box;
    int m,n, index;
    int i, j, k;
    int p = 0;

    scanf("%d %d",&m,&n);
    box = (int *)malloc(m * sizeof(int));
    if (box == NULL)
        return(0);
    while (p < m)
    {
        box[p] = 0;
        p++;
    }
    p = 0;
    index = 0;
    while (index < n)
    {
        scanf("%d %d %d",&i,&j,&k);
        p = i - 1;
        while (p < j)
        {
            box[p] = k;
            p++;
        }
        index++;
    }
    i = 0;
    while (i < m)
    {
        printf("%d ",box[i]);
        i++;
    }
    free(box);
    return (0);
}