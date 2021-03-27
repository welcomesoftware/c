/**
 * Hacer un programa que muestre una tabla de multiplicar hasta el 20
 * de un número cualquiera por pantalla, el número de pedirá en el 
 * programa principal. Usar procedimientos.
 */

// Librerías
#include <stdio.h>

// Prototipos
void tabla(int n);

int main() 
{
    // Variables
    int num;

    do
    {
        puts("Digite un número para saber su tabla de multiplicar");
        puts("Digite un número zero \"0\" para salir del programa");
        printf("> "); 
        scanf("%i", &num);

        if (num == 0) return -1;

        puts("===================================================");
        tabla(num);
        puts("===================================================");

    } while (num != 0);
    
    // Fin del programa
    return 0;    
}

void tabla(int num)
{
    for (int i = 1; i <= 20; i++)
    {
        printf("%i x %i = %i\n", num, i, (num * i));
    }
}
