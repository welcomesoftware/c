/**
 * referencia.c
 * el paso por referencia se hace utilizando apuntadores. se envia la direccion en memoria
 * de la variable, por lo tanto los cambios que haga la funcion afectan el valor de la
 * variable fuera de la funcion.
 */

// Bibliotecas
#include <stdio.h>

// Prototipos
void sumar_referencia(int *numero);

int main() {
    int numero = 65;

    sumar_referencia(&numero);

    printf("El valor fuera de sumar_referencia es %d\n", numero);

    return 0;
}

void sumar_referencia(int *numero) {
    *numero += 1;

    /**
     * El valor recibido se incrementa en 1
     * y se modifica dentro de la funcion.
     */
    printf("El valor dentro de sumar_referencia es: %d\n", *numero);
}
