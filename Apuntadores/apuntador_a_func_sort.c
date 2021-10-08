/**
 * Programa: Uso de apuntadores a función para controlar el ordenamiento
 *
 * Recibe una lista de cadenas desde el teclado, las ordena en forma
 * ascendente o descendente y luego las despliega en pantalla.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 12/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES 25

// prototipos
int getlines(char *lines[]);
void sort(char *lines[], int n, int sorttype);
void printstrings(char *p[], int n);
int alpha(char *p1, char *p2);
int reverse(char *p1, char *p2);

// variables globales
char *lines[MAXLINES];

int main() {

    // variables
    int numberlines;
    int sorttype;

    // lee las lineas desde el teclado
    numberlines = getlines(lines);

    if (numberlines < 0) {
        puts("Memory Allocation Error.");
        return -1;
    }

    printf("Digite 0 para orden inverso, 1 para orden alfabetico: ");
    scanf("%d", &sorttype);

    sort(lines, numberlines, sorttype);
    printstrings(lines, numberlines);

    // termina el programa
    return 0;
}

// getlines
int getlines(char *lines[]) {
    int n = 0;
    char buffer[80];    // Almacenamiento temporal para cada linea.

    puts("Ingrese una linea de texto a la vez, y una linea en blanco para finalizar.");

    while (n < MAXLINES && gets(buffer) != 0 && buffer[0] != '\0') {
        if ((lines[n] = (char *) malloc(strlen(buffer) + 1)) == NULL)
            return -1;
        strcpy(lines[n++], buffer);
    }

    return n;
}
// end of getlines

// sort
void sort(char *p[], int n, int sorttype) {

    // variables
    int a, b;
    char *x;

    // apuntador a funcion
    int (*compare)(char *s1, char *s2);

    // asigna el valor inicial para que apunte a la función de comparación adecuada
    // dependiendo del argumento sorttype.
    compare = (sorttype) ? reverse : alpha;

    for (size_t a = 1; a < n; a++) {
        for (size_t b = 0; b < n-1; b++) {
            if (compare(p[b], p[b+1]) > 0) {
                x = p[b];
                p[b] = p[b+1];
                p[b+1] = x;
            }
        }
    }
}
// end of sort

void printstrings(char *p[], int n) {
    for (size_t i = 0; i < n; i++) {
        printf("%s\n", p[i]);
    }
}

int alpha(char *p1, char *p2) {
    // comparación alfabetica
    return (strcmp(p2, p1));
}

int reverse(char *p1, char *p2) {
    // comparación alfabetica inversa
    return (strcmp(p1, p2));
}
