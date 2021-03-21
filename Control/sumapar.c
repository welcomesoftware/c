// Imprime la sumas de todos los números pares que hay desde 1
// hasta n, y diga cuantos números hay.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;
    int count = 0;
    int suma = 0;

    printf("Digite el limite de números a sumar: ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
            count++;
        }
    }

    printf("La suma de números pares desde 1 a %i es: %i\n", numero, suma);
    printf("La cantidad de numeros sumados es: %i\n", count);    
    return 0;
}
