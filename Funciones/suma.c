// Bibliotecas
#include <stdio.h>

// Prototipos
int sumar(int n1, int n2);


int main(int argc, char const *argv[])
{
    // Variables
    int num1, num2;

    // Entrada de datos
    puts("Digite dos numeros a sumar, separados");
    puts("entre espacios. Ejm 10 2: ");
    scanf("%i %i", &num1, &num2);


    // Salida de datos
    printf("La suma es: %i\n", sumar(num1, num2));

    // Fin del programa
    return 0;
}


// Procesamiento de datos
int sumar(int a, int b) {
    return (a + b);
}