/**
 * Promedio.c
 * Programa que pide 10 notas escolares y luego calcula
 * calcula el promedio del alumno en base a sus nota.
 */

// Bibliotecas
#include <stdio.h>

#define NOTA_MAX    100
#define NOTA_QTY    10

int notas[NOTA_QTY];
int promedio = 0;
int total = 0;

int main() {

    for (int i = 0; i < NOTA_QTY; i++) {

        printf("Digite la nota #%i: ", i+1);
        scanf("%d", &notas[i]);

        while (notas[i] > NOTA_MAX) {
            printf("La nota mas alta posible es %d\n", NOTA_MAX);
            printf("Porfavor corrija la nota:  ");
            scanf("%d", &notas[i]);
        }

        total += notas[i];
    }

    promedio = total / NOTA_QTY;

    printf("El promedio del alumno es %d\n", promedio);

    return 0;
}
