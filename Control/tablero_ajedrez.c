// Imprime un tablero de ajedrez utilizando ciclos while 
// y hash tags "#".

#include <stdio.h>

int main() {
    // variables
    int filas = 0;
    int columnas = 0;
    
    
    while (filas < 4)
    {
        while (columnas < 4)
        {
            (columnas % 2 == 0) ? printf("01") : printf("10");
            columnas++;
        }
        puts("");
        columnas = 0;
        filas++;
    }
    puts("");
    
    return 0;
}