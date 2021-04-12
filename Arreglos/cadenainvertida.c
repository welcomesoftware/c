/**
 * Realizce un programa que permita leer una cadena de caracteres
 * y devuelva el número de caracteres que tiene dicha cadena e imprima
 * dicha cadena al reves.
 */

// librerías
#include <stdio.h>

int main() 
{
    // variables
    int longitud = 0;
    char cadena[80];

    // entrada de datos
    printf("Digite una cadena de texto: ");
    scanf("%s", cadena);

    // procesamiento de datos
    while (cadena[longitud] != '\0') longitud++;

    char cadenainversa[longitud + 1];

    // llena la cadena invertida
    for (int i = longitud, j = 0; i > 0; i--, j++)
    {
        cadenainversa[j] = cadena[i-1];
    }
    cadenainversa[longitud] = '\0';
    
    // salida de datos
    printf("La cadena \"%s\" tiene %i caracteres.\n", cadena, longitud);
    printf("La cadena invertida es \"%s\"\n", cadenainversa);
    
    // fin del programa
    return 0;
}
