/**
 * Programa: bloque.c
 *
 * Demuestra el uso de variables locales dentro de bloques.
 *
 * Created by Welcome <welcomedario9@gmail.com> on 02/11/20.
 * Copyright © 2020 Welcome. All rights reserved.
 */
#include <stdio.h>

int main() {

    // define una variable local a main()
    int count = 0;
    printf("Fuera del bloque %i\n", count);

    // inicia un bloque
    {
        // define una variable local al bloque
        int count = 999;
        printf("Dentro del bloque %i\n", count);
    }

    // el contador definido dentro del bloque es independiente al que esta fuera
    printf("Fuera del bloque otra vez %i\n", count);

    // termina el programa
    return 0;
}