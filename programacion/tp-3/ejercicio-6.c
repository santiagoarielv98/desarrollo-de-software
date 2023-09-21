/*
6. REALIZAR UNA FUNCIÓN LLAMADA NEGATIVO, QUE TOMA UN NÚMERO ENTERO COMO PARÁMETRO, Y DEVUELVE 1 SI ES NEGATIVO O 0 SI NO LO ES.
*/

#include <stdio.h>

int negativo(int num);

int main()
{
    int num, resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    resultado = negativo(num);

    if (resultado == 1)
    {
        printf("El numero %d es negativo\n", num);
    }
    else
    {
        printf("El numero %d es positivo\n", num);
    }

    return 0;
}

int negativo(int num)
{
    if (num < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
