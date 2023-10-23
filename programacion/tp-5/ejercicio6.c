#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
6- ESCRIBIR UN PROGRAMA QUE CARGUE 100 NÚMEROS ALEATORIAMENTE EN UN VECTOR.
UTILIZANDO LA FUNCIÓN CONTAR(), INDICAR CUANTOS NÚMEROS PARES HAY EN EL
VECTOR Y CUANTOS IMPARES.
*/

void carga(int *vector, int tam);
void contar(int *vector, int tam);

int main(void)
{
    int tam = 100;
    int vector[tam];
    carga(vector, tam);
    contar(vector, tam);
    return 0;
}

void carga(int *vector, int tam)
{
    srand(time(NULL));
    for (int i = 0; i < tam; i++)
    {
        vector[i] = rand() % 100;
    }
}

void contar(int *vector, int tam)
{
    int pares = 0;
    int impares = 0;
    for (int i = 0; i < tam; i++)
    {
        if (vector[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    printf("Hay %d numeros pares y %d numeros impares\n", pares, impares);
}