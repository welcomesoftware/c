/*
 * SysPeaje:
 * Sistema que selecciona un tipo de vehiculo e indica
 * el peaje a pagar segun su valor numerico.
 * 1 - turismo - $5
 * 2 - motocicleta - $3
 * 3 - autobus - $8
 */

// Bibliotecas
#include <stdio.h>


int main () {
    // Variables del programa
    int vehiculo;

    // Encabezado del programa
    puts("================= Sistema de Peaje =================");
    puts("Sistema que selecciona un tipo de vehiculo e indica");
    puts("el peaje a pagar segun su valor numerico.");
    puts("====================================================");
    puts("1 = turismo | 2 = motocicleta | 3 = autobus");
    puts("");
    
    // Entrada de datos por teclado
    printf("Digite el tipo de vehiculo: ");
    scanf("%i", &vehiculo);

    // Procesamiento condicional
    puts("====================================================");
    switch (vehiculo) {
        case 2:
            puts("Motocileta: El valor a pagar es $3.00 USD");
            break;
        case 1:
            puts("Turismo: El valor a pagar es $5.00 USD");
            break;
        case 3:
            puts("Autobus: El valor a pagar es $8.00 USD");
            break;
        default:
            puts("El valor ingresado es incorrecto.");
            break;
    }

    // Finaliza exitosamente
    return 0;
}
