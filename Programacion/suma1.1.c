/**
 * Suma 1.1.0
 * Version mejorada del ejercicio de suma.c
 */
#include<stdio.h>

int main() {
    // Declaracion de variables
    int num1, num2, suma, resta, mult, div;
    suma = resta = mult = div = 0;

    // Pide la entrada de datos 
    printf("Digite 2 numeros separados por un espacio: ");
    scanf("%i %i", &num1, &num2);

    // Efectua las operaciones aritmeticas
    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    // Muestra el resultado en pantalla
    puts("\n");
    printf("La suma es: %i\n", suma);
    printf("La resta es: %i\n", resta);
    printf("La mult es: %i\n", mult);
    printf("La div es: %i\n", div);
    
    // Termina el programa
    return 0;
}