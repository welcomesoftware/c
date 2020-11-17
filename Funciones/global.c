/**
 * global.c
 * ejecicio de prueba de las variables globales.
 */

// Bibliotecas
#include <stdio.h>

// Variables globales
int global = 99;

// Prototipos
void funcion();


int main() {

    printf("main(): acceso a la variable global %d\n", global);

    funcion();

    return 0;
}

void funcion() {
    printf("funcion(): acceso a la variable global %d\n", global);
}
