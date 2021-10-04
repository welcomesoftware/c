/**
 * Programa: Uso de apuntadores a tipo void
 * 
 * Autor: Darío Welcome
 * Copyrights (c) 2021
 */

#include <stdio.h>

void half(void *x, char type);

int main() {

    // Inicializa una variable de cada tipo
    int i = 20;
    long l = 100000;
    float f = 12.1416;
    double d = 123.044444;
    
    // Despliega los valores iniciales
    puts("Despliega los valores iniciales");
    puts("---------------------------------------------");
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%f\n", f);
    printf("%lf\n", d);

    puts("");

    // Llama a half para cada variable
    half(&i, 'i');
    half(&l, 'l');
    half(&f, 'f');
    half(&d, 'd');

    // Despliega los nuevos valores
    puts("Despliega los nuevos valores despues de half()");
    puts("---------------------------------------------");
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%f\n", f);
    printf("%lf\n", d);
    
    // Finaliza el programa
    return 0;
}

void half(void *x, char type) {
    
    // Dependiendo del valor de type, asigna el apuntador a x adecuado
    // y divide su contenido entre dos.
    switch (type) {
        case 'i': { *((int *)x) /= 2; break; }
        case 'l': { *((long *)x) /= 2; break; }
        case 'f': { *((float *)x) /= 2; break; }
        case 'd': { *((double *)x) /= 2; break; }
    }
}

