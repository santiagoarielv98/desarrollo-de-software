#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  /*
    10-DESARROLLE UN ALGORITMO QUE CALCULE LA HIPOTENUSA DE UN TRIÁNGULO
    RECTÁNGULO CONOCIDAS LAS LONGITUDES DE SUS CATETOS.
  */

  float cateto1, cateto2;
  float hipotenusa;

  printf("Ingrese el cateto 1: ");
  scanf("%f", &cateto1);

  printf("Ingrese el cateto 2: ");
  scanf("%f", &cateto2);

  hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

  printf("La hipotenusa es: %.2f\n", hipotenusa);

  return 0;
}
