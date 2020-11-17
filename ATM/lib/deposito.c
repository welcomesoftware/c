/**
 * funcion: deposito
 * acredita saldo de a la cuenta del cliente.
 */
int deposito(int saldo)
{
    // variables del programa
    int deposito = 0;

    // entrada de datos por teclado
    printf("Cuanto deseas depositar: ");
    scanf("%d", &deposito);
    puts("---------------------------------");

    // procesamiento de datos
    saldo += deposito;

    // formateo de datos
    if (deposito < 10) {
        printf("Depositaste: \t\t$   %d\n", deposito);
    }
    else if (deposito >= 10 && deposito < 100) {
        printf("Depositaste: \t\t$  %d\n", deposito);
    } 
    else {
        printf("Depositaste: \t\t$ %d\n", deposito);
    }

    // imprime el saldo en pantalla
    consulta(saldo);

    return saldo;
}