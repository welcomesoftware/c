/**
 * Programa: strcspn.c
 *
 * La función de biblioteca strcspn() busca en una cadena la primera aparición
 * de cualquiera de los caracteres que se encuentran en la segunda cadena.
 *
 * Prototipo:
 *  size_t strcspn(char *str1, char *str2);
 *
 * La función strcspn() comienza la búsqueda en el primer carácter de str1, rev-
 * isando para ver si encuentra alguno de los caracteres contenidos en str2. Si
 * lo encuentra regresa el desplazamiento, a partir del inicio de str1, donde se
 * halla el carácter encontrado. Si no encuentra nada, strcspn() retorna el val-
 * or de la longitud de str1, obtenido mediante strlen(str1). Esto indica que lo
 * primero que encontró fue el carácter nulo final de la cadena.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 07/12/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */

// Bibliotecas
#include <stdio.h>
#include <string.h>

// Función Principal
int main()
{
    // variables del programa
    char buff1[80], buff2[80];
    size_t loc;

    // recibe las cadenas
    puts("Enter the string to be searched:");
    gets(buff1);
    puts("Enter the string contain target characters:");
    gets(buff2);

    // ejecuta la búsqueda
    loc = strcspn(buff1, buff2);

    if (loc == strlen(buff1)) {
        puts("No match was found");
    } else {
        printf("The first match was found at position %ld.\n", loc);
    }

    // termina el programa
    return 0;
}
