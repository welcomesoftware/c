// Ejercicio 1
typedef struct tiempo {
    int horas;
    int minutos;
    int segundos;
} Tiempo;

// Ejercicio 2
struct datos {
    int id;
    float saldo;
    float salario;
} info;

// Ejercicio 6
struct dato {
    char cadena[20];
};

// Ejercicio 7
typedef struct {
    char direccion1[30];
    char direccion2[30];
    char ciudad[30];
    char estado[30];
    char codigoPostal[10];
} Registro;



int main() {

    // Ejercicio 3
    info.id = 100;

    // Ejercicio 4
    struct datos *p_info = info;

    // Ejercicio 5
    p_info->saldo = 5.5;
    (*p_info).saldo = 5.6;

    // Ejercicio 8
    Registro midireccion = {
        "Colonia Cerro Verde",
        "Zona 2, Bloque 6, Casa 5",
        "Choloma",
        "Cortés",
        "22102"
    }

    // termina el programa
    return 0;
}
