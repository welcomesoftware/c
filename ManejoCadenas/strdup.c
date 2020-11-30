/**
 * Programa: strdup.c
 *
 * La función de biblioteca strdup() es similar a strcpy(), a excepción de que 
 * strdup() ejecuta su propia asignación de memoria para la cadena de destino
 * con una llamada a malloc(). 
 *
 * Prototipo: char *strdup(char *origen);
 *
 * El argumento es un apuntador a la cadena de origen. La función retorna un 
 * apuntador a la cadena de destino, el espacio es asignado por malloc() o null
 * si la memoria necesaria no pudo ser asignada. Observe que strdup no es una 
 * función estándar ANSI C. puede que tal vez no esté presente o sea diferente
 * en otros compiladores.
 *
 * Este programa muesta el uso de strdup() para copiar una cadena con asignaci-
 * ón automatica de memoria.
 */

// bibliotecas
#include <stdio.h>
#include <string.h>

// variables globales
char origen[] = "Mi amado es el más bello entre millares de millares.";

int main() {
	// variables del programa
	char *destino;

	// manejo de errores
	if((destino = strdup(origen)) == NULL) {
		fprintf(stderr, "Error reservando memoria...\n");
		return -1;
	}

	// despliega destino en pantalla
	printf("La cadena destino = %s\n", destino);

	// termina el programa
	return 0;
}
