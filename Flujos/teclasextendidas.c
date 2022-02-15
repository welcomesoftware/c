/**
 * Programa: Teclas Extendidas
 *
 * Demuestra el uso de teclas Extendidas de teclado.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 04/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

int ext_key();

int main() {

    int ch;

    puts("Presione una Tecla Extendida; presione F1 para salir.");

    while (1) {
        ch = ext_key();
        if (ch == 59)
            break;
        else
            printf("El codigo de esta tecla es: %d", ch);
    }

    // termina el programa
    return 0;
}

int ext_key() {
    int ch;

    // espera a que llegue un byte 0
    while((ch = getc(stdin)) != 0) ;

    // regresa el siguiente caracter
    return getc(stdin);
}
