#include <stdio.h>

/*
EJERCICIO 14:

CREA UN PROGRAMA QUE CONVIERTA UNA SERIE DE TEMPERATURAS EN GRADOS CELSIUS A
GRADOS FAHRENHEIT. UTILIZA UN ARRAY PARA ALMACENAR LAS TEMPERATURAS EN GRADOS
CELSIUS Y LUEGO MUESTRA LAS TEMPERATURAS CONVERTIDAS EN GRADOS FAHRENHEIT
*/

int main(int argc, char const *argv[])
{
  float celsius[5];
  float fahrenheit[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    fahrenheit[i] = (celsius[i] * 9 / 5) + 32;
  }

  for (int i = 0; i < 5; i++)
  {
    printf("La temperatura en grados Fahrenheit es: %.2f\n", fahrenheit[i]);
  }

  return 0;
}
