/**
 * Ejercicio 3
 *
 * Escriba un programa que abra un archivo y cuente la cantidada de caracteres.
 * cuando acabe el programa debe imprimir la cantidad de caracteres.
 */

#include <stdio.h>

int main() {

	// variables del programa
	FILE *file;
	int count = 0;

	// abre el archivo y valida su apertura
	if ((file = fopen("text.txt", "r")) == NULL)
		return -1;

	// lee un caracter al a vez y acumula
	while (!feof(file)) {
		if(fgetc(file) == '\n' || fgetc == '\0')
			break;
		count = (int) ftell(file);
	}

	printf("Cantidad de caracteres en el archivo: %d\n", count);
	printf("Indicador posición: %ld\n", ftell(file));

	// cierra el archivo
	fclose(file);

	// termina el programa
	return 0;
}
