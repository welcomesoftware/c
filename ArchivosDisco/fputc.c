/**
 * Programa: fputc.c
 *
 * Así como se pueden leer datos desde un fichero o archivo de disco, también
 * se pueden crear o escribir ficheros o archivos con la información que dese-
 * amos almacenar. Esta función escribe un carácter a la vez en el archivo que
 * está siendo apuntado por el apuntador FILE *archivo. El valor de retorno es
 * el carácter escrito si la operción fue exitosa, en caso contrario retornará
 * EOF.
 *
 * Prototipo:
 * 	int fputc(int carácter, FILE *archivo);
 *
 * Este programa muestra el uso de fputc en un fichero.txt, se escribira dent-
 * ro del archivo hasta que se presione la tecla ENTER. 
 */

// Bibliotecas
#include <stdio.h>

// Función Principal
int main()
{
	// Variables del programa
	FILE *archivo = fopen("fichero.txt", "a+t");	// apertura al final del texto 
	char caracter;

	// Manejo de errores
	if (archivo == NULL)
	{
		puts("Error abriendo el archivo...");
		return -1;
	}

	// Pide entrada de datos por teclado
	puts("Introduce una linea de texto al fichero: ");

	/**
	 * Ejecutará las iteraciones mientras no se teclee un salto de linea,
	 * luego escribira el carácter teclado en el archivo y en la pantalla
	 * al mismo tiempo.
	 */
	while ((caracter = getchar()) != '\n')
	{
		printf("%c", fputc(caracter, archivo));
	}

	// Termina el programa
	return 0;
}	