/**
 * Programa: ftell_rewind.c
 *
 * Para ajustar el indicador de posición al inicion del archivo, utilice la función de biblioteca
 * rewind(). Su prototipo está en el encabezado STDIO.H
 *
 * void rewind(FILE *fp);
 *
 * Para determinar el valor del inidicador de posición del archivo use ftell(). El prototipo de está
 * función está en el encabezado STDIO.H
 *
 * long ftell(FILE *fp);
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 16/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

// defines
#define BUFFLEN 6

// globales
char msg[] = "abcdefghijklmnñopqrstuvwxyz";

int main() {

    // declara un archivo y un buffer con su respectivo tamaño
    FILE *archivo;
    char buffer[BUFFLEN];

    // abre el archivo para escritura y verifica si hubo error
    if ((archivo = fopen("text.txt", "w")) == NULL) {
        fprintf(stderr, "Error opening file..\n");
        exit(1);
    }

    // envia la salida al archivo y verifica si hay error
    if (fputs(msg, archivo) == EOF) {
        fprintf(stderr, "Error writing file..\n");
        exit(1);
    }

    // cierra el archivo
    fclose(archivo);

    // abre el archivo para lectura
    if ((archivo = fopen("text.txt", "r")) == NULL) {
        fprintf(stderr, "Error opening file..\n");
        exit(1);
    }
    printf("Inmediatamente despues de abrir el archivo, el indicador esta en la posición = %ld\n", ftell(archivo));

    // lee cinco caracteres del archivo
    fgets(buffer, BUFFLEN, archivo);
    printf("Despues de leer en %s, el indicador esta en la posición = %ld\n", buffer, ftell(archivo));

    // lee cinco caracteres más
    fgets(buffer, BUFFLEN, archivo);
    printf("Despues de leer 5 caracteres más en %s, el indicador esta en la posición = %ld\n", buffer, ftell(archivo));

    // regresa el indicador a la posición de inicio el flujo o archivo
    rewind(archivo);
    printf("Despues de retornar, el inidicador está de vuelta en la posición = %ld\n", ftell(archivo));

    // lee cinco caracteres
    fgets(buffer, BUFFLEN, archivo);
    printf("ahora la lectura de archivo comienza desde el princio de nuevo: %s\n", buffer);

    // cierra el archivo
    fclose(archivo);

    // termina el programa
    return 0;
}
