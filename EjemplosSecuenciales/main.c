/**
 * Hacer una lista de 10 números, luego decirle al usuario que digite un
 * número y a través de busqueda secuencial determinar si el número existe
 * en la lista o no ademas de identificar en que posicion se encuentra.
 */

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // variables
    int matriz[] = {10, 2, 4, 6, 9, 3, 1, 5, 7, 0, 13, 15, 11};
    int dato, i = 0;
    char bandera = 'f';
    
    // entrada de datos
    printf("Digite un número: ");
    scanf("%i", &dato);
    
    // algoritmo
    while(bandera == 'f' && i < 13) {
        if(matriz[i] == dato) {
            bandera = 'v';
        }
        i++;
    }
    
    // salida de datos 
    if(bandera == 'v') {
        printf("El número %i existe en la matriz en la posicion %i\n", dato, i);
    } else {
        printf("El número %i no existe en la matriz", i);
    }
    
    // fin del programa
    return 0;
}
