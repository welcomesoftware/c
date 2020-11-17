/**
 * Estructuras Anidadas:
 * una estructura puede contener como miembro a otra estructura, a esto se le
 * conoce como anidamiento de estructuras o estructuras anidadas.
 *
 * Este programa hace uso de las estructuras anidadas para tener una idea mas
 * clara de como utilizarla en la practica.
 */

// bibliotecas
#include <stdio.h>


// struct empleado {
//     char *nombre;
//     char *direccion;
//     char *ciudad;
//     char *departamento;
//     float salario;
// };

// struct cliente {
//     char *nombre;
//     char *direccion;
//     char *ciudad;
//     char *departamento;
//     float saldo;
// };

/**
 * Podemos ver que estas estructuras anteriores tienen datos en común, así que
 * podemos crear una sola estructura llamada "informacion personal" para agrupar
 * los datos en comun el las estructuras anteriores.
 */
typedef struct {
    char *direccion;
    char *ciudad;
    char *departamento;
} InformacionPersonal;

typedef struct {
    char *nombre;
    InformacionPersonal datos;
    double salario;
} Empleado;

typedef struct {
    char *nombre;
    InformacionPersonal datos;
    double saldo;
} Cliente;

int main() {
    // creamos un nuevo Cliente y Empleado
    Cliente cliente1;
    Empleado empleado1;

    // inicializamos los datos del cliente1
    cliente1.nombre = "Jose Francisco Lopéz";
    cliente1.datos.direccion = "Colonia Tara";
    cliente1.datos.ciudad = "San Pedro Sula";
    cliente1.datos.departamento = "Cortés";
    cliente1.saldo = 2500;

    // inicializamos los datos del empleado1
    empleado1.nombre = "Saul Rogríguez";
    empleado1.datos.direccion = "Colonia Cerro Verde";
    empleado1.datos.ciudad = "Choloma";
    empleado1.datos.departamento = "Cortés";
    empleado1.salario =  750;

    // salida de datos por pantalla del cliente
    puts("============== Clientes ==============");
    printf("Nombre:\t\t%s\n", cliente1.nombre);
    printf("Direccion:\t%s\n", cliente1.datos.direccion);
    printf("Ciudad:\t\t%s\n", cliente1.datos.ciudad);
    printf("Departamento:\t%s\n", cliente1.datos.departamento);
    printf("Saldo:\t\t$%.2lf\n", cliente1.saldo);
    puts("");
    puts("============= Empleados ==============");
    printf("Nombre:\t\t%s\n", empleado1.nombre);
    printf("Direccion:\t%s\n", empleado1.datos.direccion);
    printf("Ciudad:\t\t%s\n", empleado1.datos.ciudad);
    printf("Departamento:\t%s\n", empleado1.datos.departamento);
    printf("Saldo:\t\t$%.2lf\n", empleado1.salario);
    puts("");

    // termina el programa
    return 0;
}
