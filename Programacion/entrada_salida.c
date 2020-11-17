/**
 * Entrada y salida de datos:
 */
#include <stdio.h>

int main() {
    char a = 10;
    float b = 15.5f;
    char c =  80;

    // Salida de datos.
    printf("%i %f %c\n", a, b, c);

    // Entrada de datos
    char num1;
    float num2;
    char caracter;

    // printf("Digite el caracter: ");
    // scanf("%c", &caracter);
    // printf("El valor del caracter es: %c\n", caracter);

    /**
     * Cuando se le asigna un string a un arreglo no se necesita
     * poner el anspersand como referencia porque el arreglo es una 
     * referencia a una direccion en memoria. 
     * 
     * scanf() solo lee hasta donde encuentra un espacio y no guarda 
     * lo demas. para solucionar esto tenemos la funcion gets().
     */
    char nombre[50];
    printf("Digite su nombre: ");
    gets(nombre);
    printf("Su nombre es: %s\n", nombre);

    return 0;
}