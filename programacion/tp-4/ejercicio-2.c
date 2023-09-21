#include <stdio.h>

/*
EJERCICIO 2: PROMEDIO

CALCULAR EL PROMEDIO DE LOS ELEMENTOS EN UN ARRAY DE NÚMEROS EN COMA FLOTANTE.
*/

int main(int argc, char const *argv[])
{
  float numeros[5];
  float total = 0;
  float promedio;

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese numero %d: ", i + 1);
    scanf("%f", &numeros[i]);
    total += numeros[i];
  }

  promedio = total / 5;

  printf("El promedio es: %f\n", promedio);

  return 0;
}
