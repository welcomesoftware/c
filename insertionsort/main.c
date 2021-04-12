/**
 * Algoritmo de ordenamiento por inserción.
 */

// librerías
#include <stdio.h>


int main(int argc, char *argv[])
{
	// variables
	int array[5] = {5, 3, 4, 1, 2};
	int aux, pos;
	
	for(int i = 0; i < 5; i++)
	{
		pos = i; 
		aux = array[i];
		
		while((pos > 0) && (array[pos-1] > aux))
		{
			array[pos] = array[pos-1];
			pos--;
		}
		array[pos] = aux;
	}
    
    // despliega los datos en forma ascendente
    for(int i = 0; i < 5; i++) {
        printf("%i ", array[i]);
    }

    // fin del programa
    return 0;
}
