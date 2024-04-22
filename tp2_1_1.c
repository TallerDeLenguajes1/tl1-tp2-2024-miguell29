/*
*En el siguiente código se accede a los elementos de un vector.
TODO: codigo a completar
#define N 20
int i;
double vt[N];
for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;
printf(“%f
”, vt[i]);
}
*a) Complete el código anterior para que el mismo funcione en un archivo nuevo que se llame
*tp2_1_1.c y agregue el archivo a su repositorio local (commit) y luego al repositorio
*remoto (push).
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    
    double vt[N];
    srand(time(NULL));
    for (int i = 0; i<N; i++)
    {
        vt[i]= 1 + rand()%100;
        printf("%f\n", vt[i]);
    }
    return 0;
}