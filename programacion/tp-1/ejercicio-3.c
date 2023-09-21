#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    3-ESCRIBIR UN ALGORITMO EN EL CUAL SE INGRESAN DOS VARIABLES A Y B.REALICE LA SUMA,
    LA RESTA, LA DIVISIÓN Y LA MULTIPLICACIÓN DE A CON B. MUESTRE LOS CUATRO RESULTADOS
    POR PANTALLA. LUEGO INTERCAMBIE EL VALOR DE LAS DOS VARIABLES Y MOSTRAR LOS
    VALORES INTERCAMBIADOS.
  */

  int a, b;
  int auxiliar;

  int suma, resta, division, multiplicacion;

  printf("Ingrese el primer numero: ");
  scanf("%d", &a);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &b);

  suma = a + b;
  printf("La suma de los numeros es: %d\n", suma);

  resta = a - b;
  printf("La resta de los numeros es: %d\n", resta);

  if (b == 0)
  {
    printf("No se puede dividir por 0\n");
  }
  else
  {
    division = a / b;
    printf("La division de los numeros es: %d\n", division);
  }

  multiplicacion = a * b;
  printf("La multiplicacion de los numeros es: %d\n", multiplicacion);

  auxiliar = a;
  a = b;
  b = auxiliar;

  printf("Los numeros intercambiados son: %d y %d\n", a, b);

  return 0;
}
