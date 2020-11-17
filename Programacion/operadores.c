/**
 * Operador condicinal ?:
 * el operador condicional es el unico operador ternario que hay.
 */
#include<stdio.h>

int main()
{
    // ejemplo 1
    char *mensage = "there is a msg from Dario";
    mensage = mensage ? mensage : "there is no msg";
    printf("%s\n", mensage);

    // ejemplo 2
    short x = 20, y = 35, z = 0;
    z = (x > y) ? x : y;
    putchar(z);

    // operador de asignacion 
    int a, b, c;
    a=b=c=10;               // asignacion multiple




    return 0;
}
