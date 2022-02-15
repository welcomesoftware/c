/**
 * Arreglos de estructuras en c
 */

// librerías
#include <stdio.h>


// estructuras
struct persona {
		char nombre[20];
		int edad;
} personas[5];



int main() 
{	
		// variables
		int i;
		
		// entrada de datos
		for(i = 0; i < 5; i++)
		{
				printf("Digite el nombre de la persona #%i: ", i+1);
				scanf("%s", personas[i].nombre);
				printf("Digite la edad de la persona #%i: ", i+1);
				scanf("%i", &personas[i].edad);
		}

		// salida de datos
		for(i = 0; i < 5; i++)
		{
				printf("Persona #%i: %s\n", i+1, personas[i].nombre);
				printf("Edad: %i\n", personas[i].edad);
		}
		
		// fin del programa
		return 0;
}
