/**
 * Programa: strlower.c
 *
 * Aprovechando los conocimentos adquiriedos en C y otros conocimentos de la red
 * decidí desarrollar mi propia función para convertir los caracteres de una ca-
 * dena de mayúsculas a minúsculas. Haciendo uso de tolower() contenido su prot-
 * otipo en el encabezado <CTYPE.H>
 *
 * Prototipo:
 *  int tolower(int c);
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 08/12/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// Bibliotecas
#include <stdio.h>
#include <ctype.h>

// Prototipo
void strlower(char *str);

// Función Principal
int main() {

    // variables del programa
    char mensaje[] = "CAN I GET THERE BY PLAIN?";

    // despliega el mensaje
    printf("%s\n", mensaje);

    // ejecuta la conversión
    strlower(mensaje);

    // despliega la conversión
    printf("%s\n", mensaje);

    // termina el programa
    return 0;
}

/**
 * La función strlower() recibe una cadena a través de un apuntador, mientras el
 * contenido apuntado es distinto de carácter nulo '\0' continua la ejecución de
 * el ciclo. En la posición apuntada se reemplaza el carácter en mayúsculas por
 * uno en minusculas, luego se incrementa en un la posición apuntada y se repite
 * el proceso hasta que llega al carácter nulo '\0', y cierra el ciclo.
 *
 * @param str apuntador a la cadena de texto.
 */
void strlower(char *str) {
    while (*str != '\0') {
        *str = tolower(*str);
        str++;
    }
}
