#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    27-SE PONEN A LA VENTA LAS ENTRADAS PARA UN PARTIDO DE FÚTBOL INTERNACIONAL,
    CUYO PRECIO DEPENDE DE LA TRIBUNA, ASÍ: TRIBUNA NORTE Y SUR CUESTAN 250 PESOS,
    TRIBUNA ORIENTE CUESTA 450 PESOS Y TRIBUNA OCCIDENTE CUESTA 650 PESOS.
    DISEÑE LA SOLUCIÓN EN UN PROGRAMA QUE CONTROLE LA VENTA DE DICHAS ENTRADAS A
    FIN DE PODER SABER LA CANTIDAD DE PERSONAS QUE ASISTEN A CADA TRIBUNA, LA
    CANTIDAD TOTAL DE PERSONAS Y EL MONTO TOTAL RECAUDADO POR LA VENTA DE TODAS
    LAS ENTRADAS. FINALIZA LA VENTA DE ENTRADAS CUANDO SE INGRESA UNA VENTA A
    TRIBUNA IGUAL A “ZZZ”.
  */

  int tribuna;
  int tribunaNorte;
  int tribunaSur;
  int tribunaOriente;
  int tribunaOccidente;
  int totalPersonas;
  int totalRecaudado;

  tribunaNorte = 0;
  tribunaSur = 0;
  tribunaOriente = 0;
  tribunaOccidente = 0;
  totalPersonas = 0;
  totalRecaudado = 0;

  printf("Ingrese la tribuna (1 (norte), 2 (sur), 3 (oriente), 4 (occidente), 0 (salir)): ");
  scanf("%d", tribuna);

  while (tribuna != 0)
  {

    switch (tribuna)
    {
    case 1:
      tribunaNorte++;
      totalPersonas++;
      totalRecaudado += 250;
      break;
    case 2:
      tribunaSur++;
      totalPersonas++;
      totalRecaudado += 250;
      break;
    case 3:
      tribunaOriente++;
      totalPersonas++;
      totalRecaudado += 450;
      break;
    case 4:
      tribunaOccidente++;
      totalPersonas++;
      totalRecaudado += 650;
      break;
    default:
      printf("La tribuna ingresada no es valida\n");
      break;
    }

    printf("Ingrese la tribuna (norte y sur, oriente, occidente): ");
    scanf("%s", tribuna);
  }

  printf("La cantidad de personas que asistieron a la tribuna norte es de: %d\n", tribunaNorte);
  printf("La cantidad de personas que asistieron a la tribuna sur es de: %d\n", tribunaSur);
  printf("La cantidad de personas que asistieron a la tribuna oriente es de: %d\n", tribunaOriente);
  printf("La cantidad de personas que asistieron a la tribuna occidente es de: %d\n", tribunaOccidente);

  printf("La cantidad total de personas que asistieron al partido es de: %d\n", totalPersonas);
  printf("El monto total recaudado por la venta de todas las entradas es de: %d\n", totalRecaudado);

  return 0;
}
