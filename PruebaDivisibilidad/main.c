/**
 * Prueba de divisibilidad:
 * Programa que prueba la divisibilidad de n. numeros ingresados por el usuario
 */
#include<stdio.h>

int main() {
    // Variables del programa
    int num1, num2, resultado;

    // Encabezado del programa
    puts("Programa que solicita n. numeros al usuario y prueba la divisibilidad");
    puts("entre todos los numeros ingresados por el usuario.");
    puts("=====================================================================");

    // Entrada de datos por teclado
    printf("Escriba dos numeros separados por un espacio: "); scanf("%i %i", &num1, &num2);

    // Procesamiento de datos
    if (num1 % num2 == 0) {
        
        // Salida de datos por pantalla
        printf("El numero %i es divisible entre %i\n", num1, num2);
    }


    // Termina el programa
    return 0;
}
