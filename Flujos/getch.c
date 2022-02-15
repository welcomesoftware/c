/**
 * Programa: getch.c
 *
 * getch obtiene un caracter del flujo stdin. Proporciona entrada de caracteres
 * sin almacenamiento temporal y sin replica. El protopipo se encuentra en el
 * encabezado <curses.h> para Linux, <conio.h> para Windows.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 04/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>
#include <curses.h>

int main() {

    char ch;

    while((ch = getch(stdin)) != '\r')
        putchar(ch);

    // termina el programa
    return 0;
}
