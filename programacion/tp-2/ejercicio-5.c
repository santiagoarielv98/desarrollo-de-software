#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    5-ESCRIBIR UN ALGORITMO QUE SOLICITE UNA NOTA E IMPRIMA POR PANTALLA LA
    CALIFICACIÓN EN FORMATO “APROBÓ” O “NO APROBÓ” SEGÚN SI LA NOTA ES MAYOR O
    IGUAL QUE 7 O MENOR QUE 7.
  */
  int nota;

  printf("Ingrese la nota del alumno: ");
  scanf("%d", &nota);

  if (nota >= 7)
  {
    printf("APROBO\n");
  }
  else
  {
    printf("NO APROBO\n");
  }

  return 0;
}
