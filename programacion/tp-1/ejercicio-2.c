#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    2- ESCRIBIR UN PROGRAMA QUE LEA EXACTAMENTE 3 NÚMEROS Y LUEGO ESCRIBA LA SUMA DE
    TODOS ELLOS.
  */

  int num1, num2, num3;

  int suma;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  printf("Ingrese el tercer numero: ");
  scanf("%d", &num3);

  suma = num1 + num2 + num3;

  printf("La suma de los numeros es: %d\n", suma);

  return 0;
}
