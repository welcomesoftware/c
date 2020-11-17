/**
 * Programa: static.c
 *
 * Las variables locales son automáticas por omisión. Esto significa que las
 * variables locales son creadas nuevas cada vez que es llamada la función, y
 * son destruidas cuando la ejecución sale de la función.
 *
 * Para que una variable local mantenga su valor entre llamadas a una función
 * debe ser definida como estatica con la palabra clave static.
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 02/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

void funcion();

int main() {

    int count;

    for (count = 0; count < 20; count++) {
        printf("En la iteracion %d:\t", count);
        funcion();
    }

    // termina el programa
    return 0;
}

/**
 * Una variable estatica es inicializada solamente la primera vez que la
 * función es llamada. En llamadas posteriores el programa recuerda que la
 * variable ya ha sido inicializada y no la vuelve a inicializar. En vez de
 * ello la variable guarda el valor que tenia cuando la ejecución salio de
 * la función.
 *
 * Por el contrario la varible automática es destruida e inicializada al valor
 * especificado cada vez que la función es llamada.
 */
void funcion() {
    // variable estática
    static int x = 0;
    // variable automática
    int y = 0;
    printf("x = %i\t\ty = %i\n", x++, y++);
}
