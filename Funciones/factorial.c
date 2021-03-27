/**
 * factorial.c
 * Calcula el valor factorial de un numero
 */

// Librerías
#include <stdio.h>

// Prototipo
unsigned int factorial(unsigned int a);


int main(int argc, char const *argv[])
{   
    // Variable
    int num;

    // Entrada
    printf("Digite un número: ");
    scanf("%i", &num);

    // Salida
    printf("El factorial del %i es: %i\n", num, factorial(num));
    return 0;
}


unsigned int factorial(unsigned int a) {
    
    if (a == 1) {
        return 1;
    }
    else {
        return a *= factorial(a - 1);
    }
}