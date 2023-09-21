#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    8- ESCRIBIR UN ALGORITMO QUE PIDA UNA CANTIDAD EN PESOS ARGENTINOS Y LA CONVIERTA
    EN DÓLARES ESTADOUNIDENSES (1 DÓLAR ESTADOUNIDENSE = 15.40 PESOS ARGENTINOS).
  */

  float pesos;
  float dolares;

  printf("Ingrese la cantidad de pesos: ");
  scanf("%f", &pesos);

  dolares = pesos / 15.40;

  printf("La cantidad de dolares es: %.2f\n", dolares);

  return 0;
}
