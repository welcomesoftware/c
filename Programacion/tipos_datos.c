/**
 * Tipos de datos en c:
 * 
 * signed char o char
 * unsigned char
 * signed short int o short
 * unsigned short int o unsigned short
 * signed int o int
 * unsigned int
 * float
 * long int o long
 * unsigned long int unigned long
 * double
 * long double
 * 
 */
#include<stdio.h>

int main() {
    char a = 'e';                   // %c
    short b = -32768;               // %d
    int c = -2147483648;            // %i
    unsigned int d = 4294967295;    // %u
    long e = -2147483648;           // %li
    float f = 310.5f;               // %f
    double g = 0.00000000000045;    // %lf
    long double h = 100000000000010; // %ld

    printf("El size del elemento char es: %i bytes\n", sizeof(a));
    printf("El size del elemento short es: %i bytes\n", sizeof(b));
    printf("El size del elemento int es: %i bytes\n", sizeof(c));
    printf("El size del elemento unsigned es: %i bytes\n", sizeof(d));
    printf("El size del elemento long es: %i bytes\n", sizeof(e));
    printf("El size del elemento float es: %i bytes\n", sizeof(f));
    printf("El size del elemento double es: %i bytes\n", sizeof(g));
    printf("El size del elemento double es: %i bytes\n", sizeof(h));


    return 0;
}