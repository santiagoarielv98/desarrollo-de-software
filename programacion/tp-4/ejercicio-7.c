#include <stdio.h>

/*
EJERCICIO 7: ELIMINAR ELEMENTOS REPETIDOS

ELIMINA LOS ELEMENTOS DUPLICADOS EN UN ARRAY.
*/
int main(int argc, char const *argv[])
{
  int numeros[5];

  int unicos[5];
  int unicos_cantidad = 0;

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    int esUnico = 1;

    for (int j = 0; j < unicos_cantidad; j++)
    {
      if (numeros[i] == unicos[j])
      {
        esUnico = 0;
      }
    }

    if (esUnico == 1)
    {
      unicos[unicos_cantidad] = numeros[i];
      unicos_cantidad++;
    }
  }

  printf("Array original: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", numeros[i]);
  }

  printf("\nArray sin elementos repetidos: ");
  for (int i = 0; i < unicos_cantidad; i++)
  {
    printf("%d ", unicos[i]);
  }

  return 0;
}
