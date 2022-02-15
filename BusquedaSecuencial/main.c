/**
 * Busqueda Secuencial
 * Determina si un elemento pertenece a una lista de datos
 * sin importar si la lista esta ordenada o no.
 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // variables
    int arreglo[5] = {3, 2, 1, 4, 5};
    char bandera = 'f';
    int i = 0;
    int dato;
    
    // Busqueda Secuencial
    printf("Digite el datos que desea validar: ");
    scanf("%i", &dato);
    
    while((bandera == 'f') && (i < 5)) {
        if(arreglo[i] == dato) {
            bandera = 'v';
        }
        i++;
    }
    
    
    if(bandera == 'f')
        puts("El número no existe en el array");
    else
        printf("El número existe, se encuentra en la posición %i\n", i-1);
    
    return 0;
}
