// Determinar si un número es primo o no.

#include <stdio.h>

int main() {

    int numero;
    int count = 0;

    printf("Digite un número: ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0) 
            count++;
    }
    
    (count > 2) ? printf("El número es compuesto\n") : printf("El número es primo\n");
}