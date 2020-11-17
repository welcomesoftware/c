/**
 * Programa: Sort Textlines
 *
 * Recibe una lista de cadenas de texto desde el teclado, las ordena
 * y luego las imprime en pantalla.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 06/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constantes
#define MAXLINES 25

// Prototipos
int getLines(char *lines[]);
void sort(char *lines[], int n);
void printStrings(char *lines[], int n);

// Variables Globales
char *lines[MAXLINES];


// Funcion Principal
int main() {

    // Variables Locales
    int numLines;

    // Lee las lineas desde el teclado
    numLines = getLines(lines);

    if (numLines < 0) {
        puts("Memory allocation error...!");
        exit(-1);
    }

    // Ordena las lineas de texto
    sort(lines, numLines);

    // Imprime las lineas de texto en pantalla
    printStrings(lines, numLines);

    // termina el programa
    return 0;
}


// Funciones
int getLines(char *lines[]) {
    // Variables
    int num = 0;

    // Almacenamiento temporal para cada linea
    char buffer[80];

    puts("Enter one line at time; enter a blank when done.");

    /**
     * Este ciclo ejecutara mientras num < MAXLINES, & mientras buffer != 0 &
     * buffer[0] != '\0' fin del texto.
     *
     * Si no se logra reservar memoria para lines[num], termina el programa. En caso
     * contrario, copia el buffer en lines[num++];
     */
    while ((num < MAXLINES) && (gets(buffer) != 0) && (buffer[0] != '\0')) {
        if ((lines[num] = (char *)malloc(strlen(buffer) + 1)) == NULL) {
            exit(-1);
        }
        strcpy(lines[num++], buffer);
    }
    return num;
}

void sort(char *lines[], int n) {
    char *x;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (strcmp(lines[j], lines[j+1]) > 0) {
                x = lines[j];
                lines[j] = lines[j+1];
                lines[j+1] = x;
            }
        }
    }
}

void printStrings(char *lines[], int n) {
    for (size_t i = 0; i < n; i++) {
        printf("%s\n", lines[i]);
    }
}
