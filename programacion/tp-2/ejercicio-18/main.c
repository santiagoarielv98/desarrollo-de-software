#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    18-INGRESAR CÓDIGO DE ARTICULO Y PRECIO, HASTA UN CÓDIGO DE ARTICULO IGUAL 0,
    DETERMINAR EL CÓDIGO DE ARTICULO DEL PRECIO MÁS CARO Y EL DE MENOR PRECIO.
  */

  int codigoArticulo, codigoArticuloMasCaro, codigoArticuloMasBarato;

  float precio, precioMasCaro, precioMasBarato;

  printf("Ingrese el codigo de articulo: ");
  scanf("%d", &codigoArticulo);

  codigoArticuloMasCaro = codigoArticulo;
  codigoArticuloMasBarato = codigoArticulo;

  printf("Ingrese el precio: ");
  scanf("%f", &precio);

  precioMasCaro = precio;
  precioMasBarato = precio;

  while (codigoArticulo != 0)
  {
    printf("Ingrese el codigo de articulo: ");
    scanf("%d", &codigoArticulo);

    if (codigoArticulo != 0)
    {
      printf("Ingrese el precio: ");
      scanf("%f", &precio);

      if (precio > precioMasCaro)
      {
        precioMasCaro = precio;
        codigoArticuloMasCaro = codigoArticulo;
      }
      else if (precio < precioMasBarato)
      {
        precioMasBarato = precio;
        codigoArticuloMasBarato = codigoArticulo;
      }
    }
  }

  printf("El codigo de articulo del precio mas caro es: %d\n", codigoArticuloMasCaro);
  printf("El codigo de articulo del precio mas barato es: %d\n", codigoArticuloMasBarato);

  return 0;
}
