// Determinar la media arítmetica de dos números

// Bibliotecas
#include <stdio.h>

// Prototipos
float promedio(int n1, int n2);


int main(int argc, char const *argv[])
{
    // Variables
    int num1;
    int num2;
    float media;

    // Entrada de datos
    puts("Digite dos números separados por un espacio: ");
    scanf("%i %i", &num1, &num2);

    // Procesamiento de datos
    media = promedio(num1, num2);

    // Salida de datos
    printf("La media arítmetica de %i, %i es %.1f\n", num1, num2, media);

    // Fin del programa
    return 0;
}

float promedio(int n1, int n2) {
    return ((n1 + n2)/ 2);
}