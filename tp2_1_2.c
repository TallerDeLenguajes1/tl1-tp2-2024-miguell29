/*
En el archivo tp2_1_2.c modifique el código anterior para utilizar aritmética de punteros
(notación indexada) para recorrer el vector.
Commitee los cambios al repositorio local.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    
    double vt[N];
    double * puntero;
    puntero = vt;

    srand(time(NULL));
    for (int i = 0; i<N; i++)
    {
        *(puntero+i)= 1 + rand()%100;
        printf("%f\n", *(puntero+i));
    }
    return 0;
}