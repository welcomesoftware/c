/**
 * Programa: fgetc.c
 *
 * Esta función lee un caracter a la vez del archivo que está siendo señalado con el
 * apuntador *archivo. En caso de que la lectura sea exitosa devuelve le caracter leído
 * y en caso de que no lo sea o de encontrar el final del archivo, devuelve EOF.
 */

// bibliotecas
#include <stdio.h>

int main() {
	
	// variables del programa
	FILE *archivo = NULL;
	char caracter;
	int count = 0;

	// valida si el archivo fue abierto correctamente
	if ((archivo = fopen("text.txt", "r")) == NULL) {
		puts("Error abriendo el archivo...");
		return -1;
	}

	puts("El contenido del archivo prueba es:");

	// imprime uno a uno cada caracter en el archivo hasta llegar al EOF.
	while ((caracter = fgetc(archivo)) != EOF) { 
		printf("%c", caracter);
		count++;
	}
	printf("\ncantidad de caracteres en el archivo: %d\n", count);
	
	// cierra el archivo
	fclose(archivo);

	// cierra el programa
	return 0;
}
