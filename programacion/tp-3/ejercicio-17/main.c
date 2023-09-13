/*
17. CREAR UNA FUNCIÓN “ESPRIMO”, QUE RECIBA UN NÚMERO Y DEVUELVA EL VALOR 1 SI ES UN NÚMERO PRIMO O 0 EN CASO CONTRARIO.
*/

#include <stdio.h>

int esPrimo(int num);

int main()
{
    int num, primo;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    primo = esPrimo(num);

    if (primo == 1)
    {
        printf("El numero es primo\n");
    }
    else
    {
        printf("El numero no es primo\n");
    }

    return 0;
}

int esPrimo(int num)
{
    int i; //  divisor

    if (num <= 1)
    {
        return 0;
    }

    for (i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}