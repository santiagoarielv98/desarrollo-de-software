#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    29-ESCRIBIR UN ALGORITMO QUE PERMITA EFECTUAR EL CÁLCULO DEL ÁREA DE UN
    CUADRADO, UN CÍRCULO, UN TRIÁNGULO EQUILÁTERO SEGÚN LA OPCIÓN SELECCIONADA
    POR EL USUARIO A TRAVÉS DE UN MENÚ. CREAR DOS VERSIONES DEL ALGORITMO: UNA
    CON SI/SINO Y LA OTRA CON SEGÚN.
  */

  int opcion;
  float lado, radio, base, altura, area;

  printf("Ingrese una opcion:\n");
  printf("1) Calcular el area de un cuadrado\n");
  printf("2) Calcular el area de un circulo\n");
  printf("3) Calcular el area de un triangulo equilatero\n");
  scanf("%d", &opcion);

  if (opcion == 1)
  {
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("El area del cuadrado es de: %.2f\n", area);
  }
  else if (opcion == 2)
  {
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    area = 3.14 * radio * radio;

    printf("El area del circulo es de: %.2f\n", area);
  }
  else if (opcion == 3)
  {
    printf("Ingrese la base del triangulo: ");
    scanf("%f", &base);

    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("El area del triangulo es de: %.2f\n", area);
  }
  else
  {
    printf("La opcion ingresada no es valida\n");
  }

  return 0;
}
