#include <stdio.h>

/*
EJERCICIO 3: MÁXIMO Y MÍNIMO

ENCUENTRA EL VALOR MÁXIMO Y MÍNIMO EN UN ARRAY DE ENTEROS.
*/

int main(int argc, char const *argv[])
{
  int numeros[5];
  int minimo, maximo;

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  minimo = numeros[0];
  maximo = numeros[0];

  for (int i = 1; i < 5; i++)
  {
    if (numeros[i] < minimo)
    {
      minimo = numeros[i];
    }
    if (numeros[i] > maximo)
    {
      maximo = numeros[i];
    }
  }

  printf("El minimo es: %d\n", minimo);
  printf("El maximo es: %d\n", maximo);

  return 0;
}
