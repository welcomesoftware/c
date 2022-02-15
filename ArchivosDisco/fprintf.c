/** 
 * Programa: fprintf.c
 *
 * La función fprintf() funciona igual que printf() en cuanto a parametros
 * sin embargo la salida se puede redirigir a un STREAM o flujo de datos, 
 * a un archivo de disco e incluso a la pantalla.
 *
 * Prototipo:
 * 	int fprintf(FILE *archivo, const char *formato, argumentos, ...);
 *
 * Este programa muestra un ejemplo de su uso, abre un documento llamado
 * fichero.txt en modo lectura/escritura y escribe dentro de el.
 */

// Bibliotecas
#include <stdio.h>


// Función Principal
int main()
{
	// variables del programa
	FILE *archivo = fopen("fichero.txt", "r+");
	char *buffer = "Esto es un texto dentro del archivo.";

	// manejo de errores
	if (archivo == NULL)
	{
		puts("¡Error abriendo el archivo!");
		return -1;
	}

	// almacena el contenido dentro del buffer en el archivo
	fprintf(archivo, buffer);
	// luego almacena el siguiente contenido en el archivo
	fprintf(archivo, "%s\n", "\nEstos es otro texto dentro del archivo.");

	// despliega un mensaje al usuario
	puts("¡Operación satisfactiora!");

	//cierra el archivo
	fclose(archivo);

	// termina el programa
	return 0;
}