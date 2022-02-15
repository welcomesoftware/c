/**
 * Programa: strcpy.c
 *
 * La biblioteca de C tiene tres funciones para la copia de cadenas. Debido a la forma en que C
 * maneja las cadenas, no se puede asignar una cadena en otra, como se puede hacer en otros len
 * guajes de programación. Se debe copiar la cadena de origen de su posición en memoria, a la 
 * posición en memoria de la cadena de destino. Las funciones para la copia de cadena son:
 *
 * strcpy(), strncpy() & strdup():
 *
 * Todas las funciones relacionadas al manejo de cadenas de texto se encuentran en el archivo
 * de encabezado STRING.H
 *
 * La función strcpy() copia una cadena a la posición en memoria de otra cadena.
 *
 * Prototipo: char *strcpy(char *destino, char *origen);
 *
 * La función strcpy() copia la cadena, incluido el carácter nulo '\0' apuntada por origen a la
 * posición apuntada por destino. El valor de retorno es un apuntador a la nueva cadena, destino.
 *
 * Cuando se use strcpy() primero se debe asignar espacio de almacenamiento para la cadena destino.
 * La función no tiene manera de saber si destino apunta a algún espacio asignado. Si el espacio
 * no ha sido asignado, la función sobreescribe la cantidad de bytes de memoria que serían deter-
 * minados por strlen(origen), comenzando en destino.
 *
 * Este programa demuestra el uso de strcpy().
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// variables globales
char origen[] = "La cadena de Origen";

int main() {
	// variables del programa
	char destino1[80];
	char *destino2, *destino3;

	// desplega la cadena origen en pantalla
	printf("Origen: %s\n", origen);

	// La copia a destino1 es correcta, debido a que destino1 apunta 
	// a 80 bytes de espacio asignado.
	strcpy(destino1, origen);
	// despliega destino1 en pantalla
	printf("destino1: %s\n", destino1);

	// Para copiar en destino2 se debe asignar espacio en memoria, más
	// el espacio del carácter nulo.
	destino2 = (char *) malloc(strlen(origen) + 1);
	// Copia origen a destino2
	strcpy(destino2, origen);
	// despliega destino2 en pantalla
	printf("destino2: %s\n", destino2);
	

	// La copia de una cadena sin haber asignado el espacio de destino
	// esta prohibida. Lo siguiente puede causar serios problemas.
	// strcpy(destino3, origen);
	
	// termina el programa
	return 0;
}
