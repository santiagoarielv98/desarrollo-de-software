/*
2-REALIZAR UNA FUNCIÓN PARA INGRESAR DOS NÚMEROS Y OTRA PARA MOSTRAR POR PANTALLA LOS VALORES INTERCAMBIANDO LAS VARIABLES.
*/
#include <stdio.h>

void ingresarNumeros(int *num1, int *num2);
void intercambiarNumeros(int *num1, int *num2);
void mostrarNumeros(int num1, int num2);

int main()
{
    int num1, num2;

    ingresarNumeros(&num1, &num2);
    intercambiarNumeros(&num1, &num2);
    mostrarNumeros(num1, num2);

    return 0;
}

void ingresarNumeros(int *num1, int *num2)
{
    printf("Ingrese el primer numero: ");
    scanf("%d", num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", num2);
}

void intercambiarNumeros(int *num1, int *num2)
{
    int aux;

    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

void mostrarNumeros(int num1, int num2)
{
    printf("El primer numero es: %d\n", num1);
    printf("El segundo numero es: %d\n", num2);
}
