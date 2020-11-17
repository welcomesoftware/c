/**
 * Programa: Entrada de archivos formateada
 *
 * Para la entra da de archivo formateada se utiliza la función de biblioteca fscanf
 * que se usa de manera similar a scanf(). La unica diferencia es que en fscanf se
 * debe especificar el flujo de donde viene la entrada en lugar de stdin. Su prototipo
 * se encuentra en el encabezado <stdio.h>:
 *
 * int fscanf(FILE *archivo, const char *formato, argumentos...);
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on @fecha.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main() {

    // declaracion del archivo
    FILE *archivo;

    // variables
    float f1, f2, f3, f4, f5;

    // verifica que el archivo haya sido abierto correctamente, en caso contrario
    // cierra el programa.
    if ((archivo = fopen("entrada.txt", "r")) == NULL) {
        fprintf(stderr, "Error abriendo archivo...\n");
        exit(1);
    }

    // toma la entrada formateada y la almacena en variables, luego despliega el
    // valor de las variables en pantalla.
    fscanf(archivo, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);
    printf("Los valores son %f, %f, %f, %f, & %f.\n", f1, f2, f3, f4, f5);

    // cierra el archivo
    fclose(archivo);

    // termina el programa
    return 0;
}
