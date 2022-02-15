/*
 * Operadores:
 * Evalula la procedencia de los Operadores
 */

// Bibliotecas
#include <stdio.h>
#include <string.h>

int main() {
    // Variables del programa
    int x = 20;
    int y = 10;
    char z[30];

    // Operador Condicional ?
    strcpy(z, (x > y) ? "Verdadero" : "Falso");
    printf("%s\n", z);

    // Termina exitosamente
    return 0;
}
