#include <stdio.h>
#include <stdlib.h>

//  para usar la funcion strcmp()
#include <string.h>

int main(int argc, char const *argv[])
{
  /*
    21-EN UN CAMPEONATO INTER-COLEGIAL SE DESEA CONOCER LA CATEGORÍA A LA QUE
    CORRESPONDE CADA PARTICIPANTE.
    SE INGRESA EL NOMBRE Y LA EDAD DE CADA UNO DE ELLOS.
    EL PROGRAMA TERMINA CUANDO EL NOMBRE ES IGUAL A "ZZZ".
      - CATEGORÍA INFANTIL, PARA LOS MENORES DE 11 AÑOS
      - CATEGORÍA PUBER, ENTRE LOS 11 Y LOS 14 AÑOS
      - CATEGORÍA JUVENIL, PARA LOS MAYORES DE 14 AÑOS

    INFORMAR NOMBRE Y CATEGORÍA.
  */

  char nombre[20];
  int edad;

  printf("Ingrese el nombre: ");
  scanf("%s", nombre);

  /*
    strcmp() compara dos cadenas de caracteres y devuelve 0 si son iguales
  */

  while (strcmp(nombre, "ZZZ") != 0)
  {
    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    if (edad < 11)
    {
      printf("La categoria es infantil\n");
    }
    else if (edad >= 11 && edad <= 14)
    {
      printf("La categoria es puber\n");
    }
    else
    {
      printf("La categoria es juvenil\n");
    }

    printf("Ingrese el nombre: ");
    scanf("%s", nombre);
  }

  return 0;
}
