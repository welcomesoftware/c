/**
 * celcius.c
 * Convertidor de celcius a fahrenheit
 */
#include <stdio.h>

int main() {
    // Declaracion de variables
    int celcius, fahrenheit;
    

    puts("Convertidor de Celcius a Fahrenheit");
    
    printf("Digite la cantidad en grados Celcius: ");
    scanf("%i", &celcius);

    // Formula para convertir grados celcius a fahrenheit
    fahrenheit = (celcius * 1.8f) + 32;
    
    puts("");
    printf("%i grados Celcius es igual a %i grados Fahrenheit\n", celcius, fahrenheit);

    return 0;
}