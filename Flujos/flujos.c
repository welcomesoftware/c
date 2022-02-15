/**
 * Programa: flujos.c
 *
 * Demuestra la equivalencia de flujos de entrada y salida.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 04/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

int main() {

    // variables
    char buffer[81];

    // recibe una entrada e inmediatemente le da salida
    puts(fgets(buffer, 81, stdin));

    // termina el programa
    return 0;
}
