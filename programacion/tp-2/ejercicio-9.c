#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    9-DADO LOS 3 LADOS DE UN TRIÁNGULO DETERMINAR QUÉ TIPO DE TRIANGULO ES.
  */

  int lado1, lado2, lado3;

  printf("Ingrese el primer lado del triangulo: ");
  scanf("%d", &lado1);

  printf("Ingrese el segundo lado del triangulo: ");
  scanf("%d", &lado2);

  printf("Ingrese el tercer lado del triangulo: ");
  scanf("%d", &lado3);

  if (lado1 == lado2 && lado2 == lado3)
  {
    printf("El triangulo es equilatero\n");
  }
  else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
  {
    printf("El triangulo es isosceles\n");
  }
  else
  {
    printf("El triangulo es escaleno\n");
  }

  return 0;
}
