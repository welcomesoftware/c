/**
 * Algoritmo de ordenamiento por selección
 */

#include <stdio.h>

void ordenamiento(int *array, int size);
void desplegar(int *array, int size);

int main() {
    // variables
    int minimo = 0;
    int array[5] = {1000, 23, 87, 1, 92};

    // arreglo original
    desplegar(array, 5);
    // ordenamiento
    ordenamiento(array, 5);
    // arreglo ordenado
    desplegar(array, 5);
    
    // fin del programa
    return 0;
}

void ordenamiento(int *array, int size) {
    int minimo = 0;
    
    for(int i = 0; i < 5-1; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(array[i] > array[j]) {
                minimo = array[j];
                array[j] = array[i];
                array[i] = minimo;
            }
        }
    }
}

void desplegar(int *array, int size) {
    for(int i = 0; i < 5; i++) {
        printf("[%d]", array[i]);
    }
    puts("");
}
