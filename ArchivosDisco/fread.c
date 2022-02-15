/**
 * Programa: fread.c
 *
 * Esta función lee un bloque de un STREAM o flujo de datos. Sus parametros
 * son: un apuntador al bloque de memoria en donde se almacenaran los datos,
 * el tamaño en bytes de cada registro que se leera del archivo, la cantid-
 * ad de registros a leer del archivo, y un apuntador al archivo del cual 
 * se leeran los registros o datos. El indicador de posición de la cacena
 * avanza hasta leer la totalidad de bytes en el archivo. Si tiene éxito la
 * cantidad de bytes leidos es igual a (size * count) y retorna la cantidad
 * de registros leidos del archivo.
 *
 * Prototipo: 
 * 	size_t fread(void *buffer, size_t size, size_t count, FILE *archivo);
 * 	
 * Created by Darío Welcome <welcomedario9@gmail.com> on 30/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// función principal
int main() {

	// variables del programa
	char *buffer = (char *) malloc(250 * sizeof(char));
	FILE *archivo = fopen("archivo.dat", "rb");

	// manejo de errores
	if (buffer == NULL) 
	{
		puts("Error asignando la memoria...");
		fclose(archivo);
		exit(1);
	}
	else if (archivo == NULL)
	{
		puts("Error abriendo el archivo...");
		free(buffer);
		exit(1);
	}

	// lee el archivo y almacena los datos en el buffer
	fread(buffer, sizeof(char), 93, archivo);
	
	// despliega el buffer en pantalla
	printf("%s\n", buffer);

	// cierra el archivo
	fclose(archivo);
	
	// libera la memoria
	free(buffer);

	// termina el programa
	return 0;
}