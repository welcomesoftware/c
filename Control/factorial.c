// Determinar el factorial de un número.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;
    int factorial = 1;

    printf("Digite el número del cual quiere el factorial: ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
    }

    printf("El factorial del número es: %i\n", factorial);
    
    return 0;
}
