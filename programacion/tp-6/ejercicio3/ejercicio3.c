#include <stdio.h>
#include <stdlib.h>

/*
    3) Se pide una aplicación que cargue dos vectores de 10 posiciones num1[10],
    num2[10].
    Se pide hacer la multiplicación y la suma de los 2 vectores y guardar en un
    archivo RESULTADO con los siguientes campos:

    Numero 1    Numero 2    Suma    Multi   Mayor
    _________________________________________________
    5           4           9       20      multi

    El campo MAYOR debe llenarse con la leyenda de la operación mayor.
    Suma y Multi pueden ser iguales, es ese caso Leyenda = iguales.
*/

int main(int argc, char const *argv[])
{
    FILE *archivo;
    int num1[10], num2[10], suma[10], multi[10], mayor[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese el valor %d del vector 1: ", i + 1);
        scanf("%d", &num1[i]);
        printf("Ingrese el valor %d del vector 2: ", i + 1);
        scanf("%d", &num2[i]);
        printf("\n");
        suma[i] = num1[i] + num2[i];
        multi[i] = num1[i] * num2[i];
        mayor[i] = suma[i] > multi[i] ? suma[i] : multi[i];
    }

    archivo = fopen("RESULTADO", "w");

    if (archivo != NULL)
    {
        fprintf(archivo, "Numero 1     Numero 2     Suma         Multi        Mayor\n");
        fprintf(archivo, "__________________________________________________________\n");

        for (i = 0; i < 10; i++)
        {
            fprintf(archivo, "%-11d  %-11d  %-11d  %-11d  ", num1[i], num2[i], suma[i], multi[i]);

            if (suma[i] == multi[i])
            {
                fprintf(archivo, "iguales\n");
            }
            else
            {
                fprintf(archivo, "%s\n", suma[i] > multi[i] ? "suma" : "multi");
            }
        }

        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo\n");
    }

    return 0;
}
