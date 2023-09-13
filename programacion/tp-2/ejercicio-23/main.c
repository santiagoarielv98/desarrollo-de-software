#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    23-DETERMINE EL MENOR VALOR DE 5 NÚMEROS, INDICANDO ADEMÁS A QUÉ ORDEN
    PERTENECE. CONSIDERE QUE EL MENOR VALOR PUEDE REPETIRSE. POR EJEMPLO: SI LOS
    NÚMEROS INGRESADOS FUERAN: 14, 19, 14, 16, 15. LOS RESULTADOS DEBEN SER: EL
    MENOR VALOR INGRESADO FUE 14 Y CORRESPONDEN AL PRIMER NÚMERO, TERCER
    NÚMERO.
  */

  int numero;
  int menor;
  int orden;

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (i == 0)
    {
      menor = numero;
      orden = i + 1;
    }
    else if (numero < menor)
    {
      menor = numero;
      orden = i + 1;
    }
  }

  printf("El menor valor ingresado fue %d y corresponde al numero %d\n", menor, orden);

  return 0;
}
