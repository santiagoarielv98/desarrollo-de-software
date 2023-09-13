#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    1- ESCRIBIR UN ALGORITMO QUE PIDA, NOMBRE, APELLIDO, TELÉFONO Y EDAD DE UNA
    PERSONA Y LUEGO LO MUESTRE POR PANTALLA.
  */

  char nombre[20];
  char apellido[20];
  char telefono[20];
  int edad;

  printf("Ingrese su nombre: ");
  scanf("%s", nombre);

  printf("Ingrese su apellido: ");
  scanf("%s", apellido);

  printf("Ingrese su telefono: ");
  scanf("%s", telefono);

  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  printf("Nombre: %s\n", nombre);
  printf("Apellido: %s\n", apellido);
  printf("Telefono: %s\n", telefono);
  printf("Edad: %d\n", edad);

  return 0;
}
