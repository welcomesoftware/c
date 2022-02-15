/**
 * Programa: break.c
 *
 * El enunciado break ejecuta la terminación anticipada de un ciclo, sim embargo
 * si se usa en ciclos anidados, solamente causa la salida del ciclo más interno
 * hace que el programa brinque más allá del final del ciclo actual.
 *
 * Created by welcome <welcomedario9@gmail.com> on 03/11/20.
 * Copyright © 2020 welcome. All rights reserved.
 */
#include <stdio.h>

char s[] = "Esta es una cadena de prueba. Esto contiene dos sentencias.";

int main() {

    // Ejemplo 1
    int count;

    printf("Cadena Original: %s\n", s);

    for (count = 0; s[count] != '\0'; count++) {
        if (s[count] == '.') {
            s[count + 1] = '\0';
            break;
        }
    }
    printf("Cadena Modificada: %s\n", s);


    // Ejemplo 2
    int x;

    puts("Contando de 1 a 10");

    for (x = 1; ; x++) {
        if(x == 10)
            break;
        printf("%d ", x);
    }
    puts("");

    // termina el programa
    return 0;
}
