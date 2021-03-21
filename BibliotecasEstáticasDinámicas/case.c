/**
 * Programa: case.c
 *
 * Este archivo contiene el código fuente de las funciones de la biblioteca per-
 * sonal <CASE> para la conversion de cadenas de texto entre mayúsculas y minús-
 * culas. Contine el código de la función strupper() & strlower().
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 08/12/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// Includes
#include <ctype.h>

/**
 * La función strupper() recibe una cadena a través de un apuntador, mientras el
 * contenido apuntado es distinto de carácter nulo '\0' continua la ejecución de
 * el ciclo. En la posición apuntada se reemplaza el carácter en minúsculas por
 * uno en mayúsculas, luego se incrementa en un la posición apuntada y se repite
 * el proceso hasta que llega al carácter nulo '\0', y cierra el ciclo.
 *
 * @param str apuntador a la cadena de texto.
 */
void strupper(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
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
