#include <stdio.h>

/*
EJERCICIO 8: COPIAR ELEMENTOS

COPIA LOS ELEMENTOS DE UN ARRAY A OTRO.
*/

int main(int argc, char const *argv[])
{
  int numeros[5];
  int copia[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    copia[i] = numeros[i];
  }

  printf("Array original: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", numeros[i]);
  }

  printf("\nArray copia: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", copia[i]);
  }

  return 0;
}
