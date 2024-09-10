// https://www.acmicpc.net/problem/10810

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
    //박스의 값들 0으로 초기화
    while (p < m)
    {
        box[p] = 0;
        p++;
    }
    p = 0;
    index = 0;
    //i번째에서 j번째까지 k로 채운다 
    //겹치면 그냥 덮어씌우기
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
    //m개의 바구니만큼 넣기
    while (i < m)
    {
        printf("%d ",box[i]);
        i++;
    }
    free(box);
    return (0);
}