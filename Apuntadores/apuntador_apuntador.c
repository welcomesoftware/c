/**
 * Programa: Apuntador a Apuntador
 *
 * Debido a que un Apuntador es en sí mismo una variable numeria, es guardado en
 * la memoria de la computadora en una dirección particular. Por lo tanto se puede
 * crear un Apuntador a un Apuntador, una variable cuyo valor es la dirección de
 * un Apuntador.
 *
 * Sintaxis:
 * int x = 10;              // x es un entero
 * int *ptr = &x;           // ptr es un Apuntador a x
 * int **ptr_ptr = &ptr;    // ptr_ptr es un Apuntador a ptr
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 05/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

int main() {

    // variables & Apuntadores
    int x = 10;
    int *ptr = &x;
    int **p_ptr = &ptr;

    /**
     * Nota: Se usa el operador de indireccion doble(**) cuando se declara un
     * Apuntador a Apuntador. También se puede usar el operador de indireccion
     * doble cuando se accesa a la variable apuntada con un apuntador a apuntador
     */
    **p_ptr = 12;       // asigna 12 a la variable x

    printf("el valor de x:       %d\n", x);
    printf("el valor de *ptr:    %d\n", *ptr);
    printf("el valor de **p_ptr: %d\n", **p_ptr);

    // El uso más común de Apuntadores a Apuntadores, es arrelos de Apuntadores

    // termina el programa
    return 0;
}
