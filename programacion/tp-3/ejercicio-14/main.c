#include <stdio.h>
/*
14. CREAR UNA FUNCIÓN QUE PERMITA CALCULAR EL FACTORIAL DE UN NÚMERO.
*/

int factorial(int num);

int main()
{
    int num, fact;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("El factorial de %d es: %d\n", num, fact);

    return 0;
}

int factorial(int num)
{
    int i, fact;

    fact = 1;

    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}