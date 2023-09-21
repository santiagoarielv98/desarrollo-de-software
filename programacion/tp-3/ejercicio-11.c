/*
11. DESARROLLE UN ALGORITMO QUE REALICE LA SUMATORIA DE LOS NÚMEROS ENTEROS MÚLTIPLOS DE 5, COMPRENDIDOS ENTRE EL 1 Y EL 100, IMPRIMA LOS NÚMEROS Y SU SUMATORIA.
EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO ES MÚLTIPLO DE 5 O NO.
*/

#include <stdio.h>

int multiploDe5(int num);

int main()
{
    int i, suma, multiplo;

    suma = 0;

    for (i = 1; i <= 100; i++)
    {
        multiplo = multiploDe5(i);

        if (multiplo == 1)
        {
            printf("%d\n", i);
            suma += i;
        }
    }

    printf("La suma de los multiplos de 5 es: %d\n", suma);

    return 0;
}

int multiploDe5(int num)
{
    if (num % 5 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}