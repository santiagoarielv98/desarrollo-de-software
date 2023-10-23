#include <stdio.h>
#include <stdlib.h>
/*
    1) Crear un programa que abra un archivo llamado “prueba.txt” (previamente
    creado con el block de notas y guardado en la misma carpeta donde este el
    programa) y que muestre el contenido del mismo por pantalla carácter a
    carácter.
*/

int main(int argc, char const *argv[])
{
    FILE *archivo;
    char c;

    archivo = fopen("prueba.txt", "r");

    if (archivo != NULL)
    {
        while ((c = fgetc(archivo)) != EOF)
        {
            putchar(c);
        }

        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo\n");
    }

    return 0;
}
