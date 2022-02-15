// Suma de los primeros diez números pares
#include <stdio.h>

int main() {
    int i;
    int suma = 0;

    // version 1 menos eficiente
    // for (int i = 0; i <= 10; i++)
    // {
    //     if(i % 2 == 0) suma += i; 
    // }

    // version 2 mas eficiente
    for (i = 0; i <= 10; i+=2) {
        suma += i;
    }
    
    printf("La suma de los números pares es: %i\n", suma);
    
    return 0;
}