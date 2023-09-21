#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    5-ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL
    NÚMERO BASE Y EL EXPONENTE.
  */

  int base, exponente;

  int resultado;

  printf("Ingrese la base: ");
  scanf("%d", &base);

  printf("Ingrese el exponente: ");
  scanf("%d", &exponente);

  resultado = 1;

  for (int i = 0; i < exponente; i++)
  {
    resultado = resultado * base;
  }

  printf("El resultado es: %d\n", resultado);

  return 0;
}
