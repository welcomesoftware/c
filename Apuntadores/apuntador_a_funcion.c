/**
 * Programa: Apuntador a una funcion
 *
 * Un apuntador a una funcion guarda la direccion inicial de la función
 * es decir, su punto de entrada. Proporciona una manera más flexible
 * para llamar a una funcion. Permite que el programa elija entre varias
 * funciones, seleccionando la que es más adecuada para las circunstancias.
 *
 * Sintaxis: tipo (*ptr_a_funcion)(parametros);
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 06/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

// declaracion de apuntador a función
int (*func1)(int x);
void (*func2)(double y, double z);
char (*func3)(char *p[]);
void (*func4)();

/**
 * Se deben usar los parentesis debido a que el operador de indireccion tiene una
 * precedencia menor a la de los parensis.
 *
 * Si se declarara asi: int *func1(intx); estariamos declarando una funcio que retorna
 * un apuntador a tipo int, en lugar de un apuntador a una funcion. Siempre que se declare
 * un apuntador a una funcion se deben usar el juego de parentesis.
 */

// Prototipo de funcíon
float square(float x);

// Declaración de apuntador a funcion
float (*p_func)(float x);

// Función Principal
int main() {

    // Inicializa p_func para que apunte a square().
    // El nombre de una funcion sin parentesis es una constante de apuntador al igual que los
    // arreglos sin corchetes, no puede ser cambiado
    p_func = square;

    // Llama a square() de dos maneras.
    printf("%f %f\n", square(6.6), p_func(6.6));

    // termina el programa
    return 0;
}

float square(float x) {
    return (x * x);
}
