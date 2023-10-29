#include <stdio.h>
#include <stdlib.h>

/*
    Se desea realizar una aplicación que permita realizar las siguientes opciones:
    1) Realizar la carga de los códigos de 6 productos del área de informática y el precio unitario de cada
    uno de ellos.
    2) Mostrar por pantalla el código de cada producto y el precio.
    3) Crear un archivo llamado productos.txt y guardar en él todos los datos de los productos existentes,
    cuyos campos deberán ser Código_producto y precio.
    4) Salir del programa.

    Se deben codificar las siguientes funciones:
    1.- Menú: incluir todas las opciones mencionadas anteriormente.
    2.- Muestra de productos: esta función mostrará por pantalla todos los datos de los productos informáticos
    (Código y Precio) que fueron ingresados.-
*/

void ingresarProductos(int codigos[], float precios[], int numProductos);
void mostrarProductos(int codigos[], float precios[], int numProductos);
void guardarProductos(int codigos[], float precios[], int numProductos);

int main()
{
  int opcion;
  int codigos[6];
  float precios[6];
  int numProductos = 0;

  do
  {
    printf("Menu:\n");
    printf("1) Ingresar productos\n");
    printf("2) Mostrar productos\n");
    printf("3) Guardar en archivo\n");
    printf("4) Salir\n");
    printf("Elija una opción: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
      if (numProductos < 6)
      {
        ingresarProductos(codigos, precios, numProductos);
        numProductos++;
      }
      else
      {
        printf("Se ha alcanzado el límite de productos (%d).\n", 6);
      }
      break;
    case 2:
      mostrarProductos(codigos, precios, numProductos);
      break;
    case 3:
    {
      guardarProductos(codigos, precios, numProductos);
      break;
    }
    case 4:
      printf("Saliendo del programa.\n");
      break;
    default:
      printf("Opción no válida. Intente de nuevo.\n");
    }
  } while (opcion != 4);

  return 0;
}

void ingresarProductos(int codigos[], float precios[], int numProductos)
{
  printf("Ingrese el código del producto: ");
  scanf("%d", &codigos[numProductos]);
  printf("Ingrese el precio del producto: ");
  scanf("%f", &precios[numProductos]);
}

void mostrarProductos(int codigos[], float precios[], int numProductos)
{
  printf("Productos informáticos ingresados:\n");
  for (int i = 0; i < numProductos; i++)
  {
    printf("Código: %d, Precio: %.2f\n", codigos[i], precios[i]);
  }
}

void guardarProductos(int codigos[], float precios[], int numProductos)
{
  FILE *archivo;
  archivo = fopen("productos.txt", "w");

  if (archivo != NULL)
  {
    for (int i = 0; i < numProductos; i++)
    {
      fprintf(archivo, "%d %.2f\n", codigos[i], precios[i]);
    }
    fclose(archivo);
    printf("Datos de productos guardados en productos.txt.\n");
  }
  else
  {
    printf("No se pudo abrir el archivo.\n");
  }
}
