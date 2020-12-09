/**
 * Programa: uppercase.c
 *
 * Este programa hará uso de nuestra propia bibloteca de funciones
 * para convertir texto entre mayúsculas y minúsculas. 
 */

// Bibliotecas
#include <stdio.h>
#include <case.h>

// Main
int main() {
	
	// variables del programa
	char cadena[] = "hola mundo utilizando la biblioteca dinámica libcase.so";

	// despliega la cadena en pantalla
	puts(cadena);

	// ejecuta la conversion a mayúsculas
	strupper(cadena);

	// despliega la cadena en mayúsculas
	puts(cadena);

	// termina el programa
	return 0;
}
