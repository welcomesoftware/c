/**
 * factorial.c
 * Calcula el valor factorial de un numero
 */

unsigned int factorial(unsigned int a) {
    
    if (a == 1) {
        return 1;
    }
    else {
        a *= factorial(a - 1);
        return a;
    }
    
}