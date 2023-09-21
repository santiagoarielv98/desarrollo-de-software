#include <stdio.h>

/*
EJERCICIO 13:

SIMULA UN JUEGO EN EL QUE UN JUGADOR PUEDE LANZAR UN DADO VARIAS VECES. UTILIZA UN
ARRAY PARA REGISTRAR LAS PUNTUACIONES DE LOS LANZAMIENTOS Y MUESTRA LA
PUNTUACIÓN TOTAL AL FINAL DEL JUEGO
*/

int main(int argc, char const *argv[])
{
  int cantidadLanzamientos;

  printf("Ingrese la cantidad de lanzamientos: ");
  scanf("%d", &cantidadLanzamientos);

  int lanzamientos[cantidadLanzamientos];
  int suma = 0;

  for (int i = 0; i < cantidadLanzamientos; i++)
  {
    printf("Ingrese valor del lanzamiento %d: ", i + 1);
    scanf("%d", &lanzamientos[i]);
    suma += lanzamientos[i];
  }

  printf("La puntuacion total es: %d\n", suma);

  return 0;
}
