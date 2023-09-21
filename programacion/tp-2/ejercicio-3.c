#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    3-LEER TRES NÚMEROS Y MOSTRAR UN MENSAJE SI SE ENCUENTRAN EN ORDEN
    ASCENDENTE.
  */

  int a, b, c;

  printf("Ingrese el primer numero: ");
  scanf("%d", &a);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &b);

  printf("Ingrese el tercer numero: ");
  scanf("%d", &c);

  if (a < b && b < c)
  {
    printf("Los numeros estan en orden ascendente\n");
  }

  return 0;
}
