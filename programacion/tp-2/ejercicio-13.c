#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    13-DADA LAS EDADES Y ESTATURAS DE 6 ALUMNOS. SE PIDE DETERMINAR: LA EDAD
    PROMEDIO, LA ESTATURA PROMEDIO, LA CANTIDAD DE ALUMNOS MAYORES A 10 AÑOS Y
    LA CANTIDAD DE ALUMNOS QUE MIDEN MÁS DE 1.40 MT.
  */

  int edad, edadTotal, estatura, estaturaTotal, mayoresA10, masDe140, edadPromedio, estaturaPromedio;

  edadTotal = 0;
  estaturaTotal = 0;
  mayoresA10 = 0;
  masDe140 = 0;

  for (int i = 0; i < 6; i++)
  {
    printf("Ingrese la edad del alumno %d: ", i + 1);
    scanf("%d", &edad);

    printf("Ingrese la estatura del alumno %d: ", i + 1);
    scanf("%d", &estatura);

    edadTotal += edad;
    estaturaTotal += estatura;

    if (edad > 10)
    {
      mayoresA10++;
    }

    if (estatura > 140)
    {
      masDe140++;
    }

    printf("\n");
  }

  edadPromedio = edadTotal / 6;
  estaturaPromedio = estaturaTotal / 6;

  printf("La edad promedio es: %d\n", edadPromedio);
  printf("La estatura promedio es: %d\n", estaturaPromedio);

  printf("La cantidad de alumnos mayores a 10 años es: %d\n", mayoresA10);
  printf("La cantidad de alumnos que miden mas de 1.40 mt es: %d\n", masDe140);

  return 0;
}
