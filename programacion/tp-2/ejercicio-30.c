#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    30-UNA CEREALERA DESEA CLASIFICAR SUS CLIENTES DE ACUERDO A LAS TONELADAS
    QUE LE COMPRAN.

        CLIENTE QUE COMPRA MENOS DE 100 TONELADAS: CHICO.
        CLIENTE QUE COMPRA ENTRE 100 Y 300 TONELADAS: MEDIANO.
        CLIENTE QUE COMPRA MÁS DE 300 TONELADAS: GRANDE.

    SE DESEA DISEÑAR UN ALGORITMO QUE PERMITA EL INGRESO DE LAS TONELADAS POR
    CLIENTE. FINALIZA EL INGRESO DE DATOS CUANDO SE INGRESE UN CLIENTE IGUAL A 000.
    LUEGO MUESTRE LA SIGUIENTE INFORMACIÓN POR PANTALLA: CANTIDAD DE CLIENTES,
    PROMEDIO DE TONELADAS VENDIDAS POR CATEGORÍA Y EL TOTAL DE TODAS LAS
    TONELADAS VENDIDAS.
  */

  int toneladas;

  int cantidadChico, cantidadMediano, cantidadGrande;

  float totalChico, totalMediano, totalGrande;

  float promedioChico, promedioMediano, promedioGrande;

  int totalClientes;
  int totalToneladas;

  cantidadChico = 0;
  cantidadMediano = 0;
  cantidadGrande = 0;
  totalChico = 0;
  totalMediano = 0;
  totalGrande = 0;
  totalClientes = 0;
  totalToneladas = 0;

  printf("Ingrese las toneladas (0 (salir)): ");
  scanf("%d", &toneladas);

  while (toneladas != 0)
  {
    if (toneladas < 100)
    {
      cantidadChico++;
      totalChico += toneladas;
    }
    else if (toneladas >= 100 && toneladas <= 300)
    {
      cantidadMediano++;
      totalMediano += toneladas;
    }
    else if (toneladas > 300)
    {
      cantidadGrande++;
      totalGrande += toneladas;
    }

    printf("Ingrese las toneladas (0 (salir)): ");
    scanf("%d", &toneladas);
  }

  promedioChico = totalChico / cantidadChico;
  promedioMediano = totalMediano / cantidadMediano;
  promedioGrande = totalGrande / cantidadGrande;

  totalClientes = cantidadChico + cantidadMediano + cantidadGrande;
  totalToneladas = totalChico + totalMediano + totalGrande;

  printf("La cantidad de clientes es de: %d\n", totalClientes);
  printf("El promedio de toneladas vendidas por categoria es de:\n");
  printf("Chico: %.2f\n", promedioChico);
  printf("Mediano: %.2f\n", promedioMediano);
  printf("Grande: %.2f\n", promedioGrande);
  printf("El total de toneladas vendidas es de: %d\n", totalToneladas);

  return 0;
}
