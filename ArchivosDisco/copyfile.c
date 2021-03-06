/**
 * Programa: copyfile.c
 *
 * Utiliza los flujos de datos de C para hacer un programa que hace una copia identica de un archivo
 * con un nombre diferente o con el mismo nombre en una ubicación diferente.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 19/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */


// bibliotecas
#include <stdio.h>

// prototipos
int filecopy(char *oldname, char *newname);

int main() {

    	// variables del programa
    	char origen[80], destino[80];

    	// obtiene los nombres de origen y destino
    	printf("Ingrese el archivo de origen: ");
	scanf("%s", origen);
    	printf("Ingrese el archivo de destino: ");
    	scanf("%s", destino);

    	// valida si se copió el archivo correctamente
    	if (filecopy(origen, destino) == 0)
           	puts("Archivo copiado satisfactoriamente.");
    	else
           	fprintf(stderr, "Error durante la copia del archivo.\n");

    	// termina el programa
    	return 0;
}

/**
 * Función de copiado de archivos
 */
int filecopy(char *oldname, char *newname) {

    	// crea dos archivos y una variable
    	FILE *oldfile, *newfile;
    	int c;

    	// Abre el archivo de origen para lectura en modo binario, si ocurre un error
    	// cierra el programa.
    	if ((oldfile = fopen(oldname, "rb")) == NULL)
           	return -1;

    	// valida si el archivo destino existe o no, si existe pregunta la usuario si sobreescribilo
    	// o si quiere cambiar el nombre del archivo de destino.
    	if ((newfile = fopen(newname, "r"))) {
    	        // cierra el archvivo
		fclose(newfile);

             	char option = 'n';

             	// consulta si se crea un nuevo archivo o se sobreescribe el actual
		puts("El archivo de destino ya existe, desea sobreescribirlo: 's' - si, 'n' - no");
		scanf("%c", &option);
		
		// en caso que se quiera sobreescribir el archivo, solo cierra el ciclo
		// y continua la ejecución fuera del ciclo. En caso contrario pide al usuario 
		// que teclee un nuevo nombre para el archivo de destino.
		switch(option) {
			case 's':
			case 'S':
				break;
			case 'n':
			case 'N':
				printf("Ingrese el nuevo archivo de destino: ");
				scanf("%s", newname);
				break;
		}
        } 
        
	// abre el archivo de destino para escritura en modo binario, si ocurre un error
        // cierra el archivo de origen y el programa.
        if ((newfile = fopen(newname, "wb")) == NULL) {
                fclose(oldfile);
                return -1;
        }
        

    	// lee un byte a la vez del archivo de origen, si no ha llegado al final del archivo
    	// escribre ese byte en el archivo de destino.
    	while(1) {
        	c = fgetc(oldfile);

        	if (!feof(oldfile))
            		fputc(c, newfile);
       		else
            		break;
    	}

    	// cierra ambos archivos
    	fclose(newfile);
    	fclose(oldfile);

    	// retorna un copiado satifactorio
    	return 0;
}
