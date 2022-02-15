/**
 * Programa: fgets
 *
 * Demuestra la funcion fgets()
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 05/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

#define MAXLEN 10

int main() {

    char buffer[MAXLEN];

    puts("Ingrese una linea de texto o presione Enter para salir.");

    while (1) {
        fgets(buffer, MAXLEN, stdin);
        if (buffer[0] == '\n')
            break;
        puts(buffer);
    }

    // termina el programa
    return 0;
}
