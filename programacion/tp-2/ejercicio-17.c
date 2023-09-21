#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    17-DESARROLLE UN ALGORITMO QUE LE PERMITA DETERMINAR DE UNA LISTA DE
    NÚMEROS:

    a. CUANTOS ESTÁN ENTRE EL 50 Y EL 75, AMBOS INCLUSIVE.
    b. CUANTOS SON MAYORES DE 80.
    c. CUANTOS SON MENORES DE 30.

    EL ALGORITMO FINALIZA CUANDO SE INGRESA EL NÚMERO 0.
  */

  int numero;
  int contadorA;
  int contadorB;
  int contadorC;

  numero = 1;
  contadorA = 0;
  contadorB = 0;
  contadorC = 0;

  while (numero != 0)
  {
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero >= 50 && numero <= 75)
    {
      contadorA++;
    }
    else if (numero > 80)
    {
      contadorB++;
    }
    else if (numero < 30)
    {
      contadorC++;
    }
  }

  printf("La cantidad de numeros entre 50 y 75 es: %d\n", contadorA);
  printf("La cantidad de numeros mayores a 80 es: %d\n", contadorB);
  printf("La cantidad de numeros menores a 30 es: %d\n", contadorC);

  return 0;
}
