/**
 * Programa: Paso de un apuntador a función como argumento
 *
 * Se aprende otra forma de pasar una apuntador como argumento a
 * una función para llamar a diferentes funciones.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 12/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

/**
 * Los prototipos de función. La función func1() toma como su unico
 * argumento un apuntador a la función que no toma argumentos y no
 * tiene valor de retorno.
 */
void func1(void (*p)(void));
void one();
void two();
void other();

int main() {

    // El apuntador a función
    void (*ptr)(void);
    int numero;

    for (;;) {
        puts("Digite un entero entre 1 & 10; 0 para salir:");
        scanf("%d", &numero);

        if (numero == 0)
            break;
        else if(numero == 1)
            ptr = one;
        else if(numero == 2)
            ptr = two;
        else
            ptr = other;

        func1(ptr);
    }

    // termina el programa
    return 0;
}

void func1(void (*p)()) {
    p();
}

void one() {
    puts("Ingresaste 1.");
}

void two() {
    puts("Ingresaste 2.");
}

void other() {
    puts("Ingresaste cualquier numero.");
}
