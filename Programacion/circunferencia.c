/**
 * Circunferencia.c
 * Este programa calcula la longitud de una circunferencia
 */

// Librerias
#include <stdio.h>
#include <math.h>

// Constantes
#define PI 3.1415


int main() {
    // Declaracion de variables
    float radio, longitud;

    puts("Calcula la longitud de una circunferencia");
    puts("=========================================");
    printf("# Digite el radio de la circunferencia: "); 
    scanf("%f", &radio);

    // Calculando la longitud del a circunferencia
    longitud = 2 * PI * radio;


    printf("> La longitud de la circunferencia es: %.2f\n", longitud);

    // Termina el programa
    return 0;
}