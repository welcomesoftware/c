/**
 * Hacer un programa que pida por pantalla un número del 1 al 10
 * y mediante un procedimiento muestre por pantalla el numero 
 * escrito en letras.
 */

// Bibliotecas
#include <stdio.h>

// Prototipos
void menu();

int main(int argc, char const *argv[])
{
    /* code */
    menu();

    // Fin del programa
    return 0;
}

void menu() 
{
    int numero;
    char *numeros[] = {
        "Uno", 
        "Dos", 
        "Tres", 
        "Cuatro", 
        "Cinco",
        "Seis",
        "Siete",
        "Ocho",
        "Nueve",
        "Diez"
    };

    // Entrada de datos
    printf("Digite un numero del 1 al 10: ");
    scanf("%i", &numero);

    switch (numero)
    {
    case 1:
        puts(numeros[numero - 1]);
        break;
    
    case 2:
        puts(numeros[numero - 1]);
        break;
    
    case 3:
        puts(numeros[numero - 1]);
        break;
    
    case 4:
        puts(numeros[numero - 1]);
        break;
    
    case 5:
        puts(numeros[numero - 1]);
        break;
    
    case 6:
        puts(numeros[numero - 1]);
        break;
    
    case 7:
        puts(numeros[numero - 1]);
        break;
    
    case 8:
        puts(numeros[numero - 1]);
        break;
    
    case 9:
        puts(numeros[numero - 1]);
        break;
    
    case 10:
        puts(numeros[numero - 1]);
        break;

    default:
        puts("Opción invalida, ¡Adios!");
        break;
    }    
}