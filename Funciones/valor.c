/*
 * valor.c
 * funcion de paso por valor.
 */

#include <stdio.h>

void sumar_valor(int numero);

int main() {
    int numero = 57;
    sumar_valor(numero);

    /**
     * podemos notar que el valor del numero se modifica dentro de la
     * funcion, pero en el main el valor sigue siendo 57
     */
    printf("El valor del numero fuera de sumar_valor es: %d\n", numero);

    return 0;
}


void sumar_valor(int numero) {
    numero++;

    /**
     * el valor del numero recibido se incrementa en 1
     * y se modifica dentro de la funcion sumar_valor.
     */
    printf("El valor del numero dentro de sumar_valor es: %d\n", numero);
    return;
}
