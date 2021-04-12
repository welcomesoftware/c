/**
 * Hacer un arreglo de 10 elementos desordenados "números", luego ordenarlos
 * con el método burbuja, posteriormente pedir un dato a buscar y utilizar la
 * busqueda binaria para determinar si el datos existe o no.
 */

// librerías
#include <stdio.h>

// macros
#define TRUE    1 
#define FALSE   0 


int main(int argc, char *argv[]) 
{
    // variables 
    int arreglo[10] = {1, 5, 3, 2, 4, 7, 9, 6, 10};
    int dato, auxiliar;                        
    int inferior, superior, mitad, bandera;
    int i, j;
    
    // ordenamiento burbuja
    for(i = 0; i < 10; i++) 
    {
        for(j = 0; j < 10; j++) 
        {
            if (arreglo[j] > arreglo[j+1])
            {
                auxiliar = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = auxiliar;
            }
        }
    }

    // entrada de datos
    printf("ingrese el dato que desea buscar: ");
    scanf("%i", &dato);
    
    // busqueda binaria
    inferior = 0;
    superior = 10;
    
    while(inferior <= superior) 
    {
        mitad = (inferior + superior) / 2;
        
        if(arreglo[mitad] == dato) {
            bandera = TRUE;
            break;
        }
        if(arreglo[mitad] > dato) {
            superior = mitad;
            mitad = (inferior + superior) / 2;
        }
        if(arreglo[mitad] < dato) {
            inferior = mitad;
            mitad = (inferior + superior) / 2;
        }
    }

    if(bandera == FALSE) {
        printf("El número no existe.");
    }
    else {
        printf("El númrero existe en la posición %i\n", mitad);
    }

    // fin del programa
    return 0;
}
