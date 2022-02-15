// Determinar si un numero es par o impar usando funciones

// Bibliotecas
#include <stdio.h>

// Prototipos
void pedirdatos(int *num);
void par(int num);



int main(int argc, char const *argv[])
{
    // Variables
    int numero;

    // Entrada de datos
    pedirdatos(&numero);

    // Salida de datos
    par(numero);

    return 0;
}

void pedirdatos(int *num) {
    printf("Digite un número: ");
    scanf("%i", num);
}

void par(int num) {
    ((num % 2 == 0) ? puts("El número es par") : puts("El número es impar"));
}