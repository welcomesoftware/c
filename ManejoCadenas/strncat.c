/**
 * Programa: strncat.c
 *
 * La función de biblioteca strncat() también ejecuta la concatenación de cadenas
 * pero nos permite especificar qué tantos caracteres de la cadena de origen son
 * añadidos a la cadena destino.
 *
 * Prototipo:
 * 	char *strncat(char *cadena1, char *cadena2, size_t n);
 *
 * Si cadena2 contiene más de n caracteres, son añadidos al final de cadena1 los
 * primeros n caracteres de cadena2. Si cadena2 contiene menos de n caracteres, 
 * cadena2 es añadida completamente al final de cadena1. En ambos casos se añade
 * un carácter nulo al final. Se debe asignas suficiente espacio para cadena1 a 
 * fin de que quepa la cadena resultante. La función retonrna un apuntador a cad-
 * ena1. 
 */

// Bibliotecas
#include <stdio.h>
#include <string.h>

// Globales
char cadena2[] = "abcdefghijklmnopqrstuvwxyz";

// Función Principal
int main()
{
	// variables del programa
	char cadena1[27];

	for (int i = 1; i < 27; ++i)
	{	
		strcpy(cadena1, "");
		strncat(cadena1, cadena2, i);
		puts(cadena1);
	}
	// termina el program
	return 0;
}