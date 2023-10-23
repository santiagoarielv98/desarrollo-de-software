#include <stdio.h>

/*
1- ESCRIBIR UN PROGRAMA EN C QUE RECIBA DOS NÚMEROS DEL USUARIO REALICE LA
SUMA Y LA MUESTRE POR PANTALLA. LA SUMA DEBERÁ HACERSE EN LA FUNCIÓN
SUMA(), QUE RECIBIRÁ COMO PARÁMETROS POR REFERENCIA LOS NUM1 Y NUM2. EL
RESULTADO DEBE IMPRIMIRSE DESDE LA FUNCIÓN
*/

void suma(int *num1, int *num2);

int main(void)
{
    int num1, num2;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &num1, &num2);
    suma(&num1, &num2);
    return 0;
}

void suma(int *num1, int *num2)
{
    int resultado = *num1 + *num2;

    printf("La suma es: %d\n", resultado);
}