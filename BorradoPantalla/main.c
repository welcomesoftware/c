/*
 * Borrado Pantalla
 * main.c
 * Dario Welcome
 * hacking2mars@gmail.com
 */
#include <stdio.h>

int main() {
    // Variables del programa
    char nombre[30];
    char signo[20];

    // Encabezado del programa
    puts("Borrado de pantalla");
    puts("=============================================");

    // Entrada de datos por teclado
    printf("Digite su nombre: ");
    gets(nombre);
    printf("Digite su signo: ");
    gets(signo);

    // Procesamiento condicional de datos
    // strcmp: compara cadenas, == 0 para igualdad, ==1 para desigualdad
    if (strcmp(signo, "Aries")==0) {
        puts("=============================================");
        printf("%s es signo %s\n", nombre, signo);
    } else {
        puts("=============================================");
        printf("su signo es %s, solo puedo mostrar signo Aries\n", signo);
    }

    // Termina exitosamente
    return 0;
}
