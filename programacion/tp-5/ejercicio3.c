#include <stdio.h>

/*
3- ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA DE UN VECTOR DESDE
LA FUNCIÓN CARGA(), Y LUEGO MUESTRE LOS VALORES IMPRIMIÉNDOLOS DESDE EL
CUERPO PRINCIPAL.
*/

void carga(int *vector, int tam);

int main(void)
{
    int tam = 5;
    int vector[tam];
    carga(vector, tam);

    for (int i = 0; i < tam; i++)
    {
        printf("El valor del vector en la posicion %d es: %d\n", i, vector[i]);
    }

    return 0;
}

void carga(int *vector, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese un valor para la posicion %d: ", i);
        scanf("%d", &vector[i]);
    }
}