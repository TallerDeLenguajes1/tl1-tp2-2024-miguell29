/*
!4) Declara un tipo de dato estructura:
i)Para representar a una PC; los campos serán: 
velocidad de procesamiento en GHz, 
año de fabricación,
tipo de procesador,
cantidad de núcleos.
ii) Considera valores enteros aleatorios para la velocidad: entre 1 y 3, 
para el año: entre 2015 y 2024.
para la cantidad de núcleos: entre 1 y 8.
iii) Para evitar ingresar por teclado los tipos de procesador, considera que estos se
encuentran en un arreglo de cadenas de caracteres:
char tipos[6][10]={“Intel”, “AMD”, “Celeron”, “Athlon”, “Core”, “Pentium”}
*La estructura será la siguiente:
struct compu {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
};
b) Define una variable del tipo arreglo de estructura para guardar las características de 5 PC
que cargará el usuario.
c) Escribe una función que presente la lista de las PC, cada una con sus características.
d) Escribe una función que presente la PC más vieja.
e) Escribe una función que presente la PC que tiene mayor velocidad.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct
{
    int velocidad;
    int anio;
    char *tipo_cpu;
    int cantidad;
}Compu;
void listarPCs(Compu compus[5]);
void older(Compu compus[5]);
void faster(Compu compus[5]);
void mostrarPc(Compu pc);
int main()
{
    Compu compus[5];
    char tipos[6][10]={{"Intel"},{"AMD"},{"Celeron"},{"Athlon"},{"Core"},{"Pentium"}};
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        compus[i].velocidad = 1 + rand()%3;
        compus[i].anio = 2015 + rand()%9;
        compus[i].cantidad = 1 + rand()%8;
        compus[i].tipo_cpu = tipos[rand()%5];
    }
    listarPCs(compus);
    older(compus);
    faster(compus);
return 0;
}
void listarPCs(Compu compus[5])
{
    printf("\n********************* Lista de PCs **********************\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Pc %d:\n",i+1);
        printf("\tTipo de procesador: %s\n",compus[i].tipo_cpu);
        printf("\tcantidad de nucleos: %d\n",compus[i].cantidad);
        printf("\tvelocidad de procesamiento: %dGHz\n",compus[i].velocidad);
        printf("\tAnio de fabricacion: %d\n",compus[i].anio);
    }
    printf("\n********************* Fin de la lista **********************\n");
}
void older(Compu compus[5])
{
    int aux = 3000;
    Compu pc;
    for (int i = 0; i < 5; i++)
    {
        if (compus[i].anio < aux)
        {
            aux = compus[i].anio;
            pc = compus[i];
        }
        
    }
    printf("\n*** La PC mas vieja es:\n");
    mostrarPc(pc);
}
void faster(Compu compus[5])
{
    int aux = 0;
    Compu pc;
    for (int i = 0; i < 5; i++)
    {
        if (compus[i].velocidad > aux)
        {
            aux = compus[i].velocidad;
            pc = compus[i];
        }
        
    }
    printf("\n*** La PC mas rapida es:\n");
    mostrarPc(pc);
}
void mostrarPc(Compu pc)
{
        printf("Tipo de procesador: %s\n",pc.tipo_cpu);
        printf("cantidad de nucleos: %d\n",pc.cantidad);
        printf("velocidad de procesamiento: %dGHz\n",pc.velocidad);
        printf("Anio de fabricacion: %d\n",pc.anio);
}
