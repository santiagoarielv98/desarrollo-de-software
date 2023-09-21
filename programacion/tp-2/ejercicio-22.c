#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    22-CREAR UN PROGRAMA PARA CALCULAR EL SALARIO SEMANAL DE UNOS EMPLEADOS A
    LOS QUE SE LES PAGA 250 PESOS POR HORA SI ÉSTAS NO SUPERAN LAS 35 HORAS. CADA
    HORA POR ENCIMA DE 35 SE CONSIDERARÁ EXTRA Y SE PAGA A 85 PESOS.
    EL PROGRAMA PIDE LAS HORAS DEL TRABAJADOR Y DEVUELVE EL SALARIO QUE SE LE
    DEBE PAGAR.
    ADEMÁS EL PROGRAMA DEBE PREGUNTAR SI DESEAMOS CALCULAR OTRO SALARIO, SI ES
    ASÍ EL PROGRAMA SE VUELVE A REPETIR
  */

  int horasTrabajadas;
  int horasExtras;
  int salarioSemanal;
  char respuesta;

  respuesta = 's';

  while (respuesta == 's')
  {
    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horasTrabajadas);

    if (horasTrabajadas <= 35)
    {
      salarioSemanal = horasTrabajadas * 250;
    }
    else
    {
      horasExtras = horasTrabajadas - 35;
      salarioSemanal = (35 * 250) + (horasExtras * 85);
    }

    printf("El salario semanal es: %d\n", salarioSemanal);

    printf("Desea calcular otro salario? (s/n): ");
    printf("\nIngrese las horas trabajadas: ");
    scanf("%c", &respuesta);
  }

  return 0;
}
