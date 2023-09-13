#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    2-DADOS 2 NÚMEROS SI EL PRIMERO ES MAYOR QUE EL SEGUNDO RESTARLOS SINO
    MULTIPLICARLOS. INFORMAR ELRESULTADO.
  */

  int num1, num2, resultado;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  if (num1 > num2)
  {
    resultado = num1 - num2;
  }
  else
  {
    resultado = num1 * num2;
  }

  printf("El resultado es: %d\n", resultado);

  return 0;
}
