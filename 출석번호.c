#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void)
{
    int *stu;
    int i = 0;
    int j;
    int sub;

    stu = (int *)malloc(N * sizeof(int));
    if (stu == NULL)
        return (0);
    // stu값 1부터 쭉 초기화 > 오름차순 정렬
    while (i < N)
    {
        stu[i] = i + 1;
        i++;
    }
    i = 0;
    while (i < N - 2)
    {
        scanf("%d",&sub);
        j = 0;
        while (j < N)
        {
            // 겹치면 그냥 0으로
            if (sub == stu[j])
                stu[j] = 0;
            j++;
        }
        i++;
    }
    i = 0;
    while (i < N)
    {
        if (stu[i] != 0)
            printf("%d\n",stu[i]);
        i++;
    }
    free(stu);
    return (0);
}