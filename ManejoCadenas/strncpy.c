/**
 * Programa: strncpy.c
 *
 * La función strncpy() es similar a strcpy(), a excepción de que strncpy() le 
 * permite especificar la cantidad la cantidad de caracteres a copiarse en el
 * destino. Su prototipo se encuentra en el encabezado STRING.H
 *
 * Prototipo: char *strncpy(char *destino, char *origen, size_t n);
 *
 * Los argumentos destino y origen, son apuntadores a las cadenas de destino y
 * origen. La función copia los primeros n caracteres de origen hacia destino,
 * si el origen es más corto que n caracteres, se añaden suficientes caracteres
 * nulos al final del origen, para completar un total de n caracteres copiados
 * a destino. Si origen es más grande que n caracteres, no se añade \0 al final
 * de destino. El valor de retorno de strncpy() es la direccion en memoria de
 * destino.
 *
 * Este programa muestra el uso de strncpy().
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// variables globales
char destino[] = "...........................";
char origen[] = "abcdefghijklmnñopqrstuvwxyz";

int main() {
	// variables del programa
	size_t n;

	// Ciclo infinito
	while(1) {
		puts("Ingrese el numero de caracteres a copiar (1 - 27): ");
		scanf("%lu", &n);

		if (n > 0 && n <= 27)
			break;
	}

	// Despliega destino en pantalla antes de la copia
	printf("Antes de strncpy, destino = %s\n", destino);
	// Copia n cantidad de caracteres a destino
	strncpy(destino, origen, n);
	// Despliega destino en pantalla despues de la copia
	printf("Despues de strncpy, destino = %s\n", destino);

	// termina el programa
	return 0;
}
