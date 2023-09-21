#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    1-DADA LA NOTA Y EL LEGAJO DE UN ALUMNO. INFORMAR EL LEGAJO Y SI LA NOTA ES
    SUPERIOR A 6.
  */

  int nota;
  int legajo;

  printf("Ingrese la nota del alumno: ");
  scanf("%d", &nota);

  printf("Ingrese el legajo del alumno: ");
  scanf("%d", &legajo);

  printf("El legajo del alumno es: %d\n", legajo);

  if (nota > 6)
  {
    printf("La nota del alumno es superior a 6\n");
  }

  return 0;
}
