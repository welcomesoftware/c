/**
 * Programa: rename.c
 *
 * La función rename() cambia el nombre de una archivo de disco existente. El prototipo
 * se encuentra en la función de encabezado STDIO.H
 *
 * int rename(const char *oldname, const char *newname);
 *
 * La función rename retorna 0 en caso satifactorio o -1 en caso de que haya sucedido 
 * algún tipo de error:
 * 	El archivo *nombreanterior no existe.
 * 	Ya existe un archivo con *nombrenuevo.
 * 	Se trata de renombrar a otra unidad de disco.
 * 
 * Este programa hace uso de rename para el nombre de un archivo.
 */

#include <stdio.h>

int main() {
    
    // variables del programa
    char oldname[80], newname[80];

    // entrada de datos por teclado
    printf("Ingrese el nombre del archivo: ");
    gets(oldname);
    printf("Ingrese el nuevo nombre para el archivo: ");
    gets(newname);

    // valida la funcion rename
    if (rename(oldname, newname) == 0) 
	printf("El archivo %s ha sido renombrado como %s.\n", oldname, newname);
    else
	fprintf(stderr, "Error renombrando el archivo %s...\n", oldname);

    // termina el programa
    return 0;
}
