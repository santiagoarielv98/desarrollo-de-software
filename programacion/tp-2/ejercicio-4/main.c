#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    4-DADOS LA CANTIDAD DE VARONES Y EL DE MUJERES DE UN CURSO, CALCULAR EL TOTAL
    DE ALUMNOS. SI EL TOTAL SUPERA LOS 35 ALUMNOS INFORMAR CURSO NUMEROSO.
    EN CASO CONTRARIO, CALCULAR E INFORMAR LO QUE SE DEBERÁ PAGAR PARA REALIZAR
    UNA SALIDA CON TODOS, SI CADA ALUMNO PAGA $55.-
  */

  int cantVarones;
  int cantMujeres;
  int totalAlumnos;
  int totalAPagar;

  printf("Ingrese la cantidad de varones: ");
  scanf("%d", &cantVarones);

  printf("Ingrese la cantidad de mujeres: ");
  scanf("%d", &cantMujeres);

  totalAlumnos = cantVarones + cantMujeres;

  if (totalAlumnos > 35)
  {
    printf("El curso es numeroso\n");
  }
  else
  {
    totalAPagar = totalAlumnos * 55;
    printf("El total a pagar es: %d\n", totalAPagar);
  }

  return 0;
}
