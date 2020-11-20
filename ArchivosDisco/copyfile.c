/**
 * Programa: copyfile.c
 *
 * Utiliza los flujos de datos de C para hacer un programa que hace una copia identica de un archivo
 * con un nombre diferente o con el mismo nombre en una ubicación diferente.
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
    gets(origen);
    printf("Ingrese el archivo de destino: ");
    gets(destino);

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
