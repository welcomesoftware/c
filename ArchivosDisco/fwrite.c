/**
 * Programa: fwrite.c
 *
 * Esta función está pensada para trabajar con registros de longitud constante y
 * forma pareja con fread(). Es capaz de escribir hacia un archivo, uno o varios
 * registros de la misma longitud almacenados a partir de una dirección de memo-
 * ria determinada. El valor de retorno es la cantidad de registros escritos, no
 * el numero de bytes por registro.
 *
 * Prototipo: 
 *  size_t fwrite(void *buffer, int size, int count, FILE *archivo);
 *
 * Los parámetros son: un apuntador a la zona de memoria de donde se obtendrán
 * los datos a escribir, el tamaño en bytes de cada registro que se escribira en
 * el archivo, la cantidad de registros a escribir y un apuntador al archivo en
 * el que se escribirán los registros o datos.
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
    FILE *archivo = fopen("archivo.dat", "wb");

    // manejo de errores
    if (buffer == NULL) {
        puts("Error reservando la memoria...!");
        fclose(archivo);
        exit(1);
    }
    else if (archivo == NULL) {
        puts("Error abriendo el archivo...!");
        free(buffer);
        exit(1);
    }

    // pide entrada de datos por teclado y los almacena en el buffer
    puts("Ingrese una linea de texto: ");
    gets(buffer);

    // escribe los datos del buffer en el archivo
    fwrite(buffer, sizeof(char), strlen(buffer), archivo);

    // cierra el archivo
    fclose(archivo);
    // libera la memoria
    free(buffer);

    // termina el programa
    return 0;
}
