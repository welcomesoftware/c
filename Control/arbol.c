// hacer un arbol con '*' del tipo:
// digite el numero de filas: 5
// *
// **
// ***
// ****
// *****
#include <stdio.h>

int main() {
    int filas = 0;

    printf("Digite el número de filas: ");
    scanf("%i", &filas);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        puts("");
    }
    
    return 0;
}