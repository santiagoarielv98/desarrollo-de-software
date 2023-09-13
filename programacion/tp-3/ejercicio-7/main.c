#include <stdio.h>
/*
7. ESCRIBIR UNA FUNCIÓN LLAMADA "EDADES" QUE RECIBA 2 EDADES Y DECIR CUÁL DE ELLAS ES LA MAYOR Y CUANTO LE FALTA A LA MENOR PARA LLEGAR A LA EDAD MAYOR.
*/

void edades(int edad1, int edad2);

int main()
{
    int edad1, edad2;

    printf("Ingrese la primer edad: ");
    scanf("%d", &edad1);
    printf("Ingrese la segunda edad: ");
    scanf("%d", &edad2);

    edades(edad1, edad2);

    return 0;
}

void edades(int edad1, int edad2)
{
    if (edad1 > edad2)
    {
        printf("La primer edad es mayor que la segunda\n");
        printf("A la segunda edad le faltan %d anios para llegar a la primer edad\n", edad1 - edad2);
    }
    else if (edad1 < edad2)
    {
        printf("La segunda edad es mayor que la primer\n");
        printf("A la primer edad le faltan %d anios para llegar a la segunda edad\n", edad2 - edad1);
    }
    else
    {
        printf("Las edades son iguales\n");
    }
}