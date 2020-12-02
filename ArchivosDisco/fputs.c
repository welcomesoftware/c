/**
 * Programa: fputs.c
 *
 * La función fputs.c escribe una cadena en un fichero, la ejecución 
 * de la misma no añade el carácter de salto de linea '\n', ni el ca-
 * rácter nulo '\0' al final. El valor de retorno es un numero no ne-
 * gativo en caso de tener éxito, o EOF en caso de error. Los paráme-
 * tros de entrada son; la cadena a escribir y un apuntador a la arc-
 * hivo donde se realizará la escritura.
 *
 * Prototipo:
 * 	int fputs(const char *buffer, FILE *archivo);
 *
 * Este programa muestra el funcionamiento de fputs(). 
 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Función Principal
int main()
{
	// variables del programa
	FILE *archivo = fopen("archivo.dat", "r+");
	char *cadena = "Mostrando el uso de fputs() en un archivo.\n";

	// manejo de errores
	if (archivo == NULL)
	{
		puts("¡Error abriendo el archivo!");
		exit(1);
	} 
	else if (cadena == NULL)
	{
		puts("¡Error reservando la memoria!");
		fclose(archivo);
		exit(1);
	}

	// escribiendo la cadena de texto en el archivo
	fputs(cadena, archivo);

	// despliega un mensaje para saber que todo salió satisfactoriamente
	puts("¡Texto copiado satisfactoriamente!");

	// cierra el archivo
	fclose(archivo);
	 
	// termina el programa
	return 0;
}