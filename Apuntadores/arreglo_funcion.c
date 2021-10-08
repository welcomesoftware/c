/**
 * Paso de arreglos a funciones:
 * la unica forma es que se puede pasar un arreglo como argumento a una funcion
 * es a traves de un apuntador.
 *
 * Utilizando la notacion de apuntador se puede acceder a los elementos de un
 * arreglo.
 */

#include <stdio.h>
#define MAX 10

int largest(int x[], int y);

int array[MAX];

int main() {
    /* Recorre el array llenandolo con entradas por teclado */
    for(int i = 0; i < MAX; i++) {
        printf("Digite un valor numerico: ");
        scanf("%d", &array[i]);
    }

    /* LLama a la funcion e imprime su retorno */
    printf("El valor mas alto es = %d\n", largest(array, MAX));

    /* Termina el programa */
    return 0;
}

/**
 * Esta funcion toma como parametro un arreglo y un entero, luego
 * regresa el valor mas alto almacendado dentro de un arreglo.
 */
int largest(int array[], int size) {

    int biggest = -12000;

    for (int i = 0; i < size; i++) {
        if(array[i] > biggest)
            biggest = array[i];
    }
    return biggest;
}

/**
 * Esta funcion es el equivalente a la anterios solo que usando
 * la notacion de apuntador.
 */
int largest_v2(int *array, int size) {

    int biggest = -12000;

    for (int i = 0; i < size; i++) {
        if(*(array + i) > biggest)      /* *(array + i) == array[i] */
            biggest = *(array + i);
    }
}
