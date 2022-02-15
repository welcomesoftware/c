/**
 * Ejercicios
 * 
 * Ejercicios que afianzan conocimientos y reafirman la comprension del material.
 */

// bibliotecas
#include <stdio.h>

int main() {
	
	// Ejercicio 1
	// Escriba el código para cerrar todos los flujos de archivo.
	FILE *file;

	// abre el archivo y valida su apertura
	if ((file = fopen("Ejercicio1.txt", "w")) == NULL)
		return -1;
	
	// cierra todos los flujos
	fcloseall(file);

	// cierra el programa
	return 0;
}
