#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    14-DESARROLLE UN ALGORITMO PARA CALCULAR EL IMPORTE DE UNA VENTA EN UN
    SUPERMERCADO. EL USUARIO DEBE INGRESAR EL NOMBRE DEL PRODUCTO, EL PRECIO POR
    UNIDAD Y EL NÚMERO DE UNIDADES. EL PROGRAMA MOSTRARÁ POR PANTALLA EL NOMBRE
    DEL PRODUCTO, EL NÚMERO DE UNIDADES VENDIDAS Y EL PRECIO TOTAL.
  */

  char nombre[50];
  float precio, total;
  int unidades;

  printf("Ingrese el nombre del producto: ");
  scanf("%s", nombre);

  printf("Ingrese el precio por unidad: ");
  scanf("%f", &precio);

  printf("Ingrese el numero de unidades: ");
  scanf("%d", &unidades);

  total = precio * unidades;

  printf("El nombre del producto es: %s\n", nombre);
  printf("El numero de unidades vendidas es: %d\n", unidades);
  printf("El precio total es: %.2f\n", total);

  return 0;
}
