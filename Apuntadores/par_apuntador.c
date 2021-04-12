/**
 * Comprobar si un número es par o impar, y señalar la posición 
 * en memoria donde se está guardando el número, con apuntadores.
 */

// librerías
#include <stdio.h>

int main() {

    // variables
    int numero;
    int *p_numero;

    // definiciones
    p_numero = &numero;

    // encabezado del programa
    puts("-----------------------------------------");
    puts("Determinar si un número es par");
    puts("-----------------------------------------");
    puts("");

    // entrada
    puts("Digite un número:");
    scanf("%i", &numero);

    // algoritmo 
    (*p_numero % 2 == 0) ? 
        printf("El número %i es par\n", *p_numero) : 
        printf("El número %i es impar\n", *p_numero);

    // salida
    printf("Posicion en memoria: %p\n", p_numero);

    // finaliza exitosamente
    return 0;
}
