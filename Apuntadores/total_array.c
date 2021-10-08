/**
 * total_array:
 * funcion que acepta dos arreglos como argumentos, obtiene el valor total de todos
 * los valores de ambos arreglo y regresa el total al programa que la llamo.
 */

int total_array(int arr1[], int arr2[], int size) {

    int total = 0;

    for (int i = 0; i < size; i++) {
        total += *(arr1 + i);
        total += *(arr2 + i);
    }
    return total;
}

int sumar_array(int arr1[], int arr2[], int size) {

    int total[size] = 0;

    for (int i = 0; i < size; i++) {
        total[i] = *(arr1 + i) + *(arr2 + i);
    }

    return &total;
}
