/**
 * Programa: getchar.c
 *
 * Obtiene el siguiente caracter del flujo stdin. Proporciona entrada de caracte
 * res con almacenamiento temporal con réplica.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 04/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>
#define MAX 80

int main() {

    char ch;

    while((ch = getchar()) != '\n')
        putchar(ch);
    puts("");
    
    // Ejercicio 2
    // Uso de getchar() para recibir cadenas.
    char buffer[MAX + 1];
    int x = 0;

    while((ch = getchar()) != '\n' && x < MAX)
        buffer[x++] = ch;

    buffer[x] = '\0';

    puts(buffer);
    // termina el programa
    return 0;
}
