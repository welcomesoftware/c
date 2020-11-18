/**
 * fseek.c
 *
 * se utiliza esta función para tener un control más preciso sobre el indicador de posición
 * de un flujo. Usando la función de biblioteca fseek() se puede poner el indicador de pos-
 * ición en cualquier lugar del archivo. Su prototipo está en el encabezado STDIO.H
 *
 * prototipo: int fseek(FILE *archivo, long desplazamiento, int origen);
 *
 * pueden haber tres valores para origen, con las constantes simbólicas definidas STDIO.H
 *
 * constantes:
 * 
 * 	constante	valor	significado
 *	=================================================================================
 * 	SEEK_SET	0	Mueve el indicador a un numero de bytes de desplazamiento
 * 				desde el inicio del archivo.
 *
 * 	SEEK_CUR	1	Mueve el indicador a un numero de bytes de desplazamiento
 * 				desde su pocicion actual.
 *
 * 	SEEK_END	2	Mueve el indicador a un numero de bytes de desplazamiento
 * 				desde el final del archivo.
 * 
 * la función fseek() retorna 0 si el indicador fue movido satisfactoriamente, o diferente
 * de 0 si sucedió algún error.
 *
 * este programa usa fseek() para acceso al azar de una archivo.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main() {

	// variables
	FILE *archivo;
	int data, count, array[MAX];
	long offset;

	// inicializa el arreglo
	for(count = 0; count < MAX; count++)
		array[count] = count * 10;

	// abre un archivo binario para escritura
	if((archivo = fopen("random.dat", "wb")) == NULL) {
		fprintf(stderr, "Error opening file...\n");
		exit(1);
	}

	// escribe el arreglo al archivo y luego lo cierra
	if(fwrite(array, sizeof(int), MAX, archivo) != MAX) {
		fprintf(stderr, "Error writing file...\n");
		exit(1);
	}
	fclose(archivo);

	// abre el archivo para lectura
	if((archivo = fopen("random.dat", "rb")) == NULL) {
		fprintf(stderr, "Error reading file...\n");
		exit(1);
	}

	// el programa le pide al usuario que elemento quiere leer, recibe el
	// elemento y lo despliega en pantalla, termina cuando se teclea -1.
	while(1) {
		printf("Ingrese el elemento al leer 0-%d, -1 para salir: ", MAX - 1);
		scanf("%ld", &offset);

		if (offset < 0)
			break;
		else if (offset > MAX - 1)
			continue;

		// mueve el indicador de posición al elemento especificado
		if((fseek(archivo, (offset * sizeof(int)), SEEK_SET)) != NULL) {
			fprintf(stderr, "Error using fseek...\n");
			exit(1);
		}

		// lee un solo entero y luego lo despliega en pantalla
		fread(&data, sizeof(int), 1, archivo);
		printf("Elemento %ld tiene el valor %d.\n", offset, data);

	}
	fclose(archivo);
	
	//termina el programa
	return 0;
}
