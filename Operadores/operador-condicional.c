#include <stdio.h>

int main() {
    int numero;

    printf("Digite un numero: ");
    scanf("%i", &numero);

    // operador condional
    (numero % 2 == 0) ? puts("El numero es par") : puts("El numero es impar");

    return 0;
}