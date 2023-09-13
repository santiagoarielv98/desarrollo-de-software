#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    13- INGRESAR TRES VALORES AMBIENTALES DE TEMPERATURAS Y CALCULAR E
    INFORMAR LA SUMA Y EL PROMEDIO DE DICHOS VALORES.
  */

  float temperatura1, temperatura2, temperatura3;
  float suma;
  float promedio;

  printf("Ingrese la primera temperatura: ");
  scanf("%f", &temperatura1);

  printf("Ingrese la segunda temperatura: ");
  scanf("%f", &temperatura2);

  printf("Ingrese la tercera temperatura: ");
  scanf("%f", &temperatura3);

  suma = temperatura1 + temperatura2 + temperatura3;
  promedio = suma / 3;

  printf("La suma de las temperaturas es: %f\n", suma);
  printf("El promedio de las temperaturas es: %f\n", promedio);

  return 0;
}
