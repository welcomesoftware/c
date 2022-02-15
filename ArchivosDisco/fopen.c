/**
 * Demostración de la función fopen() para abrir archivos.
 */

#include<stdio.h>

int main() {

	// crea el apuntador al archivo y lo asigna al abrirlo
	FILE *file = fopen("fichero.in", "r");

	// valida la apertura correcta del archivo
	// C no tiene una estructura de manejo de excepciones o errores, por eso es necesario
	// validar que el archivo fue abierto correctamente.
	if (file == NULL) {
		fputs("Error opening file..", stderr);
		return -1;
	}

	// cierra el archivo
	fclose(file);

	// cierra el programa
	return 0;
}
