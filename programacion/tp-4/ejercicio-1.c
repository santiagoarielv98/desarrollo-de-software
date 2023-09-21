#include <stdio.h>

/*
EJERCICIO 1: SUMA DE ELEMENTOS

ESCRIBE UN PROGRAMA QUE CALCULE LA SUMA DE TODOS LOS ELEMENTOS EN UN ARRAY DE
ENTEROS.
*/

int main(int argc, char const *argv[])
{
  int numeros[5];
  int resultado = 0;

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
    resultado += numeros[i];
  }

  printf("El resultado es: %d\n", resultado);

  return 0;
}
