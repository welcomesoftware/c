/**
 * Hacer una estructura llamada corredor, en la cúal se tendrán los siguientes
 * miembros: nombre, edad, sexo, club.
 * 
 * Pedir datos al usuario para un corredor y asignarle una categoria de compe-
 * tición:
 *      juvenil <= 18 años
 *      señor > 18 & <= 40 años
 *      veterano > 40 años
 * posteriormente imprimir todos los datos del corredor, incluida su categoria
 * de competencia.
 */

// librerías
#include <stdio.h>
#include <string.h>

// estructuras
struct corredor 
{
    char nombre[20];
    int edad;
    char sexo[20];
    char club[20];
    char categoria[10];
} corredor1;


int main()
{
    // entrada de datos
    printf("Digite su nombre: ");
    scanf("%s", corredor1.nombre);
    printf("Digite su edad: ");
    scanf("%i", &corredor1.edad);
    printf("Digite su sexo: ");
    scanf("%s", corredor1.sexo);
    printf("Digite su club: ");
    scanf("%s", corredor1.club);
    
    // validar categoria
    if(corredor1.edad <= 18) {
        strcpy(corredor1.categoria,"Juvenil");
    }
    if(corredor1.edad > 18 && corredor1.edad <= 40) {
        strcpy(corredor1.categoria,"Señor");
    }
    if(corredor1.edad > 40) {
        strcpy(corredor1.categoria,"Veterano");
    }

    // salida de datos
    puts("\n=== Datos del corredor ===");
    puts("");
    printf("Categoria: %s\n", corredor1.categoria);
    printf("Nombre: %s\n", corredor1.nombre);
    printf("Edad: %i\n", corredor1.edad);
    printf("Sexo: %s\n", corredor1.sexo);
    printf("Club: %s\n", corredor1.club);

    return 0;
}
