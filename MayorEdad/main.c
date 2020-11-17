/**
 * MayorEdad:
 * Programa que solicita el nombre edad y sexo del usuario
 * e imprime los datos solo si la persona es mayor de edad
 * y de sexo masculino.
 *
 * hacking2mars@gmail.com
 */

// Bibliotecas
#include <stdio.h>

typedef struct {
    char nombre[30];
    char sexo[20];
    short edad;
} Persona;

int main() {
    // Variables del programa
    Persona usuario;

    // Encabezado del programa
    puts("==================== Mayor de edad ====================");
    puts("Programa que solicita el nombre edad y sexo del usuario");
    puts("e imprime los datos solo si la persona es mayor de edad");
    puts("y de sexo masculino.");
    puts("=======================================================");

    // Entrada de datos por teclado
    printf("Digite su nombre: ");
    gets(usuario.nombre);
    printf("Digite su sexo: ");
    gets(usuario.sexo);
    printf("Digite su edad: ");
    scanf("%i", &usuario.edad);

    // Procesamiento condicional
    puts("-------------------------------------------------------");
    if (strcmp(usuario.sexo, "masculino") == 0 && usuario.edad >= 18) {
        printf("Nombre: %s\nSexo: \t%s\nEdad: \t%i\n", usuario.nombre, usuario.sexo, usuario.edad);
    } else {
        printf("No se pueden mostrar los datos debido\na que el usuario es menor de edad\n");
    }

    // Termina Exitosamente
    return 0;
}
