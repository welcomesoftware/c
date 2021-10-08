/**
 * Hacer un progra que imprima el alfabeto en MAYÚSCULAS
 * utilizando apuntadores.
 */

// librerías
#include <stdio.h>


int main()
{
    // variables
    char letra;
    char *p_letra;

    p_letra = &letra;

    // algoritmo
    for (letra = 'A'; letra <= 'Z'; letra++) 
    {
        if (letra != 'Z')
            printf("%c, ", *p_letra);
        else
            printf("%c", *p_letra);
    }
    puts(""); 

    // finaliza exitosamente
    return 0;
}
