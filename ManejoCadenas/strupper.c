/**
 * Programa: strupper.c
 *
 * Aprovechando los conocimentos adquiriedos en C y otros conocimentos de la red
 * decidí desarrollar mi propia función para convertir los caracteres de una ca-
 * dena de minúsculas a mayusculas. Haciendo uso de toupper() contenido su prot-
 * otipo en el encabezado <CTYPE.H>
 *
 * Prototipo:
 *  int toupper(int c);
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 08/12/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// Bibliotecas
#include <stdio.h>
#include <ctype.h>

// Prototipos
void strupper(char *str);

// Función Principal
int main() {

    // variables del programa
    char mensaje[] = {"esta es mi cadena de texto."};

    // despliega el mensaje
    printf("%s\n", mensaje);

    // ejecuta la conversión
    strupper(mensaje);
    // despliega el mensaje
    printf("%s\n", mensaje);

    // termina el programa
    return 0;
}

/**
 * strupper() va carácter por caracter reemplazandolo de minúscula por mayúscula
 * hasta que llega al carácter nulo '\0'. Cuando llega al caracter nulo termina
 * el la ejecución de la función.
 *
 * @param str es un apuntador a la cadena de texto que covertiremos.
 */
void strupper(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}
