#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    16-DESARROLLE UN DIAGRAMA DE FLUJO QUE PERMITA CALCULAR EL PROMEDIO DE LAS
    NOTAS DE UN CURSO. EL ALGORITMO TERMINA CUANDO SE INGRESA LA NOTA 0.
  */

  int nota;
  int contador;
  int suma;
  float promedio;

  nota = 1;
  contador = 0;
  suma = 0;

  while (nota != 0)
  {
    printf("Ingrese una nota: ");
    scanf("%d", &nota);

    if (nota != 0)
    {
      suma += nota;
      contador++;
    }
  }

  if (contador == 0)
  {
    printf("No se ingresaron notas\n");
  }
  else
  {
    promedio = suma / contador;
  }

  printf("El promedio de las notas es: %.2f\n", promedio);

  return 0;
}
