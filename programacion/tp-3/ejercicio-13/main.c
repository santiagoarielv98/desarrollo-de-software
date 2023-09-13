#include <stdio.h>
/*
13. DESARROLLE UN ALGORITMO QUE REALICE LA SUMATORIA DE LOS NÚMEROS ENTEROS PARES COMPRENDIDOS ENTRE EL 1 Y EL 200, IMPRIMA LOS NÚMEROS Y SU SUMATORIA.
EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO ES PAR O NO.
*/

int esPar(int num);

int main()
{
    int i, suma, par;

    suma = 0;

    for (i = 1; i <= 200; i++)
    {
        par = esPar(i);

        if (par == 1)
        {
            printf("%d\n", i);
            suma += i;
        }
    }

    printf("La suma de los numeros pares es: %d\n", suma);

    return 0;
}

int esPar(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}