/**
 * Dado un arreglo de 10 elementos {1, 10}, escribir un programa
 * en c que muestre las direcciones en memoria de cada elemento
 * del vector, haciendo uso de apuntadores.
 */

// librerías
#include <stdio.h>


int main()
{
    // variables
    int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p_arreglo = arreglo;

    // encabezado del programa
    puts("--------------------------------------------");
    puts("Direcciones en memoria de un vector:");
    puts("--------------------------------------------");
    
    // algoritmo
    for(int i = 0; i < 10; i++)
    {
        printf("Vector %i: %p\n", i, p_arreglo++);
    }

    // finaliza exitosamente
    return 0;
}
