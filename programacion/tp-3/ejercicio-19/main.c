#include <stdio.h>

/*
19. CREAR UN PROGRAMA EN C QUE PIDA POR PANTALLA UN NÚMERO DEL 1 AL 10 Y MEDIANTE UNA
FUNCIÓN MUESTRE POR PANTALLA EL NÚMERO ESCRITO EN LETRAS.
*/

void mostrarNumeroEnLetras(int numero)
{
    switch (numero)
    {
    case 1:
        printf("Uno");
        break;
    case 2:
        printf("Dos");
        break;
    case 3:
        printf("Tres");
        break;
    case 4:
        printf("Cuatro");
        break;
    case 5:
        printf("Cinco");
        break;
    case 6:
        printf("Seis");
        break;
    case 7:
        printf("Siete");
        break;
    case 8:
        printf("Ocho");
        break;
    case 9:
        printf("Nueve");
        break;
    case 10:
        printf("Diez");
        break;
    default:
        printf("Numero invalido");
        break;
    }
}

int main()
{
    int numero;

    printf("Ingrese un numero del 1 al 10: ");
    scanf("%d", &numero);

    mostrarNumeroEnLetras(numero);

    return 0;
}