/*******************************************************************************
 * c [basico] - Numeros aleatorios
 ******************************************************************************/

// librerías
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variables
    //--------------------------------------------------------------------------
    int numero, n, m;
    //--------------------------------------------------------------------------

    // definiciones
    //--------------------------------------------------------------------------
    // genera un número aleatorio entre 0 y 10
    // al efectua rand() modulo(%) de 11, nos genera un numero que va de cero a
    // diez.
    numero = rand() % 11;

    // genera un número aleatorio entre 0 y n número 
    // pasa el mismo efecto de la operación anterior, para conseguir un numero
    // que vaya de cero al numero que deseamos(n), debemos efectuar el modulo(%)
    // sobre rand() de la suma (n + 1) 
    // numero = rand() % (n + 1);    

    // genera un numero aleatorio entre m y n
    // utilizamo este algoritmo cuando queremos el el rango no comience en cero
    // sino en un número que nosotros definamos.
    // numero = rand() % (n - m + 1) + m;

    // función srand()
    // se utiliza esta función para evitar que los números aleatorios se repitan
    // en cada llamada al programa.
    //--------------------------------------------------------------------------

    // salida de datos
    //--------------------------------------------------------------------------
    printf("Muestra número aleatorio entre 0 y 10: %d\n", numero);
    
    printf("Digita un número: ");
    scanf("%d", &n);
    // fórmula
    numero = rand() % (n + 1);
    printf("Muestra número aleatorio entre 0 y %d: %d\n", n, numero);
    
    printf("Digita el primer número del rango: ");
    scanf("%d", &m);
    printf("Digita el segundo número del rango: ");
    scanf("%d", &n);
    // fórmula
    numero = rand() % (n - m + 1) + m;
    // numero = rand() % 11 + 20      # aleatorio entre 20 y 30
    printf("Muestra un número aleatorio entre %d y %d: %d\n", m, n, numero);
    //--------------------------------------------------------------------------
    
    // finaliza el programa
    return 0;
}
