/**
 * Programa: goto.c
 *
 * El enunciado goto es uno de los enunciados de salto condicional o ramificación
 * de C. Cuando la ejecución del programa llega a un enunciado goto, la ejecución
 * salta inmediatamente o se ramifica a la posición especificada por el enunciado
 * goto.
 *
 * El enunciado es incondicional, debido a que la ejecución siempre se ramifica
 * cuando encuentra un enunciado goto. La ramificación no depende de ninguna
 * condición del programa como sucede en los enunciados if().
 *
 * Sintaxis: goto destino;
 *
 * destino es un enunciado de etiqueta, que identifica la posición del programa a
 * la que debe saltar o ramificar la ejecución. Un enunciado de etiqueta consiste
 * en un identificador seguido por dos puntos y un enunciado.
 *
 * Ejemplo: etiqueta1: un enunciado C;
 *
 * Si quiere que la etiqueta este sola en una linea, se puede poner un enunciado
 * nulo (;) acontinuacón de la etiqueta.
 *
 * Ejemplo: etiqueta2: ;
 *
 * Created by Darío Welcome <welcomedario9@gmail.com> on 03/11/20.
 * Copyright © 2020 Darío Welcome. All rights reserved.
 */
#include <stdio.h>

int main() {

    // variables
    int n;

    // etiqueta con enunciado nulo.
    start: ;

    puts("Digite un numero entre 0 & 10: ");
    scanf("%d", &n);

    if (n < 0 || n > 10)
        goto start;
    else if (n == 0)
        goto location0;
    else if (n == 1)
        goto location1;
    else
        goto location2;

    location0: ;
        puts("Digitaste 0");
        goto end;

    location1: ;
        puts("Digitaste 1");
        goto end;

    location2: ;
        puts("Digitaste algo entre 2 & 10");

    end: ;

    // termina el programa
    return 0;
}
