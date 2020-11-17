/**
 * funcion: retiro
 * debita saldo de la cuenta del cliente e imprime en pantalla.
 */
int retiro(int saldo)
{
    // variables del programa
    int retiro = 0;

    // entrada de datos por teclado
    printf("Cuanto deseas retirar: ");
    scanf("%d", &retiro);
    puts("---------------------------------");
    
    // procesamiento de datos
    if (retiro > saldo) {
        merror("Monto a retirar es mayor al saldo");
        return saldo;
    } 
    
    saldo -= retiro;
    

    // formateo de datos
    if (retiro < 10) {
        printf("Retiraste: \t\t$   %d\n", retiro);
    } 
    else if(retiro >= 10 && retiro < 100) {
        printf("Retiraste: \t\t$  %d\n", retiro);
    } else {
        printf("Retiraste: \t\t$ %d\n", retiro);
    }
    
    // imprime el saldo en pantalla
    consulta(saldo);

    return saldo;
}