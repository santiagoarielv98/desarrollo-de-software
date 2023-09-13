#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    19- CONSTRUIR UN PROGRAMA QUE PUEDA INGRESAR VARIOS NUMEROS ENTEROS,
    DISTINTOS DE CERO, DE UNO POR VEZ. FINALIZA EL INGRESO DE LOS DATOS ALLLER UN
    VALOR NULO. INFORMAR: A) LACANTIDAD DE VALORES INGRESADOS COMPRENDIDOS
    ENTRE PI Y 3PI. B) ELMENOR VALOR INGRESADO.
  */

  int numero;
  int cantidad = 0;
  int menor;

  int bandera = 0;

  do
  {
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero != 0)
    {
      if (numero >= 3.14 && numero <= 3 * 3.14)
      {
        cantidad++;
      }

      if (bandera == 0)
      {
        menor = numero;
        bandera = 1;
      }
      else
      {
        if (numero < menor)
        {
          menor = numero;
        }
      }
    }
  } while (numero != 0);

  printf("La cantidad de numeros entre pi y 3pi es: %d\n", cantidad);
  printf("El menor numero ingresado es: %d\n", menor);

  return 0;
}
