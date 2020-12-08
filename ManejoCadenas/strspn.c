/**
 * Programa: strspn.c
 *
 * Esta función está relacionada con la anterior, revisa a str1, comparándolo
 * carácter por carácter con los caracteres que están contenidos en str2. Retor-
 * na la posición del primer carácter de str1 que no concuerde con un carácter
 * de str2. En otras palabra strspn() retorna la longitud del segmento inicial
 * de str1 que consiste por completo en los caracteres que se encuentran en str2
 *
 * Prototipo:
 *  size_t strspn(char *str1, char *str2);
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 07/12/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// Bibliotecas
#include <stdio.h>
#include <string.h>

/**
 * Función Principal
 * @return 0
 */
int main() {

    // variables del programa
    char buf1[80], buf2[80];
    size_t loc;

    // recibe las cadenas
    printf("Enter the string to be searched: ");
    gets(buf1);

    printf("Enter the string containig the target characters: ");
    gets(buf2);

    // Ejecuta la busqueda
    loc = strspn(buf1, buf2);

    if (loc == NULL) {
        puts("No match found.");
    } else {
        printf("characters match up at position %ld", loc-1);
    }

    // termina el programa
    return 0;
}
