#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    4-DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE PIDA 2 VALORES Y REALIZA EL CÁLCULO
    (A+B)*(A-B).
  */

  int a, b;

  int resultado;

  printf("Ingrese el primer numero: ");
  scanf("%d", &a);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &b);

  resultado = (a + b) * (a - b);
  printf("El resultado es: %d\n", resultado);

  return 0;
}
