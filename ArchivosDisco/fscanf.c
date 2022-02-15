/**
 * Programa: fscanf.c
 *
 * La función fscanf() funciona igual que scanf() en cuanto a parámetros,
 * sin embargo la entrada se toma de un STREAM o flujo de datos, en lugar
 * de tomarlo de STDIN que es el teclado. 
 *
 * Prototipo:
 * 	int fscanf(FILE *archivo, const char *formato, argumento, ...);
 *
 * En este programa muestra un ejemplo de su uso, abriendo el archivo.dat
 * en modo lectura y leyendo su contenido.
 */

// Bibliotecas
#include <stdio.h>

// Función principal
int main()
{
	// Variables del programa
	char buffer1[100];
	char buffer2[100];
	char buffer3[100];
	
	// Declara un apuntador al archivo y lo abre
	FILE *archivo = fopen("fichero.txt", "r");

	// Manejo de errores
	if (archivo == NULL)
	{
		puts("Error abriendo el archivo...");
		return -1;
	}

	// Entrada formateada de datos desde el archivo, luego la almacena en
	// los buffers.
	fscanf(archivo, "%s %s %s", buffer1, buffer2, buffer3);

	// Despliega el contenido de los buffers en pantalla
	printf("%s %s %s\n", buffer1, buffer2, buffer3);

	// Cierra el archivo
	fclose(archivo);

	// Termina el programa
	return 0;
}