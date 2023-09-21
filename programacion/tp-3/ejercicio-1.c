/*
1-ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL NÚMERO BASE Y EL EXPONENTE.
EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE RECIBA LA BASE Y EL EXPONENTE Y DEVUELVA EL RESULTADO A LA FUNCIÓN PRINCIPAL DEL PROGRAMA.
*/
#include <math.h>
#include <stdio.h>

int potencia(int base, int exponente);

int main()
{
    int base, exponente, resultado;

    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    resultado = potencia(base, exponente);

    printf("El resultado es: %d", resultado);

    return 0;
}

int potencia(int base, int exponente)
{
    int resultado = 1;

    for (int i = 0; i < exponente; i++)
    {
        resultado *= base;
    }

    return resultado;
}