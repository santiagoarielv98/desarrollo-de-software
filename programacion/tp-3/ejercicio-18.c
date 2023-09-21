#include <stdio.h>
/*
18. CREAR UN PROGRAMA EN C QUE MUESTRE UN MENÚ CON LAS OPCIONES SUMAR, RESTAR, MULTIPLICAR Y DIVIDIR, EL PROGRAMA SOLICITARÁ UNA OPCIÓN Y REALIZARÁ LA TAREA ELEGIDA, SE DEBE USAR UNA FUNCIÓN PARA MOSTRAR EL MENÚ, PEDIR LOS DATOS EN EL MAIN Y DESPUÉS USAR FUNCIONES PARA REALIZAR LOS CÁLCULOS.
*/

void mostrarMenu();
int sumar(int num1, int num2);
int restar(int num1, int num2);
int multiplicar(int num1, int num2);
float dividir(int num1, int num2);

int main()
{
    char operacion;
    int num1, num2, resultado;

    mostrarMenu();
    scanf("%c", &operacion);

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    switch (operacion)
    {
    case '+':
        resultado = sumar(num1, num2);
        break;
    case '-':
        resultado = restar(num1, num2);
        break;
    case '*':
        resultado = multiplicar(num1, num2);
        break;
    case '/':
        resultado = dividir(num1, num2);
        break;
    default:
        printf("Opcion incorrecta\n");
        break;
    }

    printf("El resultado es: %d\n", resultado);

    return 0;
}

void mostrarMenu()
{
    printf("Ingrese la operacion a realizar:\n");
    printf("+ para sumar\n");
    printf("- para restar\n");
    printf("* para multiplicar\n");
    printf("/ para dividir\n");
}

int sumar(int num1, int num2)
{
    return num1 + num2;
}

int restar(int num1, int num2)
{
    return num1 - num2;
}

int multiplicar(int num1, int num2)
{
    return num1 * num2;
}

float dividir(int num1, int num2)
{

    if (num2 == 0)
    {
        printf("No se puede dividir por cero\n");
        return 0;
    }
    else
    {
        return (float)num1 / num2;
    }
}
