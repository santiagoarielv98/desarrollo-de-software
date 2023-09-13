#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    14-SE REALIZA UNA ENCUESTA ENTRE 100 PERSONAS QUE VOTAN POR LOS CANDIDATOS A
    O B. SE PIDE INFORMAR LOS PORCENTAJES OBTENIDOS POR CADA CANDIDATO.
  */

  int voto;
  int votosA = 0, votosB = 0;

  for (int i = 0; i < 100; i++)
  {
    printf("Ingrese el voto de la persona %d: ", i + 1);
    scanf("%d", &voto);

    switch (voto)
    {
    case 1:
      votosA++;
      break;
    case 2:
      votosB++;
      break;
    default:
      printf("Voto invalido.\n");
      i--;
      break;
    }
  }

  return 0;
}
