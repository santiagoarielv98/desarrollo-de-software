#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
      7- INGRESAR UN IMPORTE EN PESOS Y MOSTRAR EL 80%, 20% Y 15 % DE DICHO VALOR.
  */

  float importe;

  float porcentaje80, porcentaje20, porcentaje15;

  printf("Ingrese el importe: ");
  scanf("%f", &importe);

  porcentaje80 = importe * 0.8;
  porcentaje20 = importe * 0.2;
  porcentaje15 = importe * 0.15;

  printf("El 80 por ciento del importe es: %.2f\n", porcentaje80);
  printf("El 20 por ciento del importe es: %.2f\n", porcentaje20);
  printf("El 15 por ciento del importe es: %.2f\n", porcentaje15);

  return 0;
}
