/**
 * Hacer un programa que muestre 3 números ordenados ascendentemente
 * utilizar un procedimiento para cada operación.
 */

// Librerías
#include <stdio.h>

// Prototipos
void ordenamientoasc(int a, int b, int c);
void ordenamientodsc(int a, int b, int c);


int main() 
{
    // Variables
    int n1, n2, n3;

    // Entrada
    puts("Digite 3 números separados por un espacio:");
    printf("> "); scanf("%i %i %i", &n1, &n2, &n3);

    // Procesamiento
    ordenamientoasc(n1, n2, n3);
    ordenamientodsc(n1, n2, n3);

    // Fin
    return 0;
}

void ordenamientoasc(int a, int b, int c) 
{
    puts("Ordenamiento ascendente");
    puts("------------------------");
    // Comprobación a
    if(a >= b && a >= c) {
        if(b >= c) printf("%i %i %i\n", c, b, a);
        else printf("%i %i %i\n", b, c, a);
    }

    // Comprobación b
    if(b >= a && b >= c) {
        if(a >= c) printf("%i %i %i\n", c, a, b);
        else printf("%i %i %i\n", a, c, b);
    }

    // Comprobación c
    if(c >= a && c >= b) {
        if(a >= b) printf("%i %i %i\n", b, a, c);
        else printf("%i %i %i\n", a, b, c);
    }
}

void ordenamientodsc(int a, int b, int c) 
{
    puts("Ordenamiento descendente");
    puts("------------------------");
    // Comprobación a
    if (a >= b && a >= c)
    {
        if (b >= c)
            printf("%i %i %i\n", a, b, c);
        else
            printf("%i %i %i\n", a, c, b);
    }

    // Comprobación b
    if (b >= a && b >= c)
    {
        if (a >= c)
            printf("%i %i %i\n", b, a, c);
        else
            printf("%i %i %i\n", b, c, a);
    }

    // Comprobación c
    if (c >= a && c >= b)
    {
        if (a >= b)
            printf("%i %i %i\n", c, a, b);
        else
            printf("%i %i %i\n", c, b, a);
    }
}
