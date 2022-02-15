/**
 * Sucesion fibonacci, utilizando recursividad.
 */

// Librerías
#include <stdio.h>

// Prototipos
void fibonacci(int n);

// Globales
int a = 0;
int b = 1;
int c = 0;

int main(int argc, char const *argv[])
{
    // Variables
    int num;

    // Entrada
    printf("Digite un número: ");
    scanf("%i", &num);
    puts("===============================");

    // Salida
    fibonacci(num);
    puts("");

    // Fin del programa
    return 0;
}

void fibonacci(int n) 
{
    if (n > 0) {
        printf("%i, ", a);
        c = a + b;
        a = b;
        b = c;
        fibonacci(n - 1);
    }
    else {
        printf("%i.", a);
    }
}