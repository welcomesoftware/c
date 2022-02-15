/**
 * Programa: fwrite_fread.c
 *
 * E/S directa de archivo con fread() & fwrite()
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 16/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

// macros
#define SIZE 20

int main() {

    // variables
    int count;
    int array1[SIZE], array2[SIZE];

    // declaracion de archivo
    FILE *archivo;

    // inicializa el arreglo
    for (count = 0; count < SIZE; count++) {
        array1[count] = count * 2;
    }

    // abre el archivo en modo binario
    if ((archivo = fopen("direct.txt", "wb")) == NULL) {
        fprintf(stderr, "Error opening file..\n");
        exit(1);
    }

    // guarda array1[] en el archivo
    if (fwrite(array1, sizeof(int), SIZE, archivo) != SIZE) {
        fprintf(stderr, "Error writing file..\n");
        exit(1);
    }

    // cierra el archivo
    fclose(archivo);

    // ahora abre el mismo archivo para lectura en modo binario
    if ((archivo = fopen("direct.txt", "rb")) == NULL) {
        fprintf(stderr, "Error opening file..\n");
        exit(1);
    }

    // lee los datos del archivo y los guarda en array2[]
    if (fread(array2, sizeof(int), SIZE, archivo) != SIZE) {
        fprintf(stderr, "Error reading file..\n");
        exit(1);
    }

    // cierra el archivo
    fclose(archivo);

    // despliega ambos arreglos para mostrar que son iguales
    for (count = 0; count < SIZE; count++) {
        printf("%d\t%d\n", array1[count], array2[count]);
    }

    // termina el programa
    return 0;
}
