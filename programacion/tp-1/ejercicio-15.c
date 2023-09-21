#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /*
    15-DADA UNA COMPRA DE 30 PCPARA UNA EMPRESA Y SABIENDO QUECADA UNA CUESTA 11500
    PESOS.
        SÉ QUE EL PROVEEDOR ME HACE UN 20% DE DESCUENTO.
        SÉ QUE EL ENVÍO ME COBRA UN 5% DEL TOTAL.
        SÉ QUE EL SEGURO DE TRASLADO ES 12% DEL TOTAL EL CUAL SE DEVUELVEN SI LOS
        EQUIPOS LLEGAN BIEN.
        OBTENER EL PRECIO SIN DESCUENTOS. EL PRECIO CON TODOS LOS DESCUENTOS SI TODAS
        LAS PC LLEGAN BIEN. EL PRECIO CON TODOS LOS DESCUENTOS SI LAS PC LLEGAN MAL.
        SOLAMENTE EL PRECIO DEL DESCUENTO, SOLAMENTE EL PRECIO DEL ENVÍO.
  */
  float precio = 11500;

  float precioSinDescuento;
  float precioConDescuento;
  float precioConDescuentoSiLleganMal;
  float precioDescuento;
  float precioEnvio;
  float precioSeguro;
  float precioSeguroSiLleganMal;
  float precioTotal;

  precioSinDescuento = precio * 30;
  precioConDescuento = precioSinDescuento * 0.8;
  precioConDescuentoSiLleganMal = precioConDescuento * 0.88;
  precioDescuento = precioSinDescuento - precioConDescuento;
  precioEnvio = precioConDescuento * 0.05;
  precioSeguro = precioConDescuento * 0.12;
  precioSeguroSiLleganMal = precioConDescuentoSiLleganMal * 0.12;
  precioTotal = precioConDescuento + precioEnvio + precioSeguro;

  printf("El precio sin descuento es: %.2f\n", precioSinDescuento);
  printf("El precio con descuento es: %.2f\n", precioConDescuento);
  printf("El precio con descuento si llegan mal es: %.2f\n", precioConDescuentoSiLleganMal);
  printf("El precio del descuento es: %.2f\n", precioDescuento);
  printf("El precio del envio es: %.2f\n", precioEnvio);
  printf("El precio del seguro es: %.2f\n", precioSeguro);
  printf("El precio del seguro si llegan mal es: %.2f\n", precioSeguroSiLleganMal);
  printf("El precio total es: %.2f\n", precioTotal);

  return 0;
}
