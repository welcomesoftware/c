/**
 * Programa: Funciones con lista variable de argumentos
 * 
 * Autor: Darío Welcome
 * Copyrights (c) 2021.
 */ 

// bibliotecas
#include <stdio.h>
#include <stdarg.h>

// prototipos
float promedio(int num, ...);

// principal
int main() {

    // variables
    float x;
    
    // procesamiento
    x = promedio(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    
    // salida de datos
    printf("El primer promedio es %.1f %\n", x);

    x = promedio(5, 121, 206, 76, 31, 5);
    printf("El segundo promedio es %.1f %\n", x);
    
    // finaliza
    return 0;
}

// declaracion de función con lista de argumentos variable.
float promedio(int num, ...) {

    // declara una variable tipo va_list, un contador y un total.
    va_list arg_ptr;
    int contador, total;

    // inicializa el apuntador a argumentos
    va_start(arg_ptr, num);

    // recupera cada argumento de la lista variable
    for (contador = 0; contador < num; contador++) {
        total += va_arg(arg_ptr, int);
    }
    
    // ejecuta la limpieza
    va_end(arg_ptr);

    // retorna el calculo del promedio
    return ((float)total / num);
}
