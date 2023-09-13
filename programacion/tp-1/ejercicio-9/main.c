#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    9 - DESARROLLE UN ALGORITMO QUE PERMITA DETERMINAR EL ÁREA Y VOLUMEN DE UN
    CILINDRO DADO SU RADIO Y SU ALTURA.
  */

  float radio, altura;

  float area;
  float volumen;

  printf("Ingrese el radio: ");
  scanf("%f", &radio);

  printf("Ingrese la altura: ");
  scanf("%f", &altura);

  area = 3.14 * radio * radio;
  volumen = area * altura;

  printf("El area es: %.2f\n", area);
  printf("El volumen es: %.2f\n", volumen);

  return 0;
}
