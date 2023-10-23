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

    El programa trabajará con un archivo (clientes.mio por ejemplo) que debe crear
    la primera vez que se ejecute el programa.
*/

typedef struct
{
    char nombre[50];
    char direccion[100];
    int telefono;
    float estado_pagos;
} Cliente;

void agregar_cliente(FILE *archivo);
void ver_clientes(FILE *archivo);

int main()
{
    FILE *archivo;
    int opcion;

    archivo = fopen("clientes.mio", "a+b");

    if (archivo != NULL)
    {
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
                printf("Opcion invalida.\n");
                break;
            }
        } while (opcion != 0);

        fclose(archivo);
    }
    else
    {
        printf("No se pudo abrir el archivo\n");
    }

    return 0;
}

void agregar_cliente(FILE *archivo)
{
    Cliente nuevo_cliente;

    printf("Ingrese el nombre del cliente: ");
    scanf("%s", nuevo_cliente.nombre);
    printf("Ingrese la direccion del cliente: ");
    scanf("%s", nuevo_cliente.direccion);
    printf("Ingrese el telefono del cliente: ");
    scanf("%d", &nuevo_cliente.telefono);
    printf("Ingrese el estado de pagos del cliente: ");
    scanf("%f", &nuevo_cliente.estado_pagos);

    fwrite(&nuevo_cliente, sizeof(Cliente), 1, archivo);
}

void ver_clientes(FILE *archivo)
{
    Cliente cliente_actual;

    rewind(archivo);

    printf("\n");

    while (fread(&cliente_actual, sizeof(Cliente), 1, archivo) != 0)
    {
        printf("Nombre: %s\n", cliente_actual.nombre);
        printf("Direccion: %s\n", cliente_actual.direccion);
        printf("Telefono: %d\n", cliente_actual.telefono);
        printf("Estado de pagos: %.2f\n", cliente_actual.estado_pagos);
        printf("\n");
    }
}