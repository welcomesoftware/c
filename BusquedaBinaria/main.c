/**
 * Busqueda Binaria
 * ejemplo sobre busqueda binaria o dicotomica, a diferencia de la busqueda secuencial
 * la lista de datos debe estar completamente ordenada.
 */

// librerías
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // variables
    int matriz[5] = {1,2,3,4,5};
    int inferior, superior, mitad, dato;
    char bandera = 'f';
    
    dato = 5;
    
    // algoritmo
    inferior = 0;
    superior = 5;
    
    while(inferior <= superior) 
    {
        mitad = (inferior + superior) / 2;
        
        if(matriz[mitad] == dato) {
            bandera = 'v';
            break; 
        }
        if(matriz[mitad] > dato) {
            superior = mitad;
            mitad = (inferior + superior) / 2;
        }
        if(matriz[mitad] < dato) {
            inferior = mitad;
            mitad = (inferior + superior) / 2;
        }
    }
    
    // salida de datos
    if(bandera == 'f') {
        puts("El número no existe.");
    }
    else if(bandera == 'v') {
        printf("El número existe en la posición: %i\n", mitad);
    }
    
    // fin del programa
    return 0;
}
