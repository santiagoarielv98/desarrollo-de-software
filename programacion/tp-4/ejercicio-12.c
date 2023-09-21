#include <stdio.h>

/*
EJERCICIO 12:

SOLICITA AL USUARIO QUE INGRESE LAS EDADES DE 10 PERSONAS EN UN ARRAY Y LUEGO
CALCULA Y MUESTRA EL PROMEDIO DE EDAD.
*/

int main(int argc, char const *argv[])
{
  int edades[10];
  int suma = 0;
  int promedio;

  for (int i = 0; i < 10; i++)
  {
    printf("Ingrese la edad de la persona %d: ", i + 1);
    scanf("%d", &edades[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    suma += edades[i];
  }

  promedio = suma / 10;

  printf("El promedio de edad es: %d\n", promedio);

  return 0;
}
