#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  /*
    Hollycinema, una empresa que cuenta con salas de cine desea una aplicación para poder obtener
    resultados de las películas que proyecta.

    Introducción a la programación
    Instituto Leopoldo Marechal

    En la actualidad proyecta cuatro películas:
      1- Corazón de León.
      2-El conjuro.
      3-Metegol.
      4-Jobs.
    En dos turnos con distinto precio:
      1-Matine=2500$,
      2-Normal=3500.
    Se sabe que no se puede vender más de 40 entradas por película por día, y solo una entrada por
    persona.

        A- Validar que no se vendan más de 40 entradas por día por película.
        B- Informar Total vendido de Corazón de León en el turno matiné.
        C- Informar El total vendido de todas películas en el turno Normal.
        D- Informa Cantidad total de entradas vendidas.
        E- Informar La película que más entradas vendió.
        F- Informar la película que menos recaudo.
  */
  int pelicula, turno, valor;

  int entrada_pelicula_1, entrada_pelicula_2, entrada_pelicula_3, entrada_pelicula_4;
  int recaudo_pelicula_1, recaudo_pelicula_2, recaudo_pelicula_3, recaudo_pelicula_4;

  int total_entradas_vendidas;

  int total_vendido_pelicula_1_matine;
  int total_vendido_peliculas_normal;

  recaudo_pelicula_1 = 0;
  recaudo_pelicula_2 = 0;
  recaudo_pelicula_3 = 0;
  recaudo_pelicula_4 = 0;

  entrada_pelicula_1 = 0;
  entrada_pelicula_2 = 0;
  entrada_pelicula_3 = 0;
  entrada_pelicula_4 = 0;

  total_vendido_pelicula_1_matine = 0;
  total_vendido_peliculas_normal = 0;
  total_entradas_vendidas = 0;

  printf("Ingrese la pelicula (1-4):\n");
  printf("1- Corazon de Leon\n");
  printf("2- El conjuro\n");
  printf("3- Metegol\n");
  printf("4- Jobs\n");
  scanf("%d", &pelicula);

  while (pelicula != 0)
  {
    printf("Ingrese el turno (1-2):\n");
    printf("1- Matine\n");
    printf("2- Normal\n");
    scanf("%d", &turno);

    switch (turno)
    {
    case 1:
      valor = 2500;
      break;
    case 2:
      valor = 3500;
      total_vendido_peliculas_normal++;
      break;
    default:
      printf("El turno ingresado no es valido\n");
      break;
    }

    switch (pelicula)
    {
    case 1:
      if (entrada_pelicula_1 < 40)
      {
        entrada_pelicula_1++;
        recaudo_pelicula_1 += valor;
        if (turno == 1)
        {
          total_vendido_pelicula_1_matine++;
        }
      }
      else
      {
        printf("No se pueden vender mas entradas para la pelicula 1\n");
      }
      break;
    case 2:
      if (entrada_pelicula_2 < 40)
      {
        entrada_pelicula_2++;
        recaudo_pelicula_2 += valor;
      }
      else
      {
        printf("No se pueden vender mas entradas para la pelicula 2\n");
      }
      break;
    case 3:
      if (entrada_pelicula_3 < 40)
      {
        entrada_pelicula_3++;
        recaudo_pelicula_3 += valor;
      }
      else
      {
        printf("No se pueden vender mas entradas para la pelicula 3\n");
      }
      break;
    case 4:
      if (entrada_pelicula_4 < 40)
      {
        entrada_pelicula_4++;
        recaudo_pelicula_4 += valor;
      }
      else
      {
        printf("No se pueden vender mas entradas para la pelicula 4\n");
      }
      break;
    default:
      printf("La pelicula ingresada no es valida\n");
      if (turno == 2)
      {
        total_vendido_peliculas_normal--;
      }
      break;
    }

    printf("Ingrese la pelicula (1-4): ");
    printf("1- Corazon de Leon\n");
    printf("2- El conjuro\n");
    printf("3- Metegol\n");
    printf("4- Jobs\n");
    scanf("%d", &pelicula);

    printf("\n");
  }

  total_entradas_vendidas = entrada_pelicula_1 + entrada_pelicula_2 + entrada_pelicula_3 + entrada_pelicula_4;

  printf("Total vendido de Corazón de León en el turno matiné: %d\n", total_vendido_pelicula_1_matine);
  printf("Total vendido de todas películas en el turno Normal: %d\n", total_vendido_peliculas_normal);
  printf("Cantidad total de entradas vendidas: %d\n", total_entradas_vendidas);

  if (entrada_pelicula_1 > entrada_pelicula_2 && entrada_pelicula_1 > entrada_pelicula_3 && entrada_pelicula_1 > entrada_pelicula_4)
  {
    printf("La pelicula que mas entradas vendio fue Corazon de Leon\n");
  }
  else if (entrada_pelicula_2 > entrada_pelicula_1 && entrada_pelicula_2 > entrada_pelicula_3 && entrada_pelicula_2 > entrada_pelicula_4)
  {
    printf("La pelicula que mas entradas vendio fue El conjuro\n");
  }
  else if (entrada_pelicula_3 > entrada_pelicula_1 && entrada_pelicula_3 > entrada_pelicula_2 && entrada_pelicula_3 > entrada_pelicula_4)
  {
    printf("La pelicula que mas entradas vendio fue Metegol\n");
  }
  else
  {
    printf("La pelicula que mas entradas vendio fue Jobs\n");
  }

  if (recaudo_pelicula_1 < recaudo_pelicula_2 && recaudo_pelicula_1 < recaudo_pelicula_3 && recaudo_pelicula_1 < recaudo_pelicula_4)
  {
    printf("La pelicula que menos recaudo fue Corazon de Leon\n");
  }
  else if (recaudo_pelicula_2 < recaudo_pelicula_1 && recaudo_pelicula_2 < recaudo_pelicula_3 && recaudo_pelicula_2 < recaudo_pelicula_4)
  {
    printf("La pelicula que menos recaudo fue El conjuro\n");
  }
  else if (recaudo_pelicula_3 < recaudo_pelicula_1 && recaudo_pelicula_3 < recaudo_pelicula_2 && recaudo_pelicula_3 < recaudo_pelicula_4)
  {
    printf("La pelicula que menos recaudo fue Metegol\n");
  }
  else
  {
    printf("La pelicula que menos recaudo fue Jobs\n");
  }

  return 0;
}
