/**
 * Programa: Paso por valor y paso por referencia
 * Tema: Funciones avanzadas
 *
 * Autor: Darío Welcome,
 * Copyrigths (c) 2021
 */

#include <stdio.h>

// prototipos
void por_valor(int a, int b, int c);
void por_referencia(int *a, int *b, int *c);

int main()
{
    // definición de variables
    int x = 2;
    int y = 4;
    int z = 6;

    printf("Antes de llamar por_valor(), x = %d, y = %d, z = %d.\n", x, y, z);

    // proceso por valor
    por_valor(x, y, z);

    printf("Despues de llamar por_valor(), x = %d, y = %d, z = %d.\n", x, y, z);

    // proceso por referencia
    por_referencia(&x, &y, &z);

    printf("Despues de llamar por_referencia(), x = %d, y = %d, z = %d.\n", x, y, z);
    
}

// por valor
void por_valor(int a, int b, int c)
{
    a = 0;
    b = 0;
    c = 0;
}

// por referencia
void por_referencia(int *a, int *b, int *c)
{
    *a = 0;
    *b = 0;
    *c = 0;
}
