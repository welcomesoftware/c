#include <stdio.h>
#include <stdlib.h>

void limpiar() {
    system("clear");
}

int main() {

    atexit(limpiar);

    int exit = 1;

    while (exit) {
        /* code */
        puts("Limpia el programa al finalizar");
        scanf("%d", &exit);
    }

    // termina el programa
    return 0;
}
