/**
 * Hipotenusa.c
 * Saca la hipotenusa de un triangulo rectangulo pidiendo al usuario 
 * el valor de los dos catetos.
 */

#include <stdio.h>
#include <math.h>

int main() {
    // Declaracion de variables
    float hipotenusa, cateto_a, cateto_b;

    puts("Calcula la Hipotenusa de un triangulo rectangulo");
    
    printf("Digite el valor de los dos catetos separados por un enter: ");
    scanf("%f %f", &cateto_a, &cateto_b);
    
    // Calculando el Teorema de Pitagoras 
    hipotenusa = sqrt(pow(cateto_a, 2) + pow(cateto_b, 2));

    printf("La hipotenusa del triangulo es: %.2f\n", hipotenusa);

    // Termina el programa
    return 0;
}