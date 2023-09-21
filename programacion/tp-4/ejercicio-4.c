#include <stdio.h>

/*
EJERCICIO 4: BUSCAR UN ELEMENTO

ESCRIBE UN PROGRAMA QUE BUSQUE UN NÚMERO ESPECÍFICO EN UN ARRAY E INDIQUE SU
POSICIÓN SI SE ENCUENTRA.
*/

int main(int argc, char const *argv[])
{
  int numeros[5];
  int buscado;
  int encontrado = 0;

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  printf("Ingrese el numero a buscar: ");
  scanf("%d", &buscado);

  for (int i = 0; i < 5; i++)
  {
    if (numeros[i] == buscado)
    {
      printf("El numero %d se encuentra en la posicion %d\n", buscado, i);
      encontrado = 1;
      return 0;
    }
  }

  if (encontrado == 0)
  {
    printf("El numero %d no se encuentra en el array\n", buscado);
  }

  return 0;
}
