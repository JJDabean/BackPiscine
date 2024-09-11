// https://www.acmicpc.net/problem/10809
// 알파벳 26자리를 알파벳배열을 -1로 초기화
// 입력받은 문자열 각각을 while로 돌려
// 해당 초기화한 배열에 존재하는지 확인하고 없으면 -1
// 있으면 s - 97로 값 넣어줘

#include <stdio.h>
#include <stdlib.h>
#define A_N 26

int main (void)
{
    char input[101];
    int alpha[A_N];
    int i = 0;

    while(i < A_N)
    {
        alpha[i] = -1;
        i++;
    }

    scanf ("%s",input);

    i = 0;
    while (input[i])
    {
        int num = input[i] - 'a';
        if (alpha[num] == -1)
            alpha[num] = i;
        i++;
    }
    
    i = 0;
    while(i < A_N)
    {
        printf("%d ",alpha[i]);
        i++;
    }
    return (0);
}