// Multiplos de 5 desde 1 hasta n
#include <stdio.h>

int main() {

    // variables
    int i, num;

    printf("Digite los numeros a comprobar: ");
    scanf("%i", &num);

    i = 1;

    while (i <= num)
    {
        if (i % 5 == 0) printf("%i\n", i);
        i++;
    }
    return 0;
}