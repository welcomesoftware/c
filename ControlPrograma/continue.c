/**
 * Programa: continue.c
 *
 * Cuando se ejecuta un enunciado continue se ejecuta inmediatamente la siguiente
 * iteración del ciclo que lo contiene. Los enunciados que están entre continue
 * y el final del ciclo no se ejecutarán.
 *
 * Created by welcome <welcomedario9@gmail.com> on 03/11/20.
 * Copyright © 2020 welcome. All rights reserved.
 */
#include <stdio.h>

int main() {
    // Ejemplo 1
    // declara un buffer para la entrada y una variable de contador.
    char buffer[81];
    int ctr;

    // recibr una linea de texto.
    puts("Digite una linea de texto:");
    fgets(buffer, 81, stdin);

    /**
     * Va por la cadena desplegando solamente los caracteres que no son vocales
     * minúsculas.
     */
    for(ctr = 0; buffer[ctr] != '\0'; ctr++) {

        // Si el caracter es una vocal minúscula regresa al ciclo sin imprimirla
        if(buffer[ctr] == 'a' || buffer[ctr] == 'e' || buffer[ctr] == 'i' ||
            buffer[ctr] == 'o' || buffer[ctr] == 'u')
            continue;

        // imprime los caracteres que no son vocales
        putchar(buffer[ctr]);
    }

    // Ejemplo 2
    puts("\nImprimiendo solamente los numeros pares del 1 al 10");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0)
            continue;

        // imprime solo los numeros pares
        printf("%d ", i);
    }
    puts("");

    // termina el programa
    return 0;
}
