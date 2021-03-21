// Múltipos de 3 desde 1 hasta n

#include <stdio.h>

int main() {

    // variables
    int num;
    int i;

    printf("Digite el total de números a comprobar: ");
    scanf("%i", &num);

    i = 1;

    while (i <= num)
    {
        if(i % 3 == 0) printf("%i\n", i);
        i++;
    }
    return 0;
}