/**
 * Programa: feof.c
 *
 * Con un flujo o archivo en modo binario no se puede detectar el fin de archivo revisando por -1, debido
 * a que un byte de datos de un flujo binario puede tener ese valor, lo que daría como resultado un final
 * de la entrada prematuro. En lugar de ello se puede usar la función de biblioteca feof(), que puede ser
 * usada tanto en archivos en modo texto como en modo binario.
 *
 * Prototipo: STDIO.H
 * 	int feof(FILE *archivo);
 *
 * La función feof() retorna 0 si no ha llegado al final del archivo o diferente de 0 cuando se ha llegado
 * al final del archivo. Si una llamada a feof() detecta el fin de archivo, no se permiten más operaciones
 * de lectura mientras no se haya dado una llamada a rewind(), o a fseek() o se haya cerrado y vuelto a
 * abrir el archivo.
 *
 * Este progrma pide al usuario que ingrese el nombre de cualquier archivo de texto, el programa leerá cada
 * linea del archivo y las desplegará en pantalla hasta que la función feof() haya detectado el final del
 * archivo.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 19/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */


#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 100

int main() {

	// variables del programa
	char buffer[BUFFSIZE];
	char filename[30];
	FILE *archivo;

	// pide al usuario en nombre del archivo y lo guarda en una variable
	puts("Ingrese el nombre del archivo a desplegar en pantalla.");
	gets(filename);

	// abre el archivo en modo lectura y valida errores
	if((archivo = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "Error reading file...\n");
		exit(1);
	}

	// si no ha llegado al final del archivo lee una linea y la despliega en pantalla
	while(!feof(archivo)) {
		fgets(buffer, BUFFSIZE, archivo);
		printf("%s", buffer);
	}

	// cierra el archivo
	fclose(archivo);

	// termina el programa
	return 0;
}
