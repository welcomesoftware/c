// Suma de los n primeros numeros
#include <stdio.h>

int main() {
    int count = 1, num = 0, add = 0;
    
    printf("Ingrese el total de numeros a sumar: ");
    scanf("%i", &num);

    while (count <= num)
    {
        add += count;
        count++;
    }

    printf("La suma es: %i\n", add);

    return 0;
}