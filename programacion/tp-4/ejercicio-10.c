#include <stdio.h>

/*
EJERCICIO 10:

CREA UN PROGRAMA QUE PERMITA A UN PROFESOR INGRESAR LAS CALIFICACIONES DE LOS
ESTUDIANTES EN UNA CLASE Y LUEGO CALCULE EL PROMEDIO DE CALIFICACIONES Y MUESTRE
CUÁNTOS ESTUDIANTES APROBARON (CALIFICACIÓN MAYOR O IGUAL A 60) Y CUÁNTOS
REPROBARON (CALIFICACIÓN MENOR A 60).
*/

int main(int argc, char const *argv[])
{
  int calificaciones[5];
  int aprobados = 0;
  int reprobados = 0;
  int suma = 0;
  float promedio;

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese la calificación del estudiante %d: ", i + 1);
    scanf("%d", &calificaciones[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    suma += calificaciones[i];
    if (calificaciones[i] >= 60)
    {
      aprobados++;
    }
    else
    {
      reprobados++;
    }
  }

  promedio = suma / 5.00;

  printf("El promedio de calificaciones es: %.2f\n", promedio);
  printf("La cantidad de estudiantes aprobados es: %d\n", aprobados);
  printf("La cantidad de estudiantes reprobados es: %d\n", reprobados);

  return 0;
}
