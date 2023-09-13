#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    11- DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE SE INGRESE UNA TEMPERATURA EN
    GRADOS CENTÍGRADOS Y LUEGO PASARLAA GRADOS KELVIN Y A GRADOS FAHRENHEIT.
  */

  float centigrados;

  float kelvin, fahrenheit;

  printf("Ingrese la temperatura en grados centigrados: ");
  scanf("%f", &centigrados);

  kelvin = centigrados + 273.15;
  fahrenheit = (centigrados * 1.8) + 32;

  printf("La temperatura en grados kelvin es: %.2f\n", kelvin);
  printf("La temperatura en grados fahrenheit es: %.2f\n", fahrenheit);

  return 0;
}
