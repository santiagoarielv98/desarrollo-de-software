#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    6-DESARROLLE UN ALGORITMO QUE PERMITA LEER UN VALOR CUALQUIER N Y DETERMINE
    SI DICHO NÚMERO ES PAR O IMPAR.
  */

  int n;

  printf("Ingrese un numero: ");
  scanf("%d", &n);

  if (n % 2 == 0)
  {
    printf("El numero es par\n");
  }
  else
  {
    printf("El numero es impar\n");
  }

  return 0;
}
