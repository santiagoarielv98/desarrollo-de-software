#include <stdio.h>
#include <stdlib.h>

/*
    Se desea realizar una aplicación que pueda controlar los precios de una playa de estacionamiento.
    Cada vez que un cliente desea un estacionamiento se ingresan los siguientes datos:
    DNI, Tipo tarifa, cantidad de horas.
    Tipo de tarifa:
    (1) Auto 50$ la hora.
    (2) Moto 25$ la hora.

    A- Se deberá realizar una función a la cual se le pasen los datos mencionados anteriormente, el
    programa deberá calcular el total a pagar, informarlo y luego guardar en un archivo los siguientes
    datos: Dni, tipo tarifa (1-2), total.


    La carga de datos finaliza cuando se ingresa un DNI = 0.
*/

void calcularTotal(int dni, int tipo_tarifa, int cantidad_horas);

int main()
{
  int dni, tipo_tarifa, cantidad_horas;

  printf("Ingrese DNI (0 para salir): ");
  scanf("%d", &dni);

  while (dni != 0)
  {
    printf("(1) Auto 50$ la hora.\n");
    printf("(2) Moto 25$ la hora.\n");
    printf("Ingrese tipo de tarifa: ");
    scanf("%d", &tipo_tarifa);

    printf("Ingrese cantidad de horas: ");
    scanf("%d", &cantidad_horas);

    calcularTotal(dni, tipo_tarifa, cantidad_horas);

    printf("Ingrese DNI (0 para salir): ");
    scanf("%d", &dni);
  }

  return 0;
}

void calcularTotal(int dni, int tipo_tarifa, int cantidad_horas)
{
  float total;
  FILE *archivo;

  archivo = fopen("estacionamiento.txt", "a");

  if (archivo != NULL)
  {

    switch (tipo_tarifa)
    {
    case 1:
      total = cantidad_horas * 50;
      break;
    case 2:
      total = cantidad_horas * 25;
      break;
    default:
      total = 0;
      printf("Tipo de tarifa incorrecto.\n");
      break;
    }

    printf("Total a pagar: %.2f\n", total);

    fprintf(archivo, "%d %d %.2f\n", dni, tipo_tarifa, total);
  }

  fclose(archivo);
}