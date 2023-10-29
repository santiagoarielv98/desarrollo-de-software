#include <stdio.h>
#include <stdlib.h>

/*
    2) Crear un programa para gestionar una agenda de clientes, para una
    empresa, con los campos:

        “nombre (50 caracteres)”
        “dirección (100 caracteres)”
        “teléfono (entero)”
        “estado_pagos (float)”

    El estado de pagos
    será un número negativo indicando la cantidad de dinero que debe el cliente.
    El programa debe presentar al usuario un menú con las siguientes opciones:

        1) Agregar cliente.
        2) Ver datos de todos los clientes.

    El programa trabajará con un archivo (clientes.txt por ejemplo) que debe crear
    la primera vez que se ejecute el programa.
*/

void agregar_cliente(FILE *archivo);
void ver_clientes(FILE *archivo);

int main()
{
    FILE *archivo;
    int opcion;

    archivo = fopen("clientes.mio", "a+b");
    if (archivo == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    do
    {
        printf("1) Agregar cliente.\n");
        printf("2) Ver datos de todos los clientes.\n");
        printf("0) Salir.\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            agregar_cliente(archivo);
            break;
        case 2:
            ver_clientes(archivo);
            break;
        case 0:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion incorrecta.\n");
            break;
        }
    } while (opcion != 0);
}

void agregar_cliente(FILE *archivo)
{
    char nombre[50];
    char direccion[100];
    int telefono;
    float estado_pagos;

    printf("Ingrese el nombre: ");
    scanf("%s", nombre);
    printf("Ingrese la direccion: ");
    scanf("%s", direccion);
    printf("Ingrese el telefono: ");
    scanf("%d", &telefono);
    printf("Ingrese el estado de pagos: ");
    scanf("%f", &estado_pagos);

    fprintf(archivo, "%s %s %d %f\n", nombre, direccion, telefono, estado_pagos);
}

void ver_clientes(FILE *archivo)
{
    char nombre[50];
    char direccion[100];
    int telefono;
    float estado_pagos;

    rewind(archivo);
    while (
        !feof(archivo))
    {
        fscanf(archivo, "%s %s %d %f\n", nombre, direccion, &telefono, &estado_pagos) != EOF;
        printf("Nombre: %s\n", nombre);
        printf("Direccion: %s\n", direccion);
        printf("Telefono: %d\n", telefono);
        printf("Estado de pagos: %f\n", estado_pagos);
        printf("\n");
    }
}