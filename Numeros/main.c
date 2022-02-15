/**
 * Numeros:
 * Recibe numeros enteros por teclado y los guarda en un arreglo
 * la entrada debe para cuando se teclee 0 o cuando llegue al final
 * del arreglo.
 */

// bibliotecas
#include<stdio.h>
#include<stdlib.h>


int main() {
    int datos[10];
    int numero;
    int contador = 0;

    system("clear");

    for(int i = 0; i < 10; datos[i++] = 0)
    ;

    while(numero != 0) { 

        if (datos[9] != 0) break;

        printf("Digite un numero: ");
        scanf("%d", &numero);
        
        if(numero == 0) break;
        datos[contador] = numero;
        contador++;
    }

    puts("===============================");

    for(int i = 0; i < 10; i++)
        (i == 9) ? printf("%d", datos[i]) : printf("%d, ", datos[i]);
    puts("");
}