#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    8-REALIZAR UN PROGRAMA QUE PIDA EL INGRESO DE 2 NÚMEROS Y LA OPERACIÓN A
    REALIZAR ENTRE ELLOS Y MUESTRE EL RESULTADO DE LA OPERACIÓN.
  */

  int num1, num2, resultado;
  char operacion;

  int bandera = 0;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  printf("Ingrese la operacion a realizar (+, -, *, /): ");
  scanf(" %c", &operacion);

  resultado = 0;

  switch (operacion)
  {
  case '+':
    resultado = num1 + num2;
    break;
  case '-':
    resultado = num1 - num2;
    break;
  case '*':
    resultado = num1 * num2;
    break;
  case '/':
    if (num2 == 0)
    {
      bandera = 1;
      printf("No se puede dividir por 0\n");
    }
    else
    {
      resultado = num1 / num2;
    }
    break;
  default:
    bandera = 1;
    printf("Operacion invalida\n");
  }

  if (bandera == 0)
  {
    printf("El resultado es: %d\n", resultado);
  }
  else
  {
    printf("No se puede realizar la operacion\n");
  }

  return 0;
}
