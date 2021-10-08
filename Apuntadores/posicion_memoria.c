// librerias
#include <stdio.h>


int main()
{
    // variables
    int n = 50; 
    int *pn = &n;
    float f = 1.1416; 
    float *pf = &f;
    char c = 'M'; 
    char *pc = &c;

    // salida de datos
    printf("Variable        Posición\n");
    printf("============================\n");
    printf("int:    %i      %p\n", n, pn);
    printf("float:  %.2f    %p\n", f, pf);
    printf("char:   %c       %p\n", c, pc);

    // finaliza con éxito
    return 0;
}
