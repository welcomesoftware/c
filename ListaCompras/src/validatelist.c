#ifndef _STDIO_H
#define _STDIO_H 

// incluye stdio.h
#include <stdio.h>

#endif /* _STDIO_H */


int validatelist(char *listname) {
    // variables del la función
    FILE *archivo = fopen(listname, "r");

    // manejo de errores
    if (archivo == NULL) {
        return NULL;
    }

    // retorna 1 si tuvo exito.
    return 1;
}
