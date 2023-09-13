/*
4. REALIZAR UNA FUNCIÓN QUE ME PERMITA ESTABLECER SI UN NÚMERO ES PAR O NO UTILIZANDO FUNCIONES.
*/

#include <stdio.h>

void esPar(int num);

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    esPar(num);

    return 0;
}

void esPar(int num)
{
    if (num % 2 == 0)
    {
        printf("El numero %d es par\n", num);
    }
    else
    {
        printf("El numero %d es impar\n", num);
    }
}