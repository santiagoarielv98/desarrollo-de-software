#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    25-UNA EMPRESA TIENE 65 TRABAJADORES, A CADA UNO DE ELLOS LE PAGA UN SUELDO
    SEGÚN LAS HORAS TRABAJADAS. ADEMÁS A CADA TRABAJADOR CUYO SUELDO SUPERO
    LOS 18000 PESOS LE DESCUENTA 10% POR CONCEPTO DE IMPUESTOS. SE DESEA SABER
    CUÁNTOS TRABAJADORES GANAN MÁS DE 20000 PESOS, CUANTOS GANAN MENOS DE
    12000 PESOS.
  */

  int trabajadores;
  int horasTrabajadas;
  int salarioSemanal;
  int trabajadoresMasDe20000;
  int trabajadoresMenosDe12000;
  int salarioSemanalConImpuestos;

  trabajadores = 0;
  trabajadoresMasDe20000 = 0;
  trabajadoresMenosDe12000 = 0;

  while (trabajadores < 65)
  {
    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horasTrabajadas);

    if (horasTrabajadas <= 35)
    {
      salarioSemanal = horasTrabajadas * 250;
    }
    else
    {
      salarioSemanal = (35 * 250) + ((horasTrabajadas - 35) * 85);
    }

    salarioSemanalConImpuestos = salarioSemanal - (salarioSemanal * 0.1);

    if (salarioSemanalConImpuestos > 20000)
    {
      trabajadoresMasDe20000++;
    }
    else if (salarioSemanalConImpuestos < 12000)
    {
      trabajadoresMenosDe12000++;
    }

    trabajadores++;
  }

  printf("La cantidad de trabajadores que ganan mas de 20000 pesos es de: %d\n", trabajadoresMasDe20000);
  printf("La cantidad de trabajadores que ganan menos de 12000 pesos es de: %d\n", trabajadoresMenosDe12000);

  return 0;
}
