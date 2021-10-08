/**
 * Programa: Override
 *
 * Uso de un apuntador a función para llamar a diferentes funciones,
 * dependiendo de las circunstancias del programa.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 06/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>


// Prototipos de función
void func1(int x);
void one(void);
void two(void);
void other(void);

// Función Principal
int main() {

    // variables
    int a;

    // ciclo infinito
    for(;;) {
        puts("Digite un entero entre 1 & 10; digite 0 para salir.");
        scanf("%d", &a);

        if (a == 0)
            break;

        func1(a);
    }

    // termina el programa
    return 0;
}

void func1(int x) {
    // apuntador a función
    void (*ptr)(void);

    if (x == 1) {
        ptr = one;
    }
    else if (x == 2) {
        ptr = two;
    }
    else {
        ptr = other;
    }

    ptr();
}

void one(void) {
    puts("Ingresaste 1.");
}

void two(void) {
    puts("Ingresaste 2.");
}

void other(void) {
    puts("Ingresaste cualquier otro numero despues de 1 & 2.");
}
