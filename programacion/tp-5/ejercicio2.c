#include <stdio.h>

/*
2- ESCRIBIR UN PROGRAMA EN C QUE PERMITA INGRESAR LAS TRES NOTAS DE UN
ALUMNO, CALCULAR EL PROMEDIO E INFORME SI ESTA APROBADO O DESAPROBADO. EL
PROMEDIO DEBERÁ CALCULARSE EN LA FUNCIÓN PROMEDIO(), QUE RECIBIRÁ POR
REFERENCIA LAS NOTAS Y DEBERÁ RETORNAR EL VALOR DEL PROMEDIO PARA
EVALUAR LA CONDICIÓN EN EL CUERPO PRINCIPAL.
*/

float promedio(float *n1, float *n2, float *n3);

int main()
{
    float nota1, nota2, nota3;

    printf("Ingrese la nota 1: ");
    scanf("%f", &nota1);

    printf("Ingrese la nota 2: ");
    scanf("%f", &nota2);

    printf("Ingrese la nota 3: ");
    scanf("%f", &nota3);

    float prom = promedio(&nota1, &nota2, &nota3);

    if (prom >= 6)
    {
        printf("El alumno esta aprobado con un promedio de %.2f\n", prom);
    }
    else
    {
        printf("El alumno esta desaprobado con un promedio de %.2f\n", prom);
    }
    return 0;
}

float promedio(float *n1, float *n2, float *n3)
{
    float resultado = (*n1 + *n2 + *n3) / 3;
    return resultado;
}