#include <stdio.h>

/*
5- ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA DE UN VECTOR DESDE
LA FUNCIÓN CARGA(), Y LUEGO MOSTRAR CUAL ES EL MAYOR NUMERO DEL VECTOR,
UTILIZANDO PARA ENCONTRARLO LA FUNCIÓN ENCONTRARMAX(), QUE NO DEBERÁ
DEVOLVER NINGÚN VALOR. EL VALOR MAXIMO DEBERA SER INFORMADO EN EL CUERPO
PRINCIPAL.
*/

void carga(int *vector, int tam);
void encontrarMax(int *vector, int tam);

int main(void)
{
    int tam = 5;
    int vector[tam];
    carga(vector, tam);
    encontrarMax(vector, tam);
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

void encontrarMax(int *vector, int tam)
{
    int max = vector[0];
    for (int i = 0; i < tam; i++)
    {
        if (vector[i] > max)
        {
            max = vector[i];
        }
    }
    printf("El valor maximo del vector es: %d\n", max);
}