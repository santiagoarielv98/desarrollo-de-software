#include <stdio.h>

/*
EJERCICIO 6: CONTAR ELEMENTOS PARES E IMPARES

CUENTA CUÁNTOS NÚMEROS PARES E IMPARES HAY EN UN ARRAY DE ENTEROS.
*/

int main(int argc, char const *argv[])
{
  int numeros[5];
  int pares = 0, impares = 0;

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese numero %d: ", i + 1);
    scanf("%d", &numeros[i]);

    if (numeros[i] % 2 == 0)
    {
      pares++;
    }
    else
    {
      impares++;
    }
  }

  printf("Hay %d numeros pares y %d numeros impares.\n", pares, impares);

  return 0;
}
