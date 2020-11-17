/**
 * recursiva.c
 * esta funcion hace uso de la recursividad indirecta para visualizar el alfabeto
 */

// Bibliotecas
#include <stdio.h>

void funcion_a(char c);
void funcion_b(char c);

int main() {

    funcion_a('z');
    puts("");
    return 0;
}

void funcion_a(char c) {

    // mientras c sea mayor que a, se llamara a la funcion b.
    if (c > 'a')
        funcion_b(c);

    // imprimimos el valor de c
    printf("%c ", c);
}

void funcion_b(char c) {

    // llama a la funcion a, decrementado el valor de c
    funcion_a(--c);
}
