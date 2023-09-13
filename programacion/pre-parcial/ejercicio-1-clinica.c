#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  /* SE DESEA REALIZAR UN SISTEMA PARA UNA CLINICA PRIVADA "CLINICA C.A.N.I."
     LA APLICACION TENDRA EL OBJECTIVO DE ASIGNAR TURNOS PARA 4 ESPECIALISTA, A
     DOS TIPOS DE PACIENTES:
     SOCIOS (OBRA SOCIAL), PRIVAD (PARTICULAR).

     PACIENTE
             CONDICION( S=SOCIO,P=PARTICULAR, E=SALIR).
             NOMBRE.
             EDAD.
     ESPECIALIDAD
                 (1) DERMATOLOGIA.
                 (2) CARDIOLOGIA.
                 (3) NEUMONOLOGIA.
                 (4) TRAUMATOLOGIA.

     LA CARGA DE DATOS FINALIZA CON LA CONDICION DEL PACIENTE IGUAL A "E"

     SE PIDE:

     1. PARA  CADA PACIENTE INFORMAR EL VALOR DE LA CONSULTA, OBTENIENDO EL
     MISMO DE LA SIGUIENTE FORMA: SOCIO= $0.00, PARTICULAR0 $4000.0.
     2. CANTIDAD TOTAL DE TURNOS DEL TIPO SOCIO Y PARTICULAR.
     3. TOTAL RECAUDADO POR ESPECIALIDAD
     4. EDAD DEL PACIENTE CON MENOS AÑOS (INFORMAR SOLO LA EDAD).
     5. TOTAL DE TODOS LOS TURNOS DADOS Y DE TODO LO RECAUDADO.
  */

  char condicion;
  char nombre[30];
  int edad;
  int especialidad;
  float valorConsulta;

  int cantidadSocios, cantidadPrivados;
  float totalSocios, totalPrivados;

  int totalDermatologia, totalCardiologia, totalNeumonologia, totalTraumatologia;
  int contadorDermatologia, contadorCardiologia, contadorNeumonologia, contadorTraumatologia;

  int edadMenor;

  int totalTurnos;
  float totalRecaudado;

  cantidadSocios = 0;
  cantidadPrivados = 0;
  totalSocios = 0;
  totalPrivados = 0;

  contadorDermatologia = 0;
  contadorCardiologia = 0;
  contadorNeumonologia = 0;
  contadorTraumatologia = 0;

  totalDermatologia = 0;
  totalCardiologia = 0;
  totalNeumonologia = 0;
  totalTraumatologia = 0;

  edadMenor = 0;

  totalTurnos = 0;
  totalRecaudado = 0;

  printf("Ingrese la condicion (S (socio), P (particular), E (salir)): ");
  scanf("%c", &condicion);

  while (condicion != 'E')
  {
    printf("Ingrese el nombre: ");
    scanf("%s", nombre);

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    printf("Ingrese la especialidad (1 (dermatologia), 2 (cardiologia), 3 (neumonologia), 4 (traumatologia)): ");
    scanf("%d", &especialidad);

    switch (condicion)
    {
    case 'S':
      valorConsulta = 0;
      cantidadSocios++;
      totalSocios += valorConsulta;
      break;
    case 'P':
      valorConsulta = 4000;
      cantidadPrivados++;
      totalPrivados += valorConsulta;
      break;
    default:
      printf("La condicion ingresada no es valida\n");
      break;
    }

    switch (especialidad)
    {
    case 1:
      contadorDermatologia++;
      totalDermatologia += valorConsulta;
      break;
    case 2:
      contadorCardiologia++;
      totalCardiologia += valorConsulta;
      break;
    case 3:
      contadorNeumonologia++;
      totalNeumonologia += valorConsulta;
      break;
    case 4:
      contadorTraumatologia++;
      totalTraumatologia += valorConsulta;
      break;
    default:
      printf("La especialidad ingresada no es valida\n");
      break;
    }

    if (edadMenor == 0)
    {
      edadMenor = edad;
    }
    else if (edad < edadMenor)
    {
      edadMenor = edad;
    }

    totalTurnos++;
    totalRecaudado += valorConsulta;

    printf("El valor de la consulta es de: %.2f\n", valorConsulta);

    printf("Ingrese la condicion (S (socio), P (particular), E (salir)): ");
    scanf("%c", &condicion);
  }

  printf("La cantidad de turnos del tipo socio es de: %d\n", cantidadSocios);
  printf("La cantidad de turnos del tipo particular es de: %d\n", cantidadPrivados);

  printf("El total recaudado por especialidad es de:\n");
  printf("Dermatologia: %d\n", totalDermatologia);
  printf("Cardiologia: %d\n", totalCardiologia);
  printf("Neumonologia: %d\n", totalNeumonologia);
  printf("Traumatologia: %d\n", totalTraumatologia);

  printf("La edad del paciente con menos años es de: %d\n", edadMenor);

  printf("El total de turnos es de: %d\n", totalTurnos);
  printf("El total recaudado es de: %.2f\n", totalRecaudado);

  return 0;
}