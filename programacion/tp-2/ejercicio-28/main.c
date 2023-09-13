#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    28-CONFECICONAR UN PROGRAMA QUE PUEDA INGRESAR DIVERSOS VALOR NUMERICOS
    QUE CORRESPONDE A TEMPERATURAS MENORES A 99.99 GRADOS, MEDIDAS EN GRADOS
    CENTIGRADOS, QUE FINALIZAN CON UNO QUE TIENE EL VALOR 99.99. SE PIDE
    DETERMINAR E INFORMA: A) EL VALOR MAYOR DETECTADO. B) EL VALOR MENOR
    DETECTADO. C) UNA LISTA CON LOS VALORES INGRESADOS EXPRESADOS EN GRADOS
    CENTIGRADOS YEN GRADOS FAHRENHEIT (F = C/0.555 + 32).
  */

  float temperatura;
  float temperaturaMaxima;
  float temperaturaMinima;
  float temperaturaFahrenheit;

  printf("Ingrese una temperatura: ");
  scanf("%f", &temperatura);

  temperaturaMaxima = temperatura;
  temperaturaMinima = temperatura;

  while (temperatura != 99.99)
  {
    if (temperatura > temperaturaMaxima)
    {
      temperaturaMaxima = temperatura;
    }
    else if (temperatura < temperaturaMinima)
    {
      temperaturaMinima = temperatura;
    }

    temperaturaFahrenheit = temperatura / 0.555 + 32;

    printf("La temperatura ingresada en grados centigrados es de: %.2f\n", temperatura);
    printf("La temperatura ingresada en grados fahrenheit es de: %.2f\n", temperaturaFahrenheit);

    printf("Ingrese una temperatura: ");
    scanf("%f", &temperatura);
  }

  printf("La temperatura maxima es de: %.2f\n", temperaturaMaxima);
  printf("La temperatura minima es de: %.2f\n", temperaturaMinima);

  return 0;
}
