#include <stdio.h>

/*
4- CREAR UN PROGRAMA QUE CONTENGA UNA FUNCIÓN LLAMADA COPIARVECTOR() QUE
RECIBA DOS VECTORES Y EL TAMAÑO DE LOS MISMOS (DEBEN SER DEL MISMO TAMAÑO)
Y QUE CONSIGA COPIAR EN EL SEGUNDO VECTOR EL CONTENIDO DEL PRIMERO.
*/

void copiarVector(int *vector1, int *vector2, int tam);

int main(void)
{
    int tam = 5;
    int vector1[tam];
    int vector2[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese un valor para la posicion %d del vector 1: ", i);
        scanf("%d", &vector1[i]);
    }

    copiarVector(vector1, vector2, tam);

    for (int i = 0; i < tam; i++)
    {
        printf("El valor del vector 2 en la posicion %d es: %d\n", i, vector2[i]);
    }

    return 0;
}

void copiarVector(int *vector1, int *vector2, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vector2[i] = vector1[i];
    }
}
