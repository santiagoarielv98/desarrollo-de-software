#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    12-DADA UNA CANTIDAD EXPRESADA EN PIES, Y OTRA EN METROS. DETERMINAR LA SUMA PERO
    CONVERTIDA A PULGADAS, A YARDAS, A METROS Y A MILLAS POR SEPARADO. CONSIDERE LAS
    SIGUIENTES EQUIVALENCIAS:
    1 MILLA = 1609 METROS, 1 PULGADA = 0.0254 METROS, 1 YARDA = 3 PIES, 1 PIE = 12 PULGADAS.
  */

  float pies, metros;

  float sumaEnMetros, sumaEnPulgadas, sumaEnYardas, sumaEnMillas;

  printf("Ingrese la cantidad de pies: ");
  scanf("%f", &pies);

  printf("Ingrese la cantidad de metros: ");
  scanf("%f", &metros);

  sumaEnMetros = (pies / 3.281) + metros;
  sumaEnPulgadas = sumaEnMetros / 0.0254;
  sumaEnYardas = sumaEnMetros / 0.9144;
  sumaEnMillas = sumaEnMetros / 1609;

  printf("La suma en metros es: %f\n", sumaEnMetros);
  printf("La suma en pulgadas es: %f\n", sumaEnPulgadas);
  printf("La suma en yardas es: %f\n", sumaEnYardas);
  printf("La suma en millas es: %f\n", sumaEnMillas);

  return 0;
}
