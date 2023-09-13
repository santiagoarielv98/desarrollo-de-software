#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    20-UNA EMPRESA TIENE 4 VENDEDORES. CADA VENDEDOR CUANDO REALIZA UNA VENTA
    EMITE UNA FACTURA. SE PROCESAN LOS DATOS HASTA QUE SE INGRESA UN NUMERO DE
    FACTURA IGUAL 0. LOS DATOS INGRESADOS DE LA FACTURA SON: No DE FACTURA, No DE
    VENDEDOR, MONTO DE LA FACTURA. SE DESEA CALCULAR E INFORMAR:

      A. CUANTAS FACTURAS EMITIÓ CADA VENDEDOR.
      B. TOTAL FACTURADO POR CADA VENDEDOR Y EL TOTAL FINAL ACUMULADO
      DE LOS VENDEDORES.
  */

  int numeroFactura;
  int numeroVendedor;
  float montoFactura;
  int contadorFacturas;
  int contadorVendedor1;
  int contadorVendedor2;
  int contadorVendedor3;
  int contadorVendedor4;
  float totalVendedor1;
  float totalVendedor2;
  float totalVendedor3;
  float totalVendedor4;
  float totalFinal;

  contadorFacturas = 0;
  contadorVendedor1 = 0;
  contadorVendedor2 = 0;
  contadorVendedor3 = 0;
  contadorVendedor4 = 0;
  totalVendedor1 = 0;
  totalVendedor2 = 0;
  totalVendedor3 = 0;
  totalVendedor4 = 0;
  totalFinal = 0;

  printf("Ingrese el numero de factura: ");
  scanf("%d", &numeroFactura);

  while (numeroFactura != 0)
  {
    printf("Ingrese el numero de vendedor: ");
    scanf("%d", &numeroVendedor);

    printf("Ingrese el monto de la factura: ");
    scanf("%f", &montoFactura);

    switch (numeroVendedor)
    {
    case 1:
      contadorVendedor1++;
      totalVendedor1 += montoFactura;
      break;
    case 2:
      contadorVendedor2++;
      totalVendedor2 += montoFactura;
      break;
    case 3:
      contadorVendedor3++;
      totalVendedor3 += montoFactura;
      break;
    case 4:
      contadorVendedor4++;
      totalVendedor4 += montoFactura;
      break;
    default:
      printf("El numero de vendedor ingresado no es valido.\n");
      break;
    }

    totalFinal += montoFactura;
    contadorFacturas++;

    printf("Ingrese el numero de factura: ");
    scanf("%d", &numeroFactura);
  }

  printf("La cantidad de facturas emitidas por el vendedor 1 es: %d\n", contadorVendedor1);
  printf("La cantidad de facturas emitidas por el vendedor 2 es: %d\n", contadorVendedor2);
  printf("La cantidad de facturas emitidas por el vendedor 3 es: %d\n", contadorVendedor3);
  printf("La cantidad de facturas emitidas por el vendedor 4 es: %d\n", contadorVendedor4);

  printf("El total facturado por el vendedor 1 es: %.2f\n", totalVendedor1);
  printf("El total facturado por el vendedor 2 es: %.2f\n", totalVendedor2);
  printf("El total facturado por el vendedor 3 es: %.2f\n", totalVendedor3);
  printf("El total facturado por el vendedor 4 es: %.2f\n", totalVendedor4);

  printf("El total facturado por todos los vendedores es: %.2f\n", totalFinal);

  return 0;
}
