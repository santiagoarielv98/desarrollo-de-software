#include <stdio.h>
#include <stdlib.h>
/*
    5-Se obtiene un archivo que tiene los siguientes datos: código, producto, peso.
    Está cargado de la siguiente manera:

    Cod_Prod Producto Peso
    8 asado 5 kg
    2 bife 3 kg
    4 lomo 8 kg
    15 paleta 5 kg
    7 nalga 9 kg.
    Se pide cargar y recorrer el archivo.
    Cargar un vector con los nombres de los productos ingresados ordenadamente
    por el código de producto ó sea ver[0]=&quot;bife&quot;, ver[1]=&quot;lomo&quot;, ver[2]=&quot;nalga ...
*/

int main()
{
    FILE *archivo;
    char cod_prod[10];
    char producto[10];
    char peso[10];
    char ver[10][10];
    int i = 0;

    archivo = fopen("productos.txt", "r");

    if (archivo != NULL)
    {

        while (!feof(archivo))
        {
            fscanf(archivo, "%s %s %s", cod_prod, producto, peso);
            printf("%s %s %s\n", cod_prod, producto, peso);
            strcpy(ver[i], producto);
            i++;
        }

        fclose(archivo);

        for (i = 0; i < 5; i++)
        {
            printf("%s\n", ver[i]);
        }
    }
    else
    {
        printf("No se pudo abrir el archivo\n");
    }
    return 0;
}