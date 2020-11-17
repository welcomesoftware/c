/**
 * PositivoNegativo:
 * programa que verifica si un numero ingresado por el usuario
 * positvo o es negativo.
 */
#include <stdio.h>

int main() {
    // variables del programa
    int numero;

    // encabezado del programa
    puts("Programa que verifica si un numero es positivo o negativo");
    puts("=========================================================");

    // entrada de datos por pantalla
    printf("Ingrese un numero positvo o negativo: ");
    scanf("%i", &numero);

    // procesamiento de datos condicional
    if (numero < 0)
        puts("El numero ingresado es negativo");
    if (numero > 0)
        puts("El numero ingresado es positivo");

    // termina el programa
    return 0;
}
