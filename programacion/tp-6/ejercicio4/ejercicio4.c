#include <stdio.h>
#include <stdlib.h>

/*
    4-Realizar un programa que permita la carga de dos archivos y que genere un
    tercer archivo con la combinación de los datos de los archivos anteriores.
    Archivo 1 (datos ingresados por teclado): nombre, DNI, teléfono.
    Archivo 2 (datos ingresados por teclado): DNI, localidad, provincia.
    Archivo 3 (datos obtenidos por el programa): DNI, nombre, localidad, provincia.
    La carga de los dos primeros archivos finaliza con DNI=0.
*/

void cargarArchivo1(FILE *archivo);
void cargarArchivo2(FILE *archivo);
void combinarArchivos(FILE *archivo1, FILE *archivo2, FILE *archivo3);

int main(int argc, char const *argv[])
{
    FILE *archivo1, *archivo2, *archivo3;

    archivo1 = fopen("archivo1", "w");
    archivo2 = fopen("archivo2", "w");
    archivo3 = fopen("archivo3", "w");

    if (archivo1 != NULL && archivo2 != NULL && archivo3 != NULL)
    {
        cargarArchivo1(archivo1);
        cargarArchivo2(archivo2);
        combinarArchivos(archivo1, archivo2, archivo3);

        fclose(archivo1);
        fclose(archivo2);
        fclose(archivo3);
    }
    else
    {
        printf("No se pudo abrir alguno de los archivos\n");
    }

    return 0;
}

void cargarArchivo1(FILE *archivo)
{
    char nombre[20];
    int dni;
    int telefono;

    printf("Ingrese DNI: ");
    scanf("%d", &dni);

    while (dni != 0)
    {
        printf("Ingrese el nombre: ");
        scanf("%s", nombre);
        printf("Ingrese el teléfono: ");
        scanf("%d", &telefono);
        fprintf(archivo, "%s %d %d\n", nombre, dni, telefono);

        printf("Ingrese DNI: ");
        scanf("%d", &dni);
    }
}

void cargarArchivo2(FILE *archivo)
{
    int dni;
    char localidad[20];
    char provincia[20];

    printf("Ingrese el DNI: ");
    scanf("%d", &dni);

    while (dni != 0)
    {
        printf("Ingrese la localidad: ");
        scanf("%s", localidad);
        printf("Ingrese la provincia: ");
        scanf("%s", provincia);
        fprintf(archivo, "%d %s %s\n", dni, localidad, provincia);

        printf("Ingrese el DNI: ");
        scanf("%d", &dni);
    }
}

void combinarArchivos(FILE *archivo1, FILE *archivo2, FILE *archivo3)
{
    char nombre[20];
    int personaDni;
    int telefono;

    int domicilioDni;
    char localidad[20];
    char provincia[20];

    rewind(archivo1);
    rewind(archivo2);

    fscanf(archivo1, "%s %d %d\n", nombre, &personaDni, &telefono);
    fscanf(archivo2, "%d %s %s\n", &domicilioDni, localidad, provincia);

    while (personaDni != 0 && domicilioDni != 0)
    {
        if (personaDni == domicilioDni)
        {
            fprintf(archivo3, "%d %s %s %s\n", personaDni, nombre, localidad, provincia);
            fscanf(archivo1, "%s %d %d\n", nombre, &personaDni, &telefono);
            fscanf(archivo2, "%d %s %s\n", &domicilioDni, localidad, provincia);
        }
        else if (personaDni < domicilioDni)
        {
            fscanf(archivo1, "%s %d %d\n", nombre, &personaDni, &telefono);
        }
        else
        {
            fscanf(archivo2, "%d %s %s\n", &domicilioDni, localidad, provincia);
        }
    }
}
