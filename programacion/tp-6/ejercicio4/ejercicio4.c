#include <stdio.h>
#include <stdlib.h>

/*
    4-Realizar un programa que permita la carga de dos archivos y que genere un
    tercer archivo con la combinación de los datos de los archivos anteriores.
    Archivo 1 (datos ingresados por teclado): nombre, DNI, teléfono.
    Archivo 2 (datos ingresados por teclado): DNI, localidad, provincia.
    Archivo 3 (datos obtenidos por el programa): DNI, nombre, localidad, provincia.
    La carga de los dos primeros archivos finaliza con DNI=0.
    TXT
*/

typedef struct
{
    char nombre[30];
    int dni;
    int telefono;
} Persona;

typedef struct
{
    int dni;
    char localidad[30];
    char provincia[30];
} Domicilio;

void cargarArchivoPersonas(FILE *archivoPersonas);
void cargarArchivoDomicilios(FILE *archivoDomicilios);
void combinarArchivos(FILE *archivoPersonas, FILE *archivoDomicilios, FILE *archivoCombinado);

int main()
{
    FILE *archivoPersonas;
    FILE *archivoDomicilios;
    FILE *archivoCombinado;

    archivoPersonas = fopen("personas.txt", "w");
    archivoDomicilios = fopen("domicilios.txt", "w");
    archivoCombinado = fopen("combinado.txt", "w");

    if (archivoPersonas == NULL || archivoDomicilios == NULL || archivoCombinado == NULL)
    {
        printf("Error al abrir los archivos.");
        exit(EXIT_FAILURE);
    }

    cargarArchivoPersonas(archivoPersonas);
    cargarArchivoDomicilios(archivoDomicilios);
    combinarArchivos(archivoPersonas, archivoDomicilios, archivoCombinado);

    fclose(archivoPersonas);
    fclose(archivoDomicilios);
    fclose(archivoCombinado);

    return 0;
}

void cargarArchivoPersonas(FILE *archivoPersonas)
{
    Persona persona;

    printf("Ingrese el DNI de la persona: ");
    scanf("%d", &persona.dni);

    while (persona.dni != 0)
    {

        printf("Ingrese el nombre de la persona: ");
        scanf("%s", persona.nombre);

        printf("Ingrese el telefono de la persona: ");
        scanf("%d", &persona.telefono);

        fprintf(archivoPersonas, "%s %d %d\n", persona.nombre, persona.dni, persona.telefono);

        printf("Ingrese el DNI de la persona: ");
        scanf("%d", &persona.dni);
    }
}

void cargarArchivoDomicilios(FILE *archivoDomicilios)
{
    Domicilio domicilio;

    printf("Ingrese el DNI del domicilio: ");
    scanf("%d", &domicilio.dni);

    while (domicilio.dni != 0)
    {
        printf("Ingrese la localidad del domicilio: ");
        scanf("%s", domicilio.localidad);

        printf("Ingrese la provincia del domicilio: ");
        scanf("%s", domicilio.provincia);

        fprintf(archivoDomicilios, "%d %s %s\n", domicilio.dni, domicilio.localidad, domicilio.provincia);

        printf("Ingrese el DNI del domicilio: ");
        scanf("%d", &domicilio.dni);
    }
}

void combinarArchivos(FILE *archivoPersonas, FILE *archivoDomicilios, FILE *archivoCombinado)
{
    Persona persona;
    Domicilio domicilio;

    rewind(archivoPersonas);
    rewind(archivoDomicilios);

    fscanf(archivoPersonas, "%s %d %d\n", persona.nombre, &persona.dni, &persona.telefono);
    fscanf(archivoDomicilios, "%d %s %s\n", &domicilio.dni, domicilio.localidad, domicilio.provincia);

    while (fscanf(archivoPersonas, "%s %d %d\n", persona.nombre, &persona.dni, &persona.telefono) != EOF)
    {
        while (fscanf(archivoDomicilios, "%d %s %s\n", &domicilio.dni, domicilio.localidad, domicilio.provincia) != EOF)
        {
            if (persona.dni == domicilio.dni)
            {
                fprintf(archivoCombinado, "%d %s %s %s\n", persona.dni, persona.nombre, domicilio.localidad, domicilio.provincia);
            }
        }
        rewind(archivoPersonas);
    }
}
