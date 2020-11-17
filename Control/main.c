/**
 * Estructuras de control
 */

// bibliotecas
#include<stdio.h>

int main() {

    // variables del programa
    int arreglo[100];
    int b[100];

    /**
     * se puede poner un enunciado nulo al final del encabezado de un ciclo for
     * para hacer que todo el trabajo se ejecute en el mismo ciclo for.
     * 
     * un ejemplo para inicializar todos los elementos de un arreglo en el valor
     * 10 utilizando el enunciado nulo (;).
     */
    for(int contador = 0; contador < 100; arreglo[contador++] = contador);      /* El ; al final del for el enunciado nulo */
    
    /**
     * otro ejemplo utlizando el enunciado nulo para imprimir el contenido de 
     * cada espacion en un arreglo de numeros enteros.
     */
    for(int i = 0; i < 100; printf("%i\n", arreglo[i++]));

    /**
     * operador coma
     * se puede crear una expresion separando dos subexpresiones con el operador 
     * coma (,)
     * 
     * usando al operador coma se puede hacer que cada parte de un enunciado for
     * ejecute varias tareas. un ejemplo copiar el contenido de un arreglo dentro
     * de otro arreglo pero en orden inverso.
     */
    for(int i = 0, j = 99; i < 100; i++, j--)
        b[j] = arreglo[i];
    
    for(int i = 0; i < 100; printf("%i\n", b[i++]));
}