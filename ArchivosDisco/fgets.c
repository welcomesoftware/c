/**
 * Programa: fgets.c
 *
 * Esta función está diseñada para leer cadenas de caracteres. Leerá hasta n-1
 * caracteres o hasta que lea un salto de linea '\n', o hasta que lea el final
 * de archivo, en este último caso, el carácter de salto de linea '\n' también
 * es leido.
 *
 * Prototipo: char *fgets(char *str, int n, FILE *fp);
 *
 * str es un apuntador a un espacio de memoria tipo char para almacenar cadenas
 * El segundo parámetro es el tamaño limite de caracteres a almacenar en str por
 * la función fgets(). El ultimo parámetro es un apuntador al archivo de donde
 * provendrán los datos que serán almacenados en el espacio str.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 30/11/12.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

// función principal
int main() {

    // variables del programa
    FILE *archivo = fopen("text.txt", "r");
    char *caracteres = (char *) malloc(100 * sizeof(char));

    // manejo de errores
    if (archivo == NULL) {
        puts("Error abriendo el archivo...");
        // libera la memoria asignada
        free(caracteres);
        exit(1);
    } else if (caracteres == NULL) {
        puts("Error asignando memoria...");
        // cierra el archivo
        fclose(archivo);
        exit(1);
    }

    // despliega el contenido del archivo en pantalla
    puts("El contenido del archivo text.txt es:");

    while (feof(archivo) == 0) {
        fgets(caracteres, 100, archivo);
        printf("%s", caracteres);
    }

    // libera la memoria
    free(caracteres);
    // cierra el archivo
    fclose(archivo);

    // termina el programa
    return 0;
}
