/**
 * Digite un número, si el número supera a 10, multiplique
 * los diez primeros números, sino, súmelos.
 */

#include <stdio.h>

int main() {    
    
    // Variables
    int count = 1;
    int add = 0;
    int mult = 1;
    int num = 0;
    int result;

    printf("Digite el total de números a sumar: ");
    scanf("%i", &num);

    while (count <= 10)
    {
        if(num <= 10) {
            add += count;
            result = add;
        } 
        else if(num > 10) {
            mult *= count;
            result = mult;
        }
        count++; 
    }

    printf("El resultado es: %i\n", result);
    
    return 0;
}