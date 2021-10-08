/**
 * Demuestra el uso de apuntadores y arreglos multidimensionales.
 */
#include <stdio.h>

int multi[2][4];

int main() {
    // Ejercicio 1
    printf("multi = %p\n", multi);
    printf("multi[0] = %p\n", multi[0]);
    printf("multi[0][0] = %p\n", &multi[0][0]);

    // Ejercicio 2
    printf("Size of multi %lu\n", sizeof(multi));
    printf("Size of multi[0] %lu\n", sizeof(multi[0]));
    printf("Size of multi[0][0] %lu\n", sizeof(multi[0][0]));

    // Ejercicio 3
    // Aritmetica de apuntadores
    printf("El valor de (multi): %p\n", multi);
    printf("El valor de (multi + 1): %p\n", (multi + 1));
    printf("El valor de multi[1]: %p\n", multi[1]);

    // Ejercicio 4
    // Declarar una variable apuntador que pueda apuntar a un arreglo de 4 elementos enteros.
    // si no se usan los parentesis, se estaria declarando un arreglo de 4 apuntadores.
    int (*ptr)[4];
    // hace que ptr apunte al primer elemento de multi
    ptr = multi;

    // termina el programa
    return 0;
}
