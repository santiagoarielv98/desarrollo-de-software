#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    7- DADO UN NÚMERO VERIFICAR SI ES POSITIVO, NEGATIVO O NULO.
  */

  int numero;

  printf("Ingrese un numero: ");
  scanf("%d", &numero);

  if (numero > 0)
  {
    printf("El numero es positivo\n");
  }
  else if (numero < 0)
  {
    printf("El numero es negativo\n");
  }
  else
  {
    printf("El numero es nulo\n");
  }

  return 0;
}
