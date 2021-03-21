// Mostrar los primeros 10 numeros en pantalla
#include <stdio.h>

int main() {
    int i = 1;  
    int j = 10;
    
    while (i <= 10)
    {
        (i == 10) ? printf("%i\n", i) : printf("%i - ", i);
        i++;
    }
    while (j > 0)
    {
        (j == 1) ? printf("%i\n", j) : printf("%i - ", j);
        j--;
    }

    return 0;    
}