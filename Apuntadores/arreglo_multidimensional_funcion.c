/**
 * Programa: Paso de arreglos multidimensionales a function
 *
 * Demuestra el paso de un arreglo multidimensional a una funcion
 * usando un apuntador.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 05/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

void printarray1(int (*ptr)[4]);
void printarray2(int (*ptr)[4], int n);

int main() {

    int multi[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // ptr es un apuntador a un arreglo de 4 elementos.
    int (*ptr)[4];

    // hace que ptr apunte al primer elemento de multi.
    ptr = multi;

    /**
     * En cada ciclo, ptr es incrementado para que apunte al siguiente
     * elemento de multi(el siguiente arreglo de 4 elementos enteros).
     */
    for (int i = 0; i < 3; i++) {
        printarray1(ptr++);
    }

    puts("Presione una tecla...");
    getchar();

    printarray2(multi, 3);

    // termina el programa
    return 0;
}

/**
 * Imprime los elementos de un solo arreglo entero de 4 elementos
 * p es un apuntador a tipo int. Se debe utilizar un modificador de tipo
 * para hacer que p sea igual a la dirección de ptr.
 */
void printarray1(int (*ptr)[4]) {
    // castea el ptr para hacer que se pueda almacenar en p.
    int *p = (int *)ptr;

    for (size_t i = 0; i < 4; i++) {
        printf("%d\n", *p++);
    }
}

// Imprime los elementos de un arreglo de n por 4 elementos.
void printarray2(int (*ptr)[4], int n) {
    // castea ptr para hacer que se pueda almacenar en p.
    int *p = (int *)ptr;

    for (size_t i = 0; i < (4 * n); i++) {
        printf("%d\n", *p++);
    }
}
