/**
 * Programa: salida_formateada.c
 *
 * La salida formateada a archivos se logra con la función de biblioteca fprintf().
 * el prototipo se encuentra en el encabezado <stdio.h>:
 *
 * int fprintf(FILE *archivo, const char *formato, argumentos...);
 *
 * fprintf() funciona igual a printf(), la unica diferencia es que fprintf() envia
 * su salida a un flujo especificado.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 16/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

// prototipos
void limpiarstdin();


int main() {

    // declara el archivo
    FILE *archivo;

    // variables
    float data[5];
    char *filename;
    int count = 5;
    int i;

    // valida si fue asignada la memoria para el nombre del archivo. Si no se puede asignar
    // la memoria genera un error por pantalla y cierra el programa.
    if ((filename = (char *) malloc(35 * sizeof(char))) == NULL) {
        puts("Memory allocation error...");
        exit(1);
    }

    puts("Digite 5 numeros con punto decimal: ");
    for (i = 0; i < count; i++) {
        scanf("%f", &data[i]);
    }

    // obtiene el nombre del archivo y luego abre el archivo, aunque primero limpia
    // a stdin de cualquier carácter adicional.
    limpiarstdin();

    puts("Digite el nombre del archivo: ");
    fgets(filename, 20, stdin);

    if ((archivo = fopen(filename, "w")) == NULL) {
        fprintf(stderr, "Error abriendo archivo %s\n", filename);
        exit(1);
    }

    // escribe los datos numericos al archivo y a stdout. Luego cierra el archivo.
    for (i = 0; i < count; i++) {
        fprintf(archivo, "data[%d] = %f\n", i, data[i]);
        fprintf(stdout, "data[%d] = %f\n", i, data[i]);
    }
    fclose(archivo);

    // termina el programa
    return 0;
}

/**
 * Limpia a stdin de cualquier caracter adicional.
 */
void limpiarstdin() {
    char basura[80];
    fgets(basura, 80, stdin);
}
