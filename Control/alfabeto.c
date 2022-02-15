// Imprimir las letras del alphabet en minúscula usando dowhile

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char letra = 'a';

    do {
        (letra < 'z') ? printf("%c, ", letra) : printf("%c", letra);
        letra++;
    } while (letra <= 'z');
    
    return 0;
}
