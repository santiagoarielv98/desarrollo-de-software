#include <stdio.h>
/*
12. DESARROLLE UN ALGORITMO QUE PERMITA LEER UN VALOR CUALQUIER N Y ESCRIBA SI DICHO NÚMERO ES PAR O IMPAR.
EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO ES PAR O NO.
*/

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
        printf("El numero es par\n");
    }
    else
    {
        printf("El numero es impar\n");
    }
}