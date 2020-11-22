/**
 * Programa: tmp.c
 *
 * Algunos programas utilizan uno o más archivos temporales durante la ejecución del programa.
 * Un archivo temporal es un archivo que es abierto por el programa, usado para algún objeto
 * durante la ejecución y luego borrado antes de que el programa termine. Cuando se crea un
 * archivo temporal no importa cuál sea su nombre, debido a que va a ser borrado. La biblioteca
 * estándar del C incluye una función, mkstemp(), que crea un nombre de archivo válido que no
 * entre en conflicto con ningún archivo existente. Su prototipo se encuentra en el encabezado
 * STDIO.H
 * 
 * char *mkstemp(char *string);
 *
 * El argumento string debe ser un apuntador a un buffer lo suficientemente grande para que 
 * quepa el nombre del archivo. También se le puede pasar un apuntador nulo (NULL), en cuyo
 * caso el nombre temporal es guardado en un buffer interno a mkstemp() y la función regresa
 * un apuntador a ese buffer.
 *
 * Este programa muestra ambos métodos de uso de mkstempe() para crear nombres de archivos
 * temporales.
 *
 * Autor: Darío Welcome
 * Email: <welcomedario9@gmail.com>
 * Fecha: 22/11/20
 */

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main() {

	// variables del programa
	char buffer[20];
	// char *cadena = NULL;

	// obtiene un nombre temporal en el buffer definido
	// mkstemp() es un función más segura que tmpnam(), es más recomendable usar mkstemp().
	mkstemp(buffer);

	// Obtiene otro nombre temporal pero esta vez en el buffer
	// interno de la función.
	// cadena = tmpnam(NULL);
	// mkstemp(cadena);

	// despliega los nombres en pantalla
	printf("Nombre temporal 1: %s\n", buffer);
	// printf("Nombre temporal 2: %s", cadena);

	// termina el programa
	return 0;
}
