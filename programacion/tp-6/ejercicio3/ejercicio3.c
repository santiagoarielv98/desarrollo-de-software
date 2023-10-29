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

void cargarNumeros(int numeros[], int cantidad);
void mostrarNumeros(int numeros[], int cantidad);
void guardarNumeros(int numeros1[], int numeros2[], int cantidad);

int main()
{
    int numeros1[10];
    int numeros2[10];

    cargarNumeros(numeros1, 10);
    cargarNumeros(numeros2, 10);

    mostrarNumeros(numeros1, 10);
    mostrarNumeros(numeros2, 10);

    guardarNumeros(numeros1, numeros2, 10);

    return 0;
}

void cargarNumeros(int numeros[], int cantidad)
{
    int i;

    for (i = 0; i < cantidad; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }
}

void mostrarNumeros(int numeros[], int cantidad)
{
    int i;

    for (i = 0; i < cantidad; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void guardarNumeros(int numeros1[], int numeros2[], int cantidad)
{
    FILE *archivo;
    int i;
    int suma;
    int multi;
    int mayor;

    archivo = fopen("resultado.txt", "w");
    if (archivo != NULL)
    {

        fprintf(archivo, "Numero 1\tNumero 2\tSuma\tMulti\tMayor\n");
        fprintf(archivo, "_________________________________________________\n");

        for (i = 0; i < cantidad; i++)
        {
            suma = numeros1[i] + numeros2[i];
            multi = numeros1[i] * numeros2[i];
            if (suma > multi)
            {
                mayor = suma;
                fprintf(archivo, "%d\t\t%d\t\t%d\t%d\tSuma\n", numeros1[i], numeros2[i], suma, multi);
            }
            else if (suma < multi)
            {
                mayor = multi;
                fprintf(archivo, "%d\t\t%d\t\t%d\t%d\tMulti\n", numeros1[i], numeros2[i], suma, multi);
            }
            else
            {
                mayor = suma;
                fprintf(archivo, "%d\t\t%d\t\t%d\t%d\tIguales\n", numeros1[i], numeros2[i], suma, multi);
            }
        }

        fclose(archivo);
    }
    printf("No se pudo abrir el archivo.\n");
    return;
}