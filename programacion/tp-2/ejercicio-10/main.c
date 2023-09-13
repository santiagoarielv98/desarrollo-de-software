#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    10-EN UNA OLIMPIADA DE TIRO AL BLANCO SE LLEGA A UN ACUERDO ENTRE LOS
    PARTICIPANTES PARA QUE EL PUNTAJE OBTENIDO SEA CALCULADO EN BASE AL PUNTAJE
    ORIGINAL (0 A 10) ALCANZADO EN EL TIRO EFECTUADO, MULTIPLICADO POR UN FACTOR
    SEGÚN LA SIGUIENTE TABLA:

      PUNTAJE ORIGINAL    FACTOR
      0                   0
      DE 1 A 5            6
      DE 6 A 8            8
      DE 9 A 10           10

    PARA UN TIRO REALIZADO DETERMINE EL PUNTAJE ALCANZADO APLICANDO EL FACTOR
    QUE LE CORRESPONDE.
  */

  int puntajeOriginal;
  int puntajeFinal;

  int bandera = 0;

  printf("Ingrese el puntaje original: ");
  scanf("%d", &puntajeOriginal);

  if (puntajeOriginal == 0)
  {
    puntajeFinal = 0;
  }
  else if (puntajeOriginal >= 1 && puntajeOriginal <= 5)
  {
    puntajeFinal = puntajeOriginal * 6;
  }
  else if (puntajeOriginal >= 6 && puntajeOriginal <= 8)
  {
    puntajeFinal = puntajeOriginal * 8;
  }
  else if (puntajeOriginal >= 9 && puntajeOriginal <= 10)
  {
    puntajeFinal = puntajeOriginal * 10;
  }
  else
  {
    bandera = 1;
    printf("Puntaje invalido\n");
  }

  if (bandera == 0)
  {
    printf("El puntaje final es: %d\n", puntajeFinal);
  }
  else
  {
    printf("No se puede calcular el puntaje final\n");
  }

  return 0;
}
