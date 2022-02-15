/**
 * Ejercicio 2
 * Escriba un programa que despliege un archivo en pantalla.
 */
#include <stdio.h>

int main() {

	// variables del programa
	FILE *file;
	char buffer[80];

	// abre el archivo y valida su apertura
	if ((file = fopen("feof.c", "r")) == NULL)
		return -1;

	// si no ha llegado al fin de archivo imprime una nueva linea
	while(!feof(file)) { 
		fgets(buffer, 80, file);
		printf("%s", buffer);
	}

	// termina el programa
	return 0;
}
