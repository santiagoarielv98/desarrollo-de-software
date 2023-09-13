/*
5. REALIZAR FUNCIÓN QUE TOME DOS NÚMEROS REALES COMO PARÁMETROS Y DEVUELVA UN NÚMERO REAL QUE SERÍA LA MEDIA DE LOS DOS NÚMEROS.
*/

#include <stdio.h>

float media(float num1, float num2);

int main()
{
    float num1, num2, resultado;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    resultado = media(num1, num2);

    printf("La media de los numeros ingresados es: %.2f\n", resultado);

    return 0;
}

float media(float num1, float num2)
{
    return (num1 + num2) / 2;
}