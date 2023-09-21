#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    11-DADA LA CANTIDAD DE HORAS TRABAJAS, LA ANTIGÜEDAD, Y LA CATEGORÍA DEL
    EMPLEADO, Y ADEMÁS SABEMOS QUE COBRA 650 PESOS POR CADA AÑO TRABAJADO Y
    QUE EL VALOR DE LA HORA SEGÚN LA CATEGORÍA ES: CAT 1= 100, CAT 2= 200, CAT 3=
    250, CAT 4= 300.

    a. DETERMINAR SUELDO DEL EMPLEADO.
    b. INFORMAR SI EL SUELDO SUPERA LOS 20000 PESOS.
  */

  int horasTrabajadas;
  int antiguedad;
  int categoria;
  int sueldo;
  int valorHora;

  int bandera = 0;

  printf("Ingrese la cantidad de horas trabajadas: ");
  scanf("%d", &horasTrabajadas);

  printf("Ingrese la antiguedad: ");
  scanf("%d", &antiguedad);

  printf("Ingrese la categoria: ");
  scanf("%d", &categoria);

  switch (categoria)
  {
  case 1:
    valorHora = 100;
    break;
  case 2:
    valorHora = 200;
    break;
  case 3:
    valorHora = 250;
    break;
  case 4:
    valorHora = 300;
    break;
  default:
    bandera = 1;
    printf("La categoria ingresada no es valida\n");
  }

  if (bandera == 0)
  {
    sueldo = horasTrabajadas * valorHora + antiguedad * 650;
    printf("El sueldo es: %d\n", sueldo);

    if (sueldo > 20000)
    {
      printf("El sueldo supera los 20000 pesos\n");
    }
  }
  else
  {
    printf("No se puede calcular el sueldo\n");
  }

  return 0;
}
