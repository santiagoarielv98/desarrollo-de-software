#include <stdio.h>

/*
9. DADA LA CANTIDAD DE HORAS TRABAJADAS, LA ANTIGÜEDAD, Y LA CATEGORÍA DEL EMPLEADO.
a.	SABIENDO QUE COBRA 50 PESOS POR CADA AÑO TRABAJADO Y QUE EL VALOR DE LA HORA SEGÚN LA CATEGORÍA: CAT 1= 10, CAT 2= 20, CAT 3= 25, CAT 4= 30.
b.	DETERMINAR SUELDO DEL EMPLEADO.
c.	INFORMAR SI EL SUELDO SUPERA LOS 1000 PESOS.
EFECTUAR EL EJERCICIO CON AL MENOS 2 FUNCIONES: UNA PARA CALCULAR EL COBRO POR ANTIGÜEDAD Y OTRA PARA CALCULAR EL COBRO POR HORAS.
*/

int calcularPorAntiguedad(int edad);
int calcularPorHoras(int cantidad_horas, int categoria);
void sueldoSuperior(int sueldo);

int main(int argc, char const *argv[])
{
    int cantidad_horas, antiguedad, categoria, sueldo, valor_por_hora, valor_por_antiguedad;

    printf("Ingrese cantidad de horas trabajadas: ");
    scanf("%d", &cantidad_horas);

    printf("Ingrese la antiguedad: ");
    scanf("%d", &antiguedad);

    printf("Ingrese categoria del empleado: ");
    scanf("%d", &categoria);

    sueldo = calcularPorHoras(cantidad_horas, categoria) + calcularPorAntiguedad(antiguedad);

    printf("el sueldo es de %d", sueldo);
    sueldoSuperior(sueldo);

    return 0;
}

int calcularPorAntiguedad(int antiguedad)
{
    return antiguedad * 50;
}

int calcularPorHoras(int cantidad_horas, int categoria)
{
    int valorHora;

    switch (categoria)
    {
    case 1:
        valorHora = 10;
        break;
    case 2:
        valorHora = 20;
        break;
    case 3:
        valorHora = 25;
        break;
    case 4:
        valorHora = 30;
        break;
    default:
        valorHora = 0;
        break;
    }

    return cantidad_horas * valorHora;
}

void sueldoSuperior(int sueldo)
{
    if (sueldo > 1000)
    {
        printf("\nEl sueldo supera los 1000");
    }
}