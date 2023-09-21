#include <stdio.h>
/*
15. CREAR UNA FUNCIÓN QUE RECIBA UN NÚMERO Y MUESTRE EN PANTALLA EL PERÍMETRO Y LA SUPERFICIE DE UN CUADRADO QUE TENGA COMO LADO EL NÚMERO QUE SE HA INDICADO COMO PARÁMETRO.
*/

void cuadrado(int lado);

int main()
{
    int lado;

    printf("Ingrese el lado del cuadrado: ");
    scanf("%d", &lado);

    cuadrado(lado);

    return 0;
}

void cuadrado(int lado)
{
    int perimetro, superficie;

    perimetro = lado * 4;
    superficie = lado * lado;

    printf("El perimetro del cuadrado es: %d\n", perimetro);
    printf("La superficie del cuadrado es: %d\n", superficie);
}