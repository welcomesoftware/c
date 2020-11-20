/**
 * Programa: remove.c
 *
 * Para borrar un archivo se utiliza la función de biblioteca remove(). Su prototipo se encuentra 
 * en el encabezado STDIO.H
 *
 * Prototipo:
 * 	int remove(const char *filename);
 *
 * El archivo especificado no debe estar abierto. Si el archivo es borrado, remove() retorna 0, si
 * el archivo no existe, es de soló lectura o sucede cualquier otro error, remove() retorna -1.
 *
 * Este programa demuestra el uso de la función de biblioteca remove(), debe tener cuidado debido
 * a que si se borra un archivo importante, ese archivo se ha ido para siempre.
 */

#include <stdio.h>
#include <string.h>

int main() {
	
	// variables del programa
	char filename[80];
	
	// pide al usuario el nombre del archivo a borrar y lo almacena en una variable
	puts("Ingrese el nombre del archivo a borrar:");
	fgets(filename, 80, stdin);
	
	// reemplazo el salto de linea con un caracter nulo
	if(filename[strlen(filename) - 1] == '\n')
		filename[strlen(filename) - 1] = '\0';

	if(remove(filename) == 0)
		printf("El archivo %s ha sido eliminado.\n", filename);
	else
		fprintf(stderr, "Error eliminando el archivo...\n");

	// termina el programa
	return 0;
}
