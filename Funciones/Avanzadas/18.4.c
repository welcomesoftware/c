/** Funcion que retorna un apuntador */

// bibliotecas
#include <stdio.h> 

// prototipos
int maslargo1(int x, int y);
int *maslargo2(int *x, int *y);

int main()
{
    // variables
    int a, b, masgrande1, *masgrande2;

    // entrada de datos
    printf("Ingrese dos números enteros: ");
    scanf("%d %d", &a, &b);

    // procesamiento
    masgrande1 = maslargo1(a, b);
    masgrande2 = maslargo2(&a, &b);

    // salida de datos
    printf("El valor mas grande es %d\n", masgrande1);
    printf("El valor mas grande es %d\n", *masgrande2);

    // finaliza el programa
    return 0;
}

// funciones
int maslargo1(int x, int y) 
{
   if(x > y) return x;
   
   return y;
}

int *maslargo2(int *x, int *y)
{
    if(*x > *y) return x;
    
    return y;
}
