#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 1, c = 0, numero = 0;

    printf("Digite el número de elementos: ");
    scanf("%i", &numero);
    puts("===================================");
    for (int i = 0; i <= numero; i++)
    {
        (i < numero) ? printf("%i, ", a) : printf("%i", a);
        c = a + b;
        a = b;
        b = c;
    }
    puts("");
    
    return 0;
}