/**
 * Programa: extern.c
 *
 * Cuando una funcion usa una variable externa, es una buena practica de
 * Programación declarar la variable dentro de la función, con la palabara clave
 * extern: extern tipo nombre;
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 02/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

// Variable externa
int x = 999;

// Prototipo
void print_value();

int main() {

    // declarar la variable externa
    extern int x;

    printf("%d\n", x);
    print_value();

    // termina el programa
    return 0;
}

void print_value() {
    extern int x;
    printf("%d\n", x);
}
