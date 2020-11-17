/**
 * Programa: Leer archivo
 *
 * Lectura de datos en el archivo.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 13/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>
#define BUFFERSIZE 80

int main() {

    // crea el archivo
    FILE *archivo;

    // variables nombre de archivo y buffer de almacenamiento temporarl
    char filename[40];
    char buffer[BUFFERSIZE];
    char option;

    while (1) {
        // pide la entrada del nombre de archivo por teclado
        puts("Ingrese el nombre del archivo a abrir:");
        fgets(filename, BUFFERSIZE, stdin);

        // valida que no haya errores en la Apertura del archivo
        if ((archivo = fopen(filename, "r")) != NULL) {

            // toma como flujo de entrada en buffer el contenido proveniente del archivo
            // y lo almacena en el buffer para poder utilizar este contenido en el Programa.
            fgets(buffer, BUFFERSIZE, archivo);

            // despliega en pantalla, el contenido del archivo en el buffer
            puts(buffer);

            // cierra el archivo
            fclose(archivo);

            puts("Pulse x para salir o cualquier otra tecla para abrir otro archivo.");
            if ((option = getchar()) != 'x') {
                return 0;
            } else {
                continue;
            }
        } else {
            // despliega un mensaje de error y da la opcion de salir o contiuar.
            puts("Error al abrir el archivo!!!");
            puts("Pulse x para salir & cualquier otra tecla para abrir otro archivo.");
            if ((option = getchar()) == 'x') {
                break;
            } else {
                continue;
            }
        }
    }


    // termina el programa
    return 0;
}
