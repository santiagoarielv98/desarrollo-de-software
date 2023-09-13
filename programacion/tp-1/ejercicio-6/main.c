#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
      6-INGRESAR 3 NÚMEROS E IMPRIMIR EL DOBLE, EL TRIPLE Y LA MITAD DE CADA UNO.
  */

  int num1, num2, num3;

  int doble, triple, mitad;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  printf("Ingrese el tercer numero: ");
  scanf("%d", &num3);

  doble = num1 * 2;
  triple = num1 * 3;
  mitad = num1 / 2;

  printf("El doble del primer numero es: %d\n", doble);
  printf("El triple del primer numero es: %d\n", triple);
  printf("La mitad del primer numero es: %d\n", mitad);

  doble = num2 * 2;
  triple = num2 * 3;
  mitad = num2 / 2;

  printf("El doble del segundo numero es: %d\n", doble);
  printf("El triple del segundo numero es: %d\n", triple);
  printf("La mitad del segundo numero es: %d\n", mitad);

  doble = num3 * 2;
  triple = num3 * 3;
  mitad = num3 / 2;

  printf("El doble del tercer numero es: %d\n", doble);
  printf("El triple del tercer numero es: %d\n", triple);
  printf("La mitad del tercer numero es: %d\n", mitad);

  return 0;
}
