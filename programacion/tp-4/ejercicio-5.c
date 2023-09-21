#include <stdio.h>

/*
EJERCICIO 5: ORDENAR EL ARRAY

ORDENA LOS ELEMENTOS EN UN ARRAY EN ORDEN ASCENDENTE.
*/

int main(int argc, char const *argv[])
{
  int numeros[5];
  int auxiliar;

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (numeros[i] > numeros[j])
      {
        auxiliar = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = auxiliar;
      }
    }
  }

  printf("El array ordenado es: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", numeros[i]);
  }

  return 0;
}
