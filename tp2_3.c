/*
*Reimplemente el siguiente código utilizando aritmética de punteros (tp2_3.c) y súbalo al repositorio.
#define N 5
#define M 7
Int i,j;
…int mt[N][M];
for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
mt[i][j]=1+rand()%100;
printf(“%lf
”, mt[i][j]);
}
printf(“\n”);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){
    
    int i,j;
    int mt[N][M];
    int * pmatriz;
    pmatriz = mt;
    srand(time(NULL));

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *(pmatriz+i * M + j) = 1 + rand()%100;
            printf("%4d ", *(pmatriz + i * M + j));
        }
        printf("\n");
    }
    return 0;
}
