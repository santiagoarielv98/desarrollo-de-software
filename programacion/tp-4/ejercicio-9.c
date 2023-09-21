#include <stdio.h>

/*
EJERCICIO 9: MULTIPLICAR POR UN ESCALAR

MULTIPLICA CADA ELEMENTO EN UN ARRAY POR UN NÚMERO ESCALAR DADO.
*/

int main(int argc, char const *argv[])
{
  int filas, columnas, escalar;

  printf("Ingrese la cantidad de filas de la matriz: ");
  scanf("%d", &filas);

  printf("Ingrese la cantidad de columnas de la matriz: ");
  scanf("%d", &columnas);

  printf("Ingrese el escalar: ");
  scanf("%d", &escalar);

  int matriz[filas][columnas];

  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      printf("Ingrese el valor de la posición [%d]-[%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nMatriz original:\n");
  for (int i = 0; i < filas; i++)
  {
    printf("|");
    for (int j = 0; j < columnas; j++)
    {
      printf(" %4d ", matriz[i][j]);
    }
    printf("|\n");
  }

  printf("\nMatriz multiplicada por %d:\n", escalar);
  for (int i = 0; i < filas; i++)
  {
    printf("|");
    for (int j = 0; j < columnas; j++)
    {
      printf(" %4d ", matriz[i][j] * escalar);
    }
    printf("|\n");
  }
}
