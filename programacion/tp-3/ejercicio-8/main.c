#include <stdio.h>

/*
8. REALIZAR UNA FUNCIÓN QUE RECIBA UN NÚMERO, MUESTRE LOS 5 NÚMEROS ANTERIORES Y LOS 5 NÚMEROS SIGUIENTES AL NÚMERO INGRESADO.
*/

void mostrarNumeros(int num);

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    mostrarNumeros(num);

    return 0;
}

void mostrarNumeros(int num)
{
    for (int i = num - 5; i <= num + 5; i++)
    {
        printf("%d\n", i);
    }
}