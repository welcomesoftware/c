/**
 * Uniones:
 * son similares a las estructuras. Una union es declarada y usada de la misma
 * que una estructura. Lo que diferencia las uniones de las estructuras es que
 * en un momento dado, solo puede ser usado uno solo de sus miembros, debido a
 * que todos comparten la misma area en memoria. Estan puestos uno sobre otro.
 *
 * A diferencia de una estructura que podria contener varios valores, la union
 * solo puede contener un valor a la vez.
 */
#include <stdio.h>

// declaracion e inicializacion de una union
union compartida {
    char c;
    int i;
};

/**
 * La union puede ser inicializada en su declaracion. Solamente un miembro puede
 * ser inicializado. Para evitar confusiones, solamente el primer miembro puede
 * ser inicializado.
 */
union compartida variable_generica = {'@'};

// Ejemplo de uso erroneo de una union, uso de mas de un miembro a la vez.
int main() {

    union etiqueta_compartida {
        char c;
        int i;
        long l;
        float f;
        double d;
    } etiqueta;

    etiqueta.c = '$';

    printf("char c   = %c\n", etiqueta.c);
    printf("int i    = %i\n", etiqueta.i);
    printf("long l   = %ld\n", etiqueta.l);
    printf("float f  = %f\n", etiqueta.f);
    printf("double d = %lf\n", etiqueta.d);

    etiqueta.d = 123456789.123;

    printf("char c   = %c\n", etiqueta.c);
    printf("int i    = %i\n", etiqueta.i);
    printf("long l   = %ld\n", etiqueta.l);
    printf("float f  = %f\n", etiqueta.f);
    printf("double d = %lf\n", etiqueta.d);

    // termina el programa
    return 0;
}
