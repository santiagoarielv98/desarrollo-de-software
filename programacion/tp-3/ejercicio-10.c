#include <stdio.h>
/*
10. CREAR UN PROGRAMA PARA CALCULAR EL SALARIO SEMANAL DE UNOS EMPLEADOS A LOS QUE SE LES PAGA 50 PESOS POR HORA SI ÉSTAS NO SUPERAN LAS 35 HORAS. CADA HORA POR ENCIMA DE 35 SE CONSIDERARÁ EXTRA Y SE PAGA A 75 PESOS.
EL PROGRAMA PIDE LAS HORAS DEL TRABAJADOR Y DEVUELVE EL SALARIO QUE SE LE DEBE PAGAR.
ADEMÁS EL PROGRAMA DEBE PREGUNTAR SI DESEAMOS CALCULAR OTRO SALARIO, SI ES ASÍ EL PROGRAMA SE VUELVE A REPETIR
EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE CALCULE EL SALARIO.
*/

float calcularSalario(int horas);

int main()
{
    char condicion;
    int horas;
    float salario;

    do
    {
        printf("Ingrese la cantidad de horas trabajadas: ");
        scanf("%d", &horas);

        salario = calcularSalario(horas);

        printf("El salario es: %.2f\n", salario);

        printf("Desea calcular otro salario? (y = si, n = no): ");
        scanf(" %c", &condicion);
    } while (condicion == 'y');

    return 0;
}

float calcularSalario(int horas)
{
    float salario;

    if (horas <= 35)
    {
        salario = horas * 50;
    }
    else
    {
        salario = (35 * 50) + ((horas - 35) * 75);
    }

    return salario;
}
