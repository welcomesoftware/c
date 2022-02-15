/**
 * Programa: Apertura de un archivo de disco
 *
 * El proceso de creación de un un flujo aociado a un archivo de disco
 * es llamado Apertura del archivo. Cuando se abre un archivo queda disponible
 * para lectura: (Significa que se pueden recibir datos del archivo hacia el Programa),
 * para escritura: (Significa que puede guardar en el archivo datos del Programa).
 * o para ambas cosas. Cuando se ha terminado de usar el archivo se le debe cerrar.
 *
 * Para abrir un archivo se debe usar la funcion de biblioteca fopen(). El prototipo
 * de fopen() esta en <stdio.h>
 *
 * Sintaxis: FILE *fopen(const char *filename, const char *mode);
 * Modos:
 *  r: read
 *  r+: read / write
 *  rb: read binary
 *  rb+: read / write binary
 *
 *  w: write
 *  w+: read / write
 *  wb: write binary
 *  wb+: read / write binary
 *
 *  a: append
 *  a+: read / append
 *  ab: append binary
 *  ab+: read /append binary
 *
 * Nota: Cada vez que se use fopen() se debe corroborar que no existe ningún error,
 * desplegando un mensaje al usuario y tratar de volver a abrir el archivo o dar por
 * terminada la ejecución del Programa.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 13/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

int main() {

    // crea el archivo
    FILE * fp;

    // variables para el nombre y el modo del archivo
    char filename[40];
    char mode[4];
    char option;

    while (1) {
        // recibe el nombre de archivo y modo desde teclado
        printf("Ingrese el nombre del archivo: ");
        fgets(filename, 40, stdin);
        printf("Ingrese el modo de archivo: ");
        fgets(mode, 4, stdin);

        // trata de abrir el archivo
        if ((fp = fopen(filename, mode)) != NULL) {
            printf("Apertura exitosa %s en modo %s\n", filename, mode);
            fclose(fp);
            puts("Ingresa x para salir, cualquier otra para continuar.");
            if((option = getchar()) == 'x')
                break;
            else
                continue;
        } else {
            fprintf(stderr, "Error abriendo el archivo %s en modo %s\n", filename, mode);
            puts("Ingresa x para salir, cualquier otra para continuar.");
            if((option = getchar()) == 'x')
                break;
            else
                continue;
        }
    }

    // termina el programa
    return 0;
}
