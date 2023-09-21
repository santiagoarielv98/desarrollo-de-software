#include <stdio.h>
/*
16. CREAR UNA FUNCIÓN “ESCRIBIRTABLAMULTIPLICAR”, QUE RECIBA COMO PARÁMETRO UN NÚMERO ENTERO, Y ESCRIBA LA TABLA DE MULTIPLICAR DE ESE NÚMERO (POR EJEMPLO, PARA EL 3 DEBERÁ LLEGAR DESDE 3X0=0 HASTA 3X10=30).
 */

void escribirTablaMultiplicar(int num);

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    escribirTablaMultiplicar(num);

    return 0;
}

void escribirTablaMultiplicar(int num)
{
    int i, mult;

    for (i = 0; i <= 10; i++)
    {
        mult = num * i;
        printf("%d x %d = %d\n", num, i, mult);
    }
}