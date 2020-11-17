/**
 * funcion: menu
 * imprime el menu en pantalla, captura la opcion
 * elegida por el usuario y retorna su valor.
 */
int menu() {
    int opcion = 0;
    
    puts("1 - Consulta de saldo");
    puts("2 - Deposito de efectivo");
    puts("3 - Retiro de efectivo");
    puts("4 - Salir del sistema");
    puts("");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    puts("---------------------------------");

    return opcion;
}