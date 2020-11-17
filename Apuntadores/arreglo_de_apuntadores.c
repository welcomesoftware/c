/**
 * Programa: Arreglos de apuntadores
 *
 * Este tipo de construcción de programa puede ser muy poderoso en determinadas situaciones.
 * el uso mas comun más común para este tipo de arreglo de apuntadores se da en las cadenas
 * de texto. Se puede accesar y manejar gran cantidad de cadenas usando el arreglo de apuntadores.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 05/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

/**
 * Arreglo de apuntadores a tipo char
 * Cada elemento del arreglo es un apuntador individual a tipo char.
 */
char *mensajes[8] = {
    "Four",
    "score",
    "and",
    "seven",
    "years",
    "ago",
    "our",
    "forefathers"
};

/**
 * El manejo de arreglos de apuntadores es más facil que el manejo de las cadenas por si mismas
 * La ventaja es mayor cuando se están usando funciones. Es más fácil pasar un arreglo de apuntadores
 * a una función que varias cadenas.
 */
void print_strings(char *p[], int n) {
    for (size_t i = 0; i < n; i++) {
        printf("%s ", p[i]);
    }
    puts("");
}

int main() {

    for (size_t i = 0; i < 8; i++) {
        printf("%s ", mensajes[i]);
    }
    puts("\nPrint Strings Function:");
    print_strings(mensajes, 8);

    // termina el programa
    return 0;
}
