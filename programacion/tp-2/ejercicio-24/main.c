#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    24- UN NEGOCIO DE PERFUMERÍA EFECTÚA DESCUENTOS EN SUS VENTAS SEGÚN EL IMPORTE DE
    ESTAS, CON LA SIGUIENTE ESCALA:

          MENOR A 50 PESOS EL 3.5%
          ENTRE 50 Y 150 PESOS EL 10%
          ENTRE 151 Y 300 PESOS EL 20%
          MAYOR A 300 PESOS EL 25%

    CONFECCIONAR UN PROGRAMA QUE SOLICITE UN PRECIO ORIGINAL E INFORME: EL DESCUENTO
    A EFECTUAR Y PRECIO NETO A COBRAR CON MENSAJES ACLARATORIOS. SE DEBE CONTEMPLAR
    QUE SE PUEDE INGRESAR VARIOS IMPORTES Y PARA FINALIZAR SE INGRESA UN VALOR NEGATIVO.
  */

  float precioOriginal;
  float precioNeto;
  float descuento;

  printf("Ingrese el precio original: ");
  scanf("%f", &precioOriginal);

  while (precioOriginal > 0)
  {
    if (precioOriginal < 50)
    {
      descuento = precioOriginal * 0.035;
    }
    else if (precioOriginal >= 50 && precioOriginal <= 150)
    {
      descuento = precioOriginal * 0.1;
    }
    else if (precioOriginal >= 151 && precioOriginal <= 300)
    {
      descuento = precioOriginal * 0.2;
    }
    else
    {
      descuento = precioOriginal * 0.25;
    }

    precioNeto = precioOriginal - descuento;

    printf("El descuento a efectuar es de: %.2f\n", descuento);
    printf("El precio neto a cobrar es de: %.2f\n", precioNeto);

    printf("Ingrese el precio original: ");
    scanf("%f", &precioOriginal);
  }

  return 0;
}
